# Libft_KO

Libft_KO is a testing script for the "libft" library functions. It performs rigorous testing and reports results using a simple notation:

- `OK`: The function has passed the test.
- `KO`: The function has not passed the test.

## Sample OK Test Results:
```
  ____________________________________________________________
//     _       _     _       _____                            \\
|     / #     / $   / #     / ####### _                        |
|     | #     | #   | #     | #      / #      #  #   ###       |
|     | #     | #   | ####  | ##### | ###     # #   #   #      |
|     | #     | #   | #   # | #      | # _____##____#__ #      |
|     | #     |  #  | ##### | #      | #      # #   #   #      |
|     | ###### \___ \______ | #       \ #     #  #   ###       |
|     \______/              \__/       \_#    wm___bolles      |
\\____________________________________________________________//
Total execution time: 2 secounds

ft_atoi : OK
ft_itoa : OK
ft_isascii : OK
ft_isdigit : OK
ft_isalnum : OK
ft_isprint : OK
ft_isalpha : OK
ft_strlen : OK
ft_putstr : OK
ft_putchar : OK
ft_putnbr : OK
ft_putendl : OK


To see The norm tests enter "norm" after ./run.sh

Done.
```
## Sample KO Test Results:
```
  ____________________________________________________________
//     _       _     _       _____                            \\
|     / #     / $   / #     / ####### _                        |
|     | #     | #   | #     | #      / #      #  #   ###       |
|     | #     | #   | ####  | ##### | ###     # #   #   #      |
|     | #     | #   | #   # | #      | # _____##____#__ #      |
|     | #     |  #  | ##### | #      | #      # #   #   #      |
|     | ###### \___ \______ | #       \ #     #  #   ###       |
|     \______/              \__/       \_#    wm___bolles      |
\\____________________________________________________________//
Total execution time: 2 secounds

ft_atoi : KO

Test4   :	          -1337
atoi    :	-1337
ft_atoi :	0

Test5   :	          +1337
atoi    :	1337
ft_atoi :	0

Test6   :	          1337
atoi    :	1337
ft_atoi :	0

ft_itoa : OK
ft_isascii : OK
ft_isdigit : OK
ft_isalnum : OK
ft_isprint : OK
ft_isalpha : OK
ft_strlen : OK
ft_putstr : OK
ft_putchar : OK

```

### argements 
```
./run.sh norm // to display all norminette tests
./run.sh checkerr // in the case of gcc errors
```
<h5>Use this script to ensure the correctness and reliability of your "libft" library functions.</h5>

# HOW TO USE

### step_1 : open your Libft project folder by 
``` 
cd libft 
```
### step_2 : clone the LibFt_KO script into the libft folder by enter the following command
``` 
git clone git@github.com:wmBolles/LibFt_KO.git 
```

###### WARNING : REMOVE ALL TEST FUNCTIONS OR INCORRECT FUNCTIONS NAME FROM YOUR LIBFT PROJECT.

### step_3 : change directory to the script folder /LibFt_KO
``` 
cd Libft_KO 
```
### step_4 : run the script by enter the following command
```
./run.sh
```

# Errors cases
#### 1 : if you change something in the LibFt_KO basecode
#### 2 : if you have incorrect protype or file name.c or header name in your libft project
#### 3 : if you have more+ or less- functions in your project(please check all functions exist in the test bellow)

# Functions
```
ft_isalnum.c  ft_isascii.c  ft_isprint.c  ft_putstr_fd.c  ft_*_fd.c
ft_atoi.c     ft_isalpha.c  ft_isdigit.c  ft_itoa.c       ft_strlen.c
```
### we work every day to add all functions tests...
