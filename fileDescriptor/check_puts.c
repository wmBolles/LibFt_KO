#include "../../libft.h"
#include "../Header.h"

int	main(void)
{
    char cwd[1024];
    if (getcwd(cwd, sizeof(cwd)) != NULL) {
        printf("Current working directory: %s\n", cwd);
    } else {
        perror("getcwd() error");
        return 1;
    }
    char *test = "wmbolles\0 Stop here !";
    perror("putstr :\x1b[31m KO \x1b[0m");
    
    FILE *file1 = freopen("./output.txt", "w", stdout);
    if (!file1) {
        perror("\x1b[31mError opening output.txt\x1b[0m");
        return 1;
    }
    
    ft_putstr_fd(test, 1);
    fclose(stdout);

    puts(test);

    FILE *file1_compare = fopen("/home/wmbolles/Desktop/script/sources/output.txt", "r");
    FILE *file22 = fopen("/home/wmbolles/Desktop/script/sources/expected_output.txt", "r");

    if (!file1_compare || !file22) {
        perror("\x1b[31mError opening comparison files\x1b[0m");
	return 1;
    }

    int is_same = 1;
    char ch1, ch2;

    while ((ch1 = fgetc(file1_compare)) != EOF && (ch2 = fgetc(file22)) != EOF) {
        if (ch1 != ch2) {
            is_same = 0;
            break;
        }
    }

    if (is_same) {
        printf("OK\n");
    } else {
        printf("KO\n");
    }

    fclose(file1_compare);
    fclose(file22);
    KO;
    return 0;
}

