#include "./headers/lista.h"

int main(){
    srand((unsigned)time(NULL)); //gerar numeros aleatórios diferentes
    
    lista novaLista;
    faz_lista_vazia(&novaLista);
    data data1, data2, data3, data4, data5;
    
    preenche_data(&data1, "data1");
    preenche_data(&data2, "data2");
    preenche_data(&data3, "data3");
    preenche_data(&data4, "data4");
    preenche_data(&data5, "data5");

    insere_elemento(&novaLista, data1);
    insere_elemento(&novaLista, data2);
    insere_elemento(&novaLista, data3);
    insere_elemento(&novaLista, data4);
    insere_elemento(&novaLista, data5);

    imprime_lista(novaLista);

    remove_elemento(&novaLista, "data2");
    remove_elemento(&novaLista, "data3");

    printf("\nPós remoção\n\n");

    imprime_lista(novaLista);
    return 0;
}
