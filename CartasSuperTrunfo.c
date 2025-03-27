#include <stdio.h>


int main() {
    
// Carta 1
int carta1;
char letra = 'A';
char codigo[50] = "A01";
char nome_da_cidade[50] = "brasilia";
unsigned long int Populacao = 2817000;
double area = 57607.84;
float pib = 2.174;
int turistico = 15;
float densidade_populacional = (double)Populacao / area;
float pib_per_capita = (pib * 1000000000) / Populacao;
float super_poder =  Populacao + area + pib + turistico + pib_per_capita + (1 / densidade_populacional);

// Carta 2
int carta2;
char letraB = 'B';
char codigoB[60] = "B02";
char nome_da_cidadeB[50] = "salvador";
unsigned long int PopulacaoB = 2418000;
float areaB = 6934.42;
float pibB = 6.295;
int turisticoB = 20;
float densidade_populacionalB = (double)PopulacaoB / areaB;
float pib_per_capitaB = (pibB * 1000000000) / PopulacaoB;
float super_poderB = PopulacaoB + areaB + pibB + turisticoB + pib_per_capitaB + (1 / densidade_populacionalB);



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


printf("== Carta1 ==\n");
printf("Letra: %c\ncodigo: %s\ncidade: %s\npopulacao: %lu\narea: %.2f\nPIB: %.2f bilhoes\nPontos turisticos: %d\ndensidade populacional: %.2f\nPIB per capita: %.2f\nsuper poder: %.2f\n", letra, codigo, nome_da_cidade, Populacao, area, pib, turistico, densidade_populacional, pib_per_capita, super_poder);

printf("== Carta2 ==\n");
printf("letra: %c\ncodigo: %s\ncidade: %s\npopulacao: %lu\narea: %.2f bilhoes\nponto turisticos: %d\ndensidade populacional: %.2f\nPIB per capita: %.2f\nsuper poder: %.2f\n", letraB, codigoB, nome_da_cidadeB, PopulacaoB, areaB, pibB, turisticoB, densidade_populacionalB, pib_per_capitaB, super_poderB);

printf("\n=== comparacao das cartas ===\n");
printf("populacao: %d venceu (1)\n", Populacao > PopulacaoB ? 1 : 2);
printf("area: %d venceu (1)\n", area > areaB ? 1 : 2);
printf("pib: %d venceu (1)\n", pib > pibB ? 1 : 2);
printf("pontos turisticos: %d venceu (1)\n", turistico > turisticoB ? 1 : 2);
printf("densidade populacional: %d vence(1)\n", densidade_populacional > densidade_populacionalB ? 1 : 2);
printf("pib per capita: %d vence (1)\n", pib_per_capita > pib_per_capitaB ? 1 : 2);
printf("super poder: %d vence (1)\n", super_poder > super_poderB ? 1 : 2);

return 0;


} 
