#include <stdio.h>
#include <stdlib.h>

// armazenar os dados de uma pessoa
typedef struct{
    char nome[30]; // define o campo nome
    int idade; // define o campo idade
} Pessoa; // Define o nome do tipo criado

Pessoa lerDados();
int verificarMaioridade(Pessoa p);

int main(){
    Pessoa pessoa = lerDados();

   if (verificarMaioridade(pessoa) == 1){
      printf("\n%s e MAIOR de idade!\n\n", pessoa.nome);
   }
   else{
       printf("\n%s e MENOR de idade!\n\n", pessoa.nome);
   }
   system("PAUSE");
   return 0;
}

Pessoa lerDados(){
   Pessoa p;
   printf("Nome: ");
   gets(p.nome);
   printf("Idade: ");
   scanf("%d", &p.idade);
   return p;
}

int verificarMaioridade(Pessoa p){
    if (p.idade >= 18) return 1;
    else return 0;
}