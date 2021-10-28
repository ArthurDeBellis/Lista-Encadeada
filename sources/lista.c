#include "../headers/lista.h"

void preenche_data(data *data, char *string){
    //o id será um valor aleatório de 0 a 100
    data->id = rand()%100;
    strcpy(data->string, string);
}
void imprime_data(data data){
    printf("Id: %d\n", data.id);
    printf("String: %s\n", data.string);
}

void faz_lista_vazia(lista *lista){
    lista->primeiro = (apontador)malloc(sizeof(celula));
    lista->ultimo = lista->primeiro;
    lista->primeiro->prox = NULL;
}

int confere_lista_vazia(lista lista){
    return (lista.primeiro->prox == lista.ultimo->prox);
}

void insere_elemento(lista *lista, data data){
    apontador novo;
    novo = (apontador)malloc(sizeof(celula));
    if(confere_lista_vazia(*lista)){
        lista->primeiro->prox = novo;
    }
    lista->ultimo->prox = novo;
    lista->ultimo = novo;
    novo->data = data;
    novo->prox = NULL;
}

//!caso queira buscar pelo id, basta trocar de string para int
apontador busca_data(lista lista, char *string){
    apontador p = lista.primeiro;
    while (p->prox!=NULL){
        if(strcmp(p->prox->data.string, string) == 0) return p;
        p = p->prox;
    }
    return p;
}

int remove_elemento(lista *lista, char *string){
    apontador aux, anterior;
    if(confere_lista_vazia(*lista)) return 0;
    anterior = busca_data(*lista, string);
    aux = anterior->prox;
    anterior->prox = aux->prox;
    if(anterior->prox==NULL) lista->ultimo = anterior;
    free(aux);
    return 1;
}

void imprime_lista(lista lista){
    apontador p = lista.primeiro->prox;
    while (p!=NULL){
        imprime_data(p->data);
        p = p->prox;
    }
    
}