#include <stdio.h>

main(){

    //declaracao de variavel
    int num;

    //declaracao de ponteiro
    int *p, *p2;

    num = 20;
    p = &num;
    p2 = p;

    *p = 30;//alterando o valor do conteudo da variavel num

    printf("Valor de num: %d", num);
    printf("\nValor de p: %d", *p);
    printf("\nConteudo de p: %d", p);
    printf("\nConteudo de p2: %d", *p2);
}