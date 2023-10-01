/*#include <stdio.h>

main(){
  // A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o salário e número de filhos. A prefeitura deseja saber:  

    float salario, soma_salario = 0, media_salario;
    int num_filhos, soma_filhos = 0, total_pessoas = 0, pessoas_salario_ate_100 = 0;
    float maior_salario = 0;


    do {

        printf("Digite o salário (ou um valor negativo para sair): ");
        scanf("%f", &salario);


        if (salario < 0)
            break;

    
        soma_salario += salario;

      
        printf("Digite o número de filhos: ");
        scanf("%d", &num_filhos);

   
        soma_filhos += num_filhos;

 
        if (salario > maior_salario)
            maior_salario = salario;

    
        if (salario <= 100)
            pessoas_salario_ate_100++;

        total_pessoas++;

    } while (1); 


    if (pessoas_salario_ate_100 != 0) {
        media_salario = soma_salario / pessoas_salario_ate_100;
    } else {
        media_salario = 0;
    }

    float media_filhos = (float)soma_filhos / pessoas_salario_ate_100;

   
    float percentual_salario_ate_100 = ((float)pessoas_salario_ate_100 / total_pessoas) * 100;

  
    printf("Média do salário da população: R$%.2f\n", media_salario);
    printf("Média do número de filhos: %.2f\n", media_filhos);
    printf("Maior salário: R$%.2f\n", maior_salario);
    printf("Percentual de pessoas com salário até R$100,00: %.2f%%\n", percentual_salario_ate_100);


}*/