# Libft_KO

Libft_KO is a testing script for the "libft" library functions. It performs rigorous testing and reports results using a simple notation:

- `OK`: The function has passed the test.
- `KO`: The function has not passed the test.

Sample Test Results:
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
Total execution time: 2 seconds

itoa : OK
atoi : OK
isascii : OK
isdigit : OK
isalnum : OK
isprint : OK
isalpha : OK
strlen : OK
putstr : KO : Success
Error opening comparison files: No such file or directory
Current working directory: /home/wmbolles/Desktop/script/sources/LibFt_KO$
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
ft_isalnum.c  ft_isascii.c  ft_isprint.c  ft_putstr_fd.c  libft.h
ft_atoi.c     ft_isalpha.c  ft_isdigit.c  ft_itoa.c       ft_strlen.c
```
## we work every day to add all functions tests...
