#include <stdio.h>
#include <stdlib.h> //Utilizada para gerar números aleatórios
#include <time.h>  //Utilizada para gerar números aleatórios

int aleatorio(int min, int max);//Função que retorna um número aleatório dentro dos limites fornecidos
void adivinhar(int min, int max, int num, int palp);//Função que faz o comparativo dos palpites com o número aleatório

int main(){

    int min, max, num, palp;

    printf("JOGO DE ADIVINHAÇÃO\n\n");
    printf("DEFINA OS LIMITES\n");
    printf("Mínimo: ");
    scanf("%d",&min);
    printf("Máximo: ");
    scanf("%d",&max);
    
    //Caso o mínimo seja menor que o máximo, pedir para o usuário redigitar
    while(min>max){
        printf("\nMínimo maior que máximo. Digite outros limites.\n");
        printf("\nDEFINA OS LIMITES\n");
        printf("Mínimo: ");
        scanf("%d",&min);
        printf("Máximo: ");
        scanf("%d",&max);
    }

    //Variável num recebe p número aleatório
    num = aleatorio(min,max);

    printf("\nNúmero gerado. Qual seu palpite? ");
    scanf("%d",&palp);

    //Chama a função de adivinhar
    adivinhar(min,max,num,palp);

    return 0;
}

int aleatorio(int min, int max){
    srand((unsigned)time(NULL));
    //Padrão para geração de número aleatório com base em um mínimo e um máximo
    return ((rand() % (max-min+1))+min);
}

void adivinhar(int min, int max, int num, int palp){
    int cont=0, tentativas=3, diferenca;

    //Se o aleatório menos o palpite for menor que 0, ou seja, um número negativo, troque o sinal da diferenca para positivo
    //Diferenca retorna sempre positiva
    if(num-palp<0){
        diferenca = -(num-palp);
    }else{
        diferenca = num-palp;
    }

    //Enquanto o palpite for diferente do número e o contador menor do que 2 (já feito uma tentativa)
    //Exibir as distâncias e as mensagens de acordo com os limites definidos
    while(palp!=num && cont<tentativas-1){
        if(diferenca<=(max-min)*0.1){
            printf("Muito quente"); //Até 10%
        }else if(diferenca<=(max-min)*0.3){
            printf("Quente"); //Até 30%
        }else if(diferenca<=(max-min)*0.6){
            printf("Frio"); //Até 60%
        }else{
            printf("Muito frio"); //Acima de 60%
        }
        cont++; //Incremento do contador de tentativas
        printf("\nTente novamente: ");
        scanf("%d",&palp);

        //Se o aleatório menos o palpite for menor que 0, ou seja, um número negativo, troque o sinal da diferenca para positivo
        //Diferenca retorna sempre positiva
        if(num-palp<0){
            diferenca = -(num-palp);
        }else{
            diferenca = num-palp;
        }
    }

    //Fim do programa e exibição de mensagem de acordo com o resultado
    if(num==palp){
        printf("\nParabéns você adivinhou o número!!!");
    }else{
        printf("\nLimite de tentativas atingido. O número era %d",num);
    }
}