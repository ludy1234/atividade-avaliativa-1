/*#include <stdio.h>
#include <string.h>

main(){
  // Foi feita uma estatística nas 200 principais cidades brasileiras para coletar dados sobre acidentes de trânsito. Foram obtidos os seguintes dados:  


    int codigo_cidade, veiculos_passeio, acidentes_com_vitimas;
    char estado[3];
    int maior_indice_acidentes = -1, menor_indice_acidentes = -1;
    char cidade_maior_indice[100], cidade_menor_indice[100];
    int total_veiculos = 0, total_cidades = 0;
    int total_acidentes_RS = 0, total_cidades_RS = 0;

    for (int i = 1; i <= 200; i++) {
        printf("Dados da cidade %d:\n", i);
        printf("Código da cidade: ");
        scanf("%d", &codigo_cidade);
        if (codigo_cidade == 0) {
            break;
        }

        printf("Estado (2 letras): ");
        scanf("%s", estado);

        printf("Número de veículos de passeio em 1992: ");
        scanf("%d", &veiculos_passeio);

        printf("Número de acidentes de trânsito com vítimas em 1992: ");
        scanf("%d", &acidentes_com_vitimas);


        float indice_acidentes = (float)acidentes_com_vitimas / veiculos_passeio;


        if (maior_indice_acidentes == -1 || indice_acidentes > maior_indice_acidentes) {
            maior_indice_acidentes = indice_acidentes;
            strcpy(cidade_maior_indice, estado);
        }
        if (menor_indice_acidentes == -1 || indice_acidentes < menor_indice_acidentes) {
            menor_indice_acidentes = indice_acidentes;
            strcpy(cidade_menor_indice, estado);
        }


        total_veiculos += veiculos_passeio;
        total_cidades++;


        if (strcmp(estado, "RS") == 0) {
            total_acidentes_RS += acidentes_com_vitimas;
            total_cidades_RS++;
        }
    }

  
    float media_veiculos = (float)total_veiculos / total_cidades;
    float media_acidentes_RS = (float)total_acidentes_RS / total_cidades_RS;

    printf("\n");
    printf("Maior índice de acidentes: %.2f (Cidade: %s)\n", maior_indice_acidentes, cidade_maior_indice);
    printf("Menor índice de acidentes: %.2f (Cidade: %s)\n", menor_indice_acidentes, cidade_menor_indice);
    printf("Média de veículos nas cidades brasileiras: %.2f\n", media_veiculos);
    printf("Média de acidentes com vítimas entre as cidades do Rio Grande do Sul: %.2f\n", media_acidentes_RS);


}
*/