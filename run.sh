#!/bin/bash

display_elapsed_time() {
  end_time=$(date +%s)
  elapsed_time=$((end_time - start_time))
  echo -ne "Elapsed time: ${elapsed_time} seconds\r"
}


start_time=$(date +%s)

#if command -v cc >/dev/null 2>&1; then
#  echo "cc is already installed."
#else
#  echo "cc is not installed. Installing it..."

#  if command -v apt >/dev/null 2>&1; then
#    sudo apt update
#    sudo apt install -y cc
#  else
#    echo "Package manager not found. Please install 'cc' manually."
#  fi
#fi

gcc -Wall -Wextra -Werror Script.c ../ft_*.c -o Run
#cc check_puts.c ../ft_putstr_fd.c -o puts_run

chmod +x Run

display_elapsed_time &

cd pypkg &&  ./run
cd ..

output=$(./Run)
end_time=$(date +%s)

kill %1

elapsed_time=$((end_time - start_time))
echo "Total execution time: ${elapsed_time} seconds"
echo ""

echo "$output"

cc ./fileDescriptor/check_puts.c ../ft_putstr_fd.c -o puts_run
./puts_run | cat -e

echo ""

rm Run puts_run

alias run=./Script.sh
