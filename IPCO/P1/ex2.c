#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define TAM 10

void validaResp(int i, char respostas[i]);

int main(){

    int i=0, corretas=0;
    char nome[255], indicador[TAM], respostas[TAM], gabarito[TAM] = "ACCABBAACB";

    printf("--------------------------------- QUIZ DE LINGUAGEM C ---------------------------------\n");
    printf("10 perguntas serão exibidas e você deverá digitar uma alternativa para cada. Boa sorte!\n\n");

    printf("Para iniciar, digite seu nome: ");
    scanf("%s",nome);

    printf("\n\nQuestão 1 - Como é declarada uma estrutura condicional em linguagem C?\n\n");
    printf("A) if(condição){\n    ...\n   }else{\n    ...\n   }\n");
    printf("B) se(condição)entao\n    ...\n   senao\n    ...\n   }\n");
    printf("C) do{\n    ...\n   }while(condição)\n");
    printf("\nResposta: ");
    scanf(" %c",&respostas[i]);
    validaResp(i,respostas);
    i++;

    printf("\nQuestão 2 - Qual a ordem de precedência dos seguintes operadores aritméticos em C?\nI. Adição II. Parênteses III. Módulo\n");
    printf("A) I, II, III\n");
    printf("B) III, II, I\n");
    printf("C) II, III, I\n");
    printf("\nResposta: ");
    scanf(" %c",&respostas[i]);
    validaResp(i,respostas);
    i++;

    printf("\nQuestão 3 - Qual a definição de um algoritmo?\n");
    printf("A) Um conjunto de instruções que só podem ser executadas em linguagens de programação específicas.\n");
    printf("B) Um método de solução de problemas que envolve adivinhação e tentativa de erros.\n");
    printf("C) Uma sequência finita de ações executáveis que visam obter uma solução para um determinado tipo de problema.\n");
    printf("\nResposta: ");
    scanf(" %c",&respostas[i]);
    validaResp(i,respostas);
    i++;

    printf("\nQuestão 4 - Em linguagem C, qual sistema de codificação de caracteres é predominantemente utilizado para representar caracteres individuais?\n");
    printf("A) Tabela ASCII\n");
    printf("B) UTF-8\n");
    printf("C) Unicode\n");
    printf("\nResposta: ");
    scanf(" %c",&respostas[i]);
    validaResp(i,respostas);
    i++;

    printf("\nQuestão 5 - Qual é o tipo de dado mais apropriado em linguagem C para variáveis relacionadas ao sistema monetário?\n");
    printf("A) int\n");
    printf("B) float\n");
    printf("C) char\n");
    printf("\nResposta: ");
    scanf(" %c",&respostas[i]);
    validaResp(i,respostas);
    i++;

    printf("\nQuestão 6 - Como pode-se definir o conceito de vetor em C?\n");
    printf("A) Segmentos de retas responsáveis por caracterizar grandezas como força, velocidade, aceleração e distância.\n");
    printf("B) Sequência de variáveis de mesmo tipo e referenciadas por um nome único declaradas como 'int x[];'.\n");
    printf("C) Uma estrutura responsável por ordenar conjuntos numéricos em ordem crescente ou decrescente.\n");
    printf("\nResposta: ");
    scanf(" %c",&respostas[i]);
    validaResp(i,respostas);
    i++;

    printf("\nQuestão 7 - Qual a condição correta em um programa que indica eleitores maiores de 70 anos e de 18 a 16 anos como facultativos?\n\n");
    printf("A) if(idade>70 || (idade<18 && idade>=16))\n");
    printf("B) if(idade>70 && idade<18 && idade!=16)\n");
    printf("C) if((idade>=70 || idade>=16) && idade<18)\n");
    printf("\nResposta: ");
    scanf(" %c",&respostas[i]);
    validaResp(i,respostas);
    i++;

    printf("\nQuestão 8 - Qual das rotinas abaixo desloca o vetor [1,2,3,4,5] para direita e insere 8 na primeira posição?\nConsidere:\nint vetor[6] = {1,2,3,4,5,0};\n\n");
    printf("A) for(i=5;i>0;i--){\n      vetor[i] = vetor[i-1];\n   }\n      vetor[0] = 8;\n");
    printf("B) for(i=5;i>0;i--){\n      vetor[i] = vetor[i-1];\n   }\n      vetor[1] = 8;\n\n");
    printf("C) for(i=0;i<5;i++){\n      vetor[i] = vetor[i+1];\n   }\n      vetor[0] = 8;\n\n");
    printf("\nResposta: ");
    scanf(" %c",&respostas[i]);
    validaResp(i,respostas);
    i++;

    printf("\nQuestão 9 - Qual a função mais adequada para retornar a média de um vetor?\nConsidere:\n#define TAM 10\nfloat media=0;\nint i, vetor[TAM] = {1,2,3,4,5,6,7,8,9,10};\n\n");
    printf("A) for(i=0;i<TAM;i++){\n      media = vetor[i];\n   }\n   media = media/i;\n");
    printf("B) for(i=0;i<TAM;i++){\n      media++;\n   }\n   media = media/TAM;\n");
    printf("C) for(i=0;i<TAM;i++){\n      media += vetor[i];\n   }\n   media = media/TAM;\n");
    printf("\nResposta: ");
    scanf(" %c",&respostas[i]);
    validaResp(i,respostas);
    i++;

    printf("\nQuestão 10 - Qual tipo de estrutura de repetição executa o código pelo menos uma vez antes de verificar uma condição\n");
    printf("A) switch\n");
    printf("B) do-while\n");
    printf("C) while\n");
    printf("\nResposta: ");
    scanf(" %c",&respostas[i]);
    validaResp(i,respostas);
    i++;

    for(i=0;i<10;i++){
        respostas[i] = toupper(respostas[i]);
        if(respostas[i]==gabarito[i]){
            corretas++;
            indicador[i] = 'O';
        }else{
            indicador[i] = 'X';
        }
    }
    printf("\n%s, você acertou %d de %d questões (%d%%)\n",nome,corretas,TAM,(corretas*(100/TAM)));
        printf("GABARITO | SUAS RESPOSTAS | INDICADOR | QUESTÃO \n");
    for(i=0;i<10;i++){
        printf("    %c    |        %c       |     %c     |    %d\n",gabarito[i],respostas[i],indicador[i],i+1);
    }

    return 0;
}

void validaResp(int i, char respostas[]){
    while(respostas[i]!='a' && respostas[i]!='A' && respostas[i]!='b' && respostas[i]!='B' && respostas[i]!='c' && respostas[i]!='C'){
        printf("Alternativa inválida. Digite novamente: ");
        scanf(" %c",&respostas[i]);
    }
}