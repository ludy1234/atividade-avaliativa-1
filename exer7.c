/*#include <stdio.h>

main(){
  // Faça um algoritmo que leia as três notas de 30 alunos de uma turma. Para cada aluno, calcule a média ponderada, como segue: MP = ( n1*2 + n2*4 + n3*3 ) / 10...

  int numAlunos = 30;
  float notas[numAlunos];
  float mediaGeral = 0;

      for (int i = 0; i < numAlunos; i++) {
        float n1, n2, n3;
        printf("Digite as três notas do aluno %d (n1 n2 n3): ", i + 1);
        scanf("%f %f %f", &n1, &n2, &n3);

        float mediaPonderada = (n1 * 2 + n2 * 4 + n3 * 3) / 10;
        notas[i] = mediaPonderada;

        mediaGeral += mediaPonderada;

        if (mediaPonderada >= 7) {
            printf("Aluno %d: %.2f - Aprovado\n", i + 1, mediaPonderada);
        } else {
            printf("Aluno %d: %.2f - Reprovado\n", i + 1, mediaPonderada);
        }
    }

    mediaGeral /= numAlunos;
    printf("Média geral da turma: %.2f\n", mediaGeral);



}*/