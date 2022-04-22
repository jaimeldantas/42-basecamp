Ex00
#include <stdio.h>
#include <string.h>

int    main(void)
{
    char    s1[15] = "111";
    char    s2[15] = "234";
    int    r;

    r = ft_strcmp(s1, s2);
    if (r) < 0)
    {
        printf("A string s1 menor.\n");
    }
    else if (r > 0)
    {
        printf("A string s2 menor.\n");
    }
    else
    {
        printf("As strings coecidem");
    }
    return (0);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Ex01
#include <stdio.h>
#include <string.h>

int    main(void)
{
    char    s1[15] = "frase";
    char    s2[15] = "fraseu";
    int        r;

    r = ft_strncmp(s1, s2, 55);

    if (r < 0)
    {
        printf("A string s1 menor %d\n", r);
    }
    else if (r > 0)
    {
        printf("A string s2 menor %d\n", r);
    }
    else
    {
        printf("As strings coecidem %d\n", r);
    }
    return (0);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

Ex02 
#include <stdio.h>
#include <string.h>

int        main(void)
{
    char s1[20] = "Hello";
    char s2[] = ", World!";

    printf("s1 = %s\ns2 = %s\n", s1, s2);
    ft_strcat(s1, s2);
    printf("resultado = %s\n", s1);

    return (0);
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

Ex03

#include <stdio.h>
#include <string.h>

int        main(void)
{
    char s1[20] = "Hello";
    char s2[] = ", World!";

    printf("s1 = %s\ns2 = %s\n", s1, s2);
    ft_strncat(s1, s2, 3);
    printf("resultado = %s\n", s1);

    return (0);
}