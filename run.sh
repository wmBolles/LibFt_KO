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

if [ "$1" == "checkerr" ]; then
    if [ $? -eq 1 ]; then
        gcc -Wall -Wextra -Werror ../ft_*.c
        exit 1
    fi
fi

if gcc -Wall -Wextra -Werror Script.c ../ft_is*.c ../ft_atoi.c ../ft_itoa.c \
       ../ft_strlen.c  -o Run; then
  chmod +x Run

  display_elapsed_time &
  output=$(./Run)
  end_time=$(date +%s)

  kill %1

  elapsed_time=$((end_time - start_time))
  echo  -e "Total execution time: \033[31m${elapsed_time}\033[0m secounds"
  echo ""

if [ $? -eq 1 ]; then
    echo -e "${RED}Compilation failed. Exiting...${RESET}"
    echo "Fix Your Functions before run The Script"
    echo -e "To see Where is The Error Enter ${GREEN}checkerr${RESET} after ./run.sh"
    echo ""
    check=1
    if [ "$1" == 'checkerr' ]; then
        gcc -Wall -Wextra -Werror ../ft_*.c
	echo ""
	exit 1;
    else
	    ./Run
	    echo ""
        exit 1;
    fi
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
cd fileDescriptor_functions && ./endl.sh && cd ..

echo ""
echo ""

if [ "$1" == "norm" ]; then
	echo "norminette : "
	norminette ../ft_*.c ../libft.h
else
	echo -e "${GREEN}To see The norm tests enter ${RESET}\"norm\"${GREEN} after ./run.sh${RESET}"
fi

alias run=./run.sh
echo ""
echo -e "${GREEN}Done."
