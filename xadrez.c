#include <stdio.h>

//Declarando dentro do void o comando de repetição/ loop da movimentação da Rainha
void MovimentoRainha(int casas){
    if (casas > 0) {
        printf("Esquerda\n");
        MovimentoRainha(casas - 1);
    }
}

//Declarndo dentro do void o comando de repetição/ loop da movimentação da torre 
void MovimentoTorre(int Mov){
    if(Mov > 0){
        printf("Direita\n");
        MovimentoTorre(Mov - 1);
    }
}

//Declarei dentro desse void a movimentação do Bispo usando loops aninhados
void MovimentoBispo(){
    int b = 0, i = 0;

    while (b <= 4)
    {   
        b++;
        printf("vertical - "); 
    
        for (i; i <= b; i++)
        {
            printf("horizontal  \n");
           break;
        } 
        
    }
}

int main(){

    int opcao;// Declarando variável para usar dentro do switch.

    printf("\nEscolha a peça que deseja movimentar: \n");

    printf("1 - Rainha\n");
    printf("2 - Bispo\n");
    printf("3 - Torre\n");
    printf("4 - Cavalo\n");

    scanf("%i", &opcao);


    switch (opcao)
    {
    case 1:

        printf("\nRainha se movimenta:\n"); // Chamando/invocando o comando MovimentoRainha criado no void, resultando no loop de repetição da ação da peça na tela.

        MovimentoRainha(8);

        break;
    
    case 2:  

        printf("\nBispo se movimenta:\n"); //Chamando/invocando o comando MovimentoBispo criado no void, resultando no loop de repetição da ação da peça na tela.

        MovimentoBispo();

        break;
    case 3:  

        printf("\nTorre se movimenta:\n"); //Chamando/invocando o comando MovimentoTorre criado no void, resultando no loop de repetição da ação da peça na tela.

        MovimentoTorre(5);

        break;
    case 4:    

        //A movimentação do cavalo foi feita através de loops aninhados e avançados. Usuando condições multiplas.
        printf("\nCavalo se movimenta:\n");

        int MovCavalo = 2, i = 0;//Declarando as variáveis 'MovCavalo' para a função de imprimir 'Direita' e 'i' para a função de 'Cima'.

        do //Usando o loop aninhado (Do- while e for).
        {
            for (i, MovCavalo; i <= 2 && MovCavalo > 0; i++, MovCavalo--)
            {
                printf("Cima\n");
            }
        
            printf("Direita\n");
            MovCavalo--;
        } while (MovCavalo >= 1);
    
        break;
    default:
        printf("Opção inválida!");
        break;
    }


    return 0;
}