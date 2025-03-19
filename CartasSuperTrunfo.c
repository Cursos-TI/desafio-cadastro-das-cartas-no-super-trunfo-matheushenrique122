#include <stdio.h>


int main() {
    
    // Carta 1
    char letra = 'A';
    char codigo[50] = "A01";
    char nome_da_cidade[50] = "brasilia";
    int Populacao = 2817000;
    float area = 57607.84;
    float pib = 2.174;
    int turistico = 15;

    // Carta 2
    char letraB = 'B';
    char codigoB[60] = "B02";
    char nome_da_cidadeB[50] = "salvador";
    int PopulacaoB = 2418000;
    float areaB = 6934.42;
    float pibB = 629.54;
    int turisticoB = 20;


// carta 1
    printf ("letra: %c\n", letra);
    printf ("Codigo do estado e: %s\n", codigo);
    printf ("Nome da cidade: %s\n", nome_da_cidade);
    printf ("População: %d\n", Populacao);
    printf ("Área: %f\n", area);
    printf ("pib: %.2f bilhões de reais\n", pib);
    printf ("Pontos turisticos: %d\n", turistico);

    printf ("\n");

    // carta 2
    printf ("letra: %c\n", letraB);
    printf ("Codigo do estado e: %s\n", codigoB);
    printf ("Nome da cidade: %s\n", nome_da_cidadeB);
    printf ("População: %d\n", PopulacaoB);
    printf ("Área: %f\n", areaB);
    printf ("pib: %.2f bilhões de reais\n", pibB);
    printf ("Pontos turisticos: %d\n", turisticoB);


    return 0;
}
