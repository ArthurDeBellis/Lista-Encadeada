#ifndef LISTA_H
#define LISTA_H

#include "estruturas.h"

void preenche_data(data *data, char *string);
void imprime_data(data data);

void faz_lista_vazia(lista *lista);
int confere_lista_vazia(lista lista);
void insere_elemento(lista *lista, data data);

apontador busca_data(lista lista, char *string);
int remove_elemento(lista *lista, char *string);

void imprime_lista(lista lista);

#endif