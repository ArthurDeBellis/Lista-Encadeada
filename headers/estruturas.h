#ifndef ESTRUTURAS_H
#define ESTRUTURAS_H
#define TAM 60

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// *Estruturas de dados
typedef struct data{
    int id;
    char string[TAM];
}data;

typedef struct celula *apontador;

typedef struct celula{
    data data;
    struct celula *prox;
}celula;

typedef struct lista{
    apontador primeiro;
    apontador ultimo;
}lista;

#endif