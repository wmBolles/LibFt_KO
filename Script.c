#include "../libft.h"
#include "Header.h"

void    check_itoa(void);
void    check_atoi(void);
void    check_isascii(void);
void    check_isdigit(void);
void    check_isalpha(void);
void    check_isalnum(void);
void    check_isprint(void);
void    check_strlen(void);

int     main(void)
{  
    check_atoi();
    check_itoa();
    check_isascii();
    check_isdigit();
    check_isalnum();
    check_isprint();
    check_isalpha();
    check_strlen();
}

void    check_isascii(void)
{
    int isok = 0;
    int count = 0;
    printf("ft_isascii : ");

    for(int i = -10; i < 260; i++)
    {
        int    res = (ft_isascii(i) == isascii(i));
        if (!res)
        {
            if (ft_isascii(i) > 0 && isspace(i) > 0)
                  break;
            if (isok == count)
                KO;
            printf("TEST[%d]      \t%d\n", i, i);
            printf("@");
            printf("ft_isascii  :\t%d\n\n", ft_isascii(i));
	}
        else
            isok += (2 >> 1);
        count++;
    }
    if (isok == count)
        OK;
}

void    check_isdigit(void)
{
    int isok = 0;
    int count = 0;
    printf("ft_isdigit : ");

    for(int i = -10; i < 260; i++)
    {
        int    res = (ft_isdigit(i) == isdigit(i));
        if (!res)
        {
            if (ft_isdigit(i) > 0 && isdigit(i) > 0)
                  break;
            if (isok == count)
                KO;
            printf("TEST[%d]      \t%d\n", i, i);
            printf("isdigit    :\t%d\n", isdigit(i));
            printf("\x1b[31mft_isdigit\x1b[0m :\t%d\n\n", ft_isdigit(i));
        }
        else
            isok += (2 >> 1);
        count++;
    }
    if (isok == count)
        OK;
}

void    check_isalpha(void)
{
    int isok = 0;
    int count = 0;

    printf("ft_isalpha : ");

    for(int i = -10; i < 260; i++)
    {
        int    res = (ft_isalpha(i) == isalpha(i));
        if (!res)
        {
            if (ft_isalpha(i) > 0 && isalpha(i) > 0)
                  break;
            if (isok == count)
                KO;
            printf("TEST[%d]      \t%d\n", i, i);
            printf("isalpha    :\t%d\n", isalpha(i));
            printf("\x1b[31mft_isalpha\x1b[0m :\t%d\n\n", ft_isalpha(i));
        }
        else{
            isok += (2 >> 1);
        }
        count++;
    }
    if (isok == count)
        OK;
}

void    check_isalnum(void)
{
    int isok = 0;
    int count = 0;
    printf("ft_isalnum : ");

    for(int i = -10; i < 260; i++)
    {
        int    res = (ft_isalnum(i) == isalnum(i));
        if (!res)
        {
            if (ft_isalnum(i) > 0 && isalnum(i) > 0)
                  break;
            if (isok == count)
                KO;
            printf("TEST[%d]      \t%d\n", i, i);
            printf("isalnum    :\t%d\n", isalnum(i));
            printf("\x1b[31mft_isalnum\x1b[0m :\t%d\n\n", ft_isalnum(i));
        }
        else
            isok += (2 >> 1);
        count++;
    }
    if (isok == count)
        OK;
}

void    check_isprint(void)
{
    int isok = 0;
    int count = 0;
    printf("ft_isprint : ");

    for(int i = -10; i < 260; i++)
    {
        int    res = (ft_isprint(i) == isprint(i));
        if (!res)
        {
            if (ft_isprint(i) > 0 && isprint(i) > 0)
                  break;
            if (isok == count)
                KO;
            printf("TEST[%d]      \t%d\n", i, i);
            printf("isprint    :\t%d\n", isprint(i));
            printf("\x1b[31mft_isprint\x1b[0m :\t%d\n\n", ft_isprint(i));
        }
        else
            isok += (2 >> 1);
        count++;
    }
    if (isok == count)
        OK;
}

void    check_strlen(void)
{
    char    *tst1 = "";
    char    *tst2 = "   hELLO";
    char    *tst3 = "wabolles\0stop here!";

    printf("ft_strlen : ");

    int res1 = (strlen(tst1) == ft_strlen(tst1));
    int res2 = (strlen(tst2) == ft_strlen(tst2));
    int res3 = (strlen(tst3) == ft_strlen(tst3));

    if (res1 && res2 && res3)
    {
        printf("\x1b[32mOK\x1b[0m");
    }
    else{
        printf("\x1b[31mKO\n\n\x1b[0m");
        printf("Test1   :\t%s\n", tst1);
        printf("strlen    :\t%ld\n", strlen(tst1));
        printf("\x1b[31mft_strlen\x1b[0m :\t%ld\n\n", ft_strlen(tst1));
    }

    if (!(res2))
    {
        if (res1)
            KO;
        printf("Test2   :\t%s\n", tst2);
        printf("strlen    :\t%ld\n", strlen(tst2));
        printf("\x1b[31mft_strlen\x1b[0m :\t%ld\n\n", ft_strlen(tst2));
    }

    if (!(res3))
    {
        if ((res2) && (res1))
            KO;
        printf("Test3   :\t%s\n", tst1);
        printf("strlen    :\t%ld\n", strlen(tst3));
        printf("\x1b[31mft_strlen\x1b[0m :\t%ld\n\n", ft_strlen(tst3));
    }
   
}

char			*itoa(int n);

int     fstrstr(char *str1, char* str2)
{
    if (!(strlen(str1) == strlen(str2)))
        return (0);
    for (size_t i = 0; i < strlen(str1); i++)
    {
        if (str1[i] != str2[i])
            return(0);
    }
    return(1);
}

void    check_itoa(void)
{
    size_t isok = 0;
    size_t count = 0;
    printf("ft_itoa : ");

    for(int i = -214; i < 7483647; i++)
    {
        int    res = (fstrstr(ft_itoa(i), itoa(i)));
        if (!res)
        {
            if (isok == count)
                KO;
            printf("TEST[%d]      \t%d\n", i, i);
            printf("itoa    :\t%s\n", itoa(i));
            printf("\x1b[31mft_itoa\x1b[0m :\t%s\n\n", ft_itoa(i));
        }
        else
            isok += (2 >> 1);
        count++;
    }
    if (isok == count)
        OK;
}


void    check_atoi(void)
{
    char    *check1 = "        -+---+1234abc5689";
    char    *check2 = "\0";
    char    *check3 = "         ++-1234567891011";
    char    *check4 = "          -1337";
    char    *check5 = "          +1337";
    char    *check6 = "          1337";

    printf("ft_atoi : ");
    
    int res1 = (atoi(check1) == ft_atoi(check1));
    int res2 = (atoi(check2) == ft_atoi(check2));
    int res3 = (atoi(check3) == ft_atoi(check3));
    int res4 = (atoi(check4) == ft_atoi(check4));
    int res5 = (atoi(check5) == ft_atoi(check5));
    int res6 = (atoi(check6) == ft_atoi(check6));


    if (res1 && res2 && res3 && res4 && res5 && res6) // in all cases
        OK;
    
    if (!(res1))
    {
        printf("KO\n\n");
        printf("Test1   :\t%s\n", check1);
        printf("atoi    :\t%d\n", atoi(check1));
        printf("\x1b[31mft_atoi\x1b[0m :\t%d\n\n", ft_atoi(check1));
    }

    if (!(res2))
    {
        if (res1)
            KO;
        printf("Test2   :\t%s\n", check2);
        printf("atoi    :\t%d\n", atoi(check2));
        printf("\x1b[31mft_atoi\x1b[0m :\t%d\n\n", ft_atoi(check2));
    }

    if (!(res3))
    {
        if ((res2) && (res1))
            KO;
        printf("Test3   :\t%s\n", check3);
        printf("atoi    :\t%d\n", atoi(check3));
        printf("\x1b[31mft_atoi\x1b[0m :\t%d\n\n", ft_atoi(check3));
    }

    if (!(res4))
    {
        if ((res3) && (res2))
            KO;
        printf("Test4   :\t%s\n", check4);
        printf("atoi    :\t%d\n", atoi(check4));
        printf("\x1b[31mft_atoi\x1b[0m :\t%d\n\n", ft_atoi(check4));
    }

    if (!(res5))
    {
        if ((res4) && (res3))
            KO;
        printf("Test5   :\t%s\n", check5);
        printf("atoi    :\t%d\n", atoi(check5));
        printf("\x1b[31mft_atoi\x1b[0m :\t%d\n\n", ft_atoi(check5));
    }

    if (!(res6))
    {
        if ((res5) && (res4))
            KO;
        printf("Test6   :\t%s\n", check6);
        printf("atoi    :\t%d\n", atoi(check6));
        printf("\x1b[31mft_atoi\x1b[0m :\t%d\n\n", ft_atoi(check6));
    }
}

static size_t	get_digits(int n)
{
	size_t	i;

	i = 1;
	while (n /= 10)
		i++;
	return (i);
}

char			*itoa(int n)
{
	char		*str_num;
	size_t		digits;
	long int	num;

	num = n;
	digits = get_digits(n);
	if (n < 0)
	{
		num *= -1;
		digits++;
	}
	if (!(str_num = (char *)malloc(sizeof(char) * (digits + 1))))
		return (NULL);
	*(str_num + digits) = 0;
	while (digits--)
	{
		*(str_num + digits) = num % 10 + '0';
		num = num / 10;
	}
	if (n < 0)
		*(str_num + 0) = '-';
	return (str_num);
}
