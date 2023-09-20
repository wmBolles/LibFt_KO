#!/bin/bash

RED='\033[31m'
GREEN='\033[32m'
RESET='\033[0m'

display_elapsed_time() {
  end_time=$(date +%s)
  elapsed_time=$((end_time - start_time))
  echo -ne "Elapsed time: ${elapsed_time} seconds\r"
}

start_time=$(date +%s)

cd pypkg && ./run && cd ..

if gcc -Wall -Wextra -Werror Script.c ../ft_is*.c ../ft_atoi.c ../ft_itoa.c \
       ../ft_strlen.c	-o Run; then
  chmod +x Run

  display_elapsed_time &
  output=$(./Run)
  end_time=$(date +%s)

  kill %1

  elapsed_time=$((end_time - start_time))
  echo "Total execution time: ${elapsed_time} seconds"
  echo ""

  echo "$output"

  if [ -e "./Run" ]; then
    rm Run
  fi

#  if gcc -Wall -Wextra -Werror ./fileDescriptor/check_puts.c ../ft_putstr_fd.c -o puts_run; then
#    ./puts_run | cat -e
#    echo ""
#    rm puts_run
#  else
#    echo -e "${RED}Compilation of puts_run failed. Skipping.${RESET}"
#  fi
#else
#  echo -e "${RED}Compilation of Run failed. Skipping.${RESET}"
fi

cd fileDescriptor_functions && ./check.sh && cd ..

alias run=./run.sh
echo -e "${GREEN}done."
