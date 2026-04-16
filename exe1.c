#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

typedef struct No{
    char valor;
    struct No *prox;
}No;

typedef struct Fila{
    struct No *inicio;
    struct No *fim;
}Fila;

Fila *criarFila(){
    Fila *f = malloc(sizeof(Fila));
    f->inicio = NULL;
    f->fim = NULL;
}

bool isEmptyFila(Fila *f){
    return f->inicio == NULL;

}

int inserir(Fila *f, char valor){
    if(isEmptyFila(f)){
        printf("\nFila vazia\n");
        return 0;
    }
}

int main(){


return 0;}
