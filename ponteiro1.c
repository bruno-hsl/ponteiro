#include <stdio.h>

main(){
    //declaracao de variavel

    int numero = 10;

    //declaracao de ponteiro
    //é uma variavel que armazena a referencia do endereco de outra variavel, ou seja, aponta para  um endereco de memoria
    int *x;

    //inicializar o ponteiro
    x = &numero;

    //visualizacao dos enderecao de memoria da variavel
    printf("Endereco de memoria de numero: %d", &numero);

    //visualizacao dos enderecao de memoria do ponteiro
    printf("\nEndereco de memoria de numero: %d", &x);

    //visualizacao do conteudo da variavel numero
    printf("\nConteudo da variavel numero: %d", numero);

     //visualizacao do conteudo da variavel ponteiro
    printf("\nConteudo do ponteiro: %d", x);
}