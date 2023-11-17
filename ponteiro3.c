#include <stdio.h>

void mudarNumero(int *valor){
    *valor = 10;
}

main(){
    int numero;
    mudarNumero(&numero);
    printf("Conteudo de numero: %d", numero);
}