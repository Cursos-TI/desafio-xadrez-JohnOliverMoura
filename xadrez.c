#include <stdio.h>

// Desafio de Xadrez - MateCheck


int main() {
       //Declarando a variavel.
       int R = 1, T = 1, B = 1, C = 1; 

       printf("\nRainha se movimenta\n");
   
       //Usando a estrutura de repetição while para a movimentação da Rainha 
       while (R <= 8)
       {
           printf(" Esquerda\n");
           R++;
       }
       
   
       printf("\nBispo se movimenta\n");
   
       //Usando a estrutura de repetição do- while para a movimentação do Dispo 
       do
       {
           printf(" Cima -  Direita\n");
           B++;
       } while (B <=5);
   
   
       printf("\nTorre se movimenta\n");
   
       //Usando a estrutura de repetição for para movimentação da Torre
   
       for (T; T <= 5; T++)
       {
           printf(" Direita\n");
       }

   //Utilizando estrutura de repetição aninhada (while e for) para a movimentação do Cavalo

   printf("\n-Cavalo se movimenta \n");

   int movimento = 1; // declaração da variavel de movimento do cavalo para garantir o movimento em "L"

   while (movimento --) //O "--" garante que a condição só será verdadeira no primeiro teste. 
   {
       for (C; C < 3; C++)
       {
           printf("Baixo \n");
       }
       printf("Esquerda \n");
   }




    return 0;
}
