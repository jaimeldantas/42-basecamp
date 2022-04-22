TESTES PARA LISTA C01
ex00
#include <stdio.h>
int main()
{
    int    a = 24;
    
    printf("Valor antes: %d\n", a);
    ft_ft(&a);
    printf("Valor depois: %d\n", a);
}

ex01
#include <stdio.h>
int        main(void)
{
    int a = 999;
    int *ptr1 = &a;
    int **ptr2 = &ptr1;
    int ***ptr3 = &ptr2;
    int ****ptr4 = &ptr3;
    int *****ptr5 = &ptr4;
    int ******ptr6 = &ptr5;
    int *******ptr7 = &ptr6;
    int ********ptr8 = &ptr7;
    int *********ptr9 = &ptr8;

    printf("Antes: %d\n", a);
    ft_ultimate_ft(ptr9);
    printf("Depois: %d\n", a);
}
ex02
#include <stdio.h>
int main()
{
    int x = 777;
    int y = 1024;

    printf("X antes: %d\n", x);
    printf("Y antes: %d\n", y);
    ft_swap(&x, &y);
    printf("\nX depois: %d\n", x);
    printf("Y depois: %d\n", y);
    
}

ex03
#include <stdio.h>
int    main()
{
    int x = 25;
    int y = 3;
    int resul = 666;
    int resto = 777;
    
    printf("Valor de x: %d\n" ,x);
    printf("Valor de y:%d\n" ,y);
    printf("Valor arbitrário resul: %d\n" ,resul);
    printf("Valor arbitrário do resto: %d\n" ,resto);
    ft_div_mod(x, y, &resul, &resto);
    printf("\nResultado divisão:%d\n" ,resul);
    printf("Resto: %d\n" ,resto);
}
ex04
#include <stdio.h>
int main()
{
    int x = 91;
    int y = 15;
    
    ft_ultimate_div_mod(&x, &y);
    printf("Resultado da divisão: %d\n", x);
    printf("Resto: %d\n", y);
}


ex05
int        main(void)
{
    char string[] = "lampada";
    char *ptr = &string[0];
    
    ft_putstr(ptr);
}

ex06

#include <stdio.h>
int        main(void)
{
    char    string[] = "bis";
    char    *ptr = &string[0];
    int    tamanho;
    
    tamanho = ft_strlen(ptr);
    printf("Tamanho: %d\n", tamanho);
}