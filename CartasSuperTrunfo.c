#include <stdio.h>


int main() {
    
    // Carta 1
    char letra = 'A';
char codigo[50] = "A01";
char nome_da_cidade[50] = "brasilia";
int Populacao = 2817000;
double area = 57607.84;
float pib = 2.174;
int turistico = 15;
float densidade_populacional = (double)Populacao / area;
float pib_per_capita = (pib * 1000000000) / Populacao;

// Carta 2
char letraB = 'B';
char codigoB[60] = "B02";
char nome_da_cidadeB[50] = "salvador";
int PopulacaoB = 2418000;
float areaB = 6934.42;
float pibB = 6.295;
int turisticoB = 20;
float densidade_populacionalB = (double)PopulacaoB / areaB;
float pib_per_capitaB = (pibB * 1000000000) / PopulacaoB;


// carta 1
printf ("letra: %c\n", letra);
printf ("Codigo do estado e: %s\n", codigo);
printf ("Nome da cidade: %s\n", nome_da_cidade);
printf ("Populacao: %d\n", Populacao);
printf ("Area: %f\n", area);
printf ("pib: %.2f bilhoes de reais\n", pib);
printf ("Pontos turisticos: %d\n", turistico);
printf("Densidade Populacional: %f\n", densidade_populacional);
printf("pib per capita: %f\n", pib_per_capita);

printf ("\n");

// carta 2
printf ("letra: %c\n", letraB);
printf ("Codigo do estado e: %s\n", codigoB);
printf ("Nome da cidade: %s\n", nome_da_cidadeB);
printf ("Populacao: %d\n", PopulacaoB);
printf ("Area: %f\n", areaB);
printf ("pib: %.2f bilhoes de reais\n", pibB);
printf ("Pontos turisticos: %d\n", turisticoB);
printf("Densidade Populacional: %f\n", densidade_populacionalB);
printf("pib per capita: %f\n", pib_per_capitaB);


    return 0;
}
