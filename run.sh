#!/bin/bash

RED='\033[31m'
GREEN='\033[32m'
RESET='\033[0m'

display_elapsed_time() {
  end_time=$(date +%s)
  elapsed_time=$((end_time - start_time))
  echo -ne "Elapsed time: ${elapsed_time} seconds\r"
}

clear

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
  echo  -e "Total execution time: \033[31m${elapsed_time}\033[0m secounds"
  echo ""

if [ $? -eq 0 ]; then
  echo -e "${RED}Compilation failed. Exiting...${RESET}";
  ./Run && rm Run
  echo ""
  if [ "$1" == "checkerr" ]; then
    echo "${GREEN}Checking for errors...${RESET}"
    gcc -Wall -Wextra -Werror ../ft_*.c
  fi
  exit 1

fi
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
cd fileDescriptor_functions && ./checkchar.sh && cd ..
cd fileDescriptor_functions && ./putnbr.sh && cd ..

echo ""
echo "norminette test : "
echo ""

if [ "$1" == "norm" || "$2" == "norm" ]; then
	norminette ../ft_*.c ../libft.h
fi

alias run=./run.sh
echo ""
echo -e "${GREEN}Done."
