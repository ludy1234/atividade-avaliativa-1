/*#include <stdio.h>

main(){
  //Em uma eleição presidencial existem quatro candidatos. Os votos são informados através de códigos. Os dados utilizados para a contagem dos votos obedecem à seguinte codificação:  


    int voto, candidato1 = 0, candidato2 = 0, candidato3 = 0, candidato4 = 0, nulo = 0, branco = 0;

    printf("Digite o código do candidato (1 a 4), 5 para voto nulo, 6 para voto em branco ou 0 para finalizar: ");

    while (1) {
        scanf("%d", &voto);

        if (voto == 0) {
            break;
        }

        switch (voto) {
            case 1:
                candidato1++;
                break;
            case 2:
                candidato2++;
                break;
            case 3:
                candidato3++;
                break;
            case 4:
                candidato4++;
                break;
            case 5:
                nulo++;
                break;
            case 6:
                branco++;
                break;
            default:
                printf("Código de voto inválido!\n");
        }

        printf("Digite o código do candidato (1 a 4), 5 para voto nulo, 6 para voto em branco ou 0 para finalizar: ");
    }

    printf("Total de votos para o Candidato 1: %d\n", candidato1);
    printf("Total de votos para o Candidato 2: %d\n", candidato2);
    printf("Total de votos para o Candidato 3: %d\n", candidato3);
    printf("Total de votos para o Candidato 4: %d\n", candidato4);
    printf("Total de votos nulos: %d\n", nulo);
    printf("Total de votos em branco: %d\n", branco);


}*/