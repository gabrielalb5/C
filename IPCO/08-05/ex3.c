#include <stdio.h>
#define LINHA 3
#define COLUNA 3

int main(){

    int i, j, k, l, num, mat[LINHA][COLUNA], moda;

    for(i=0;i<LINHA;i++){
        for(j=0;j<COLUNA;j++){
            printf("Matriz linha %d coluna %d: ",i,j);
            scanf("%d",&mat[i][j]);
        };
    };

    for(k=0;k<LINHA;k++){
        for(l=0;l<COLUNA;l++){
            num = mat[k][l];
            for(i=0;i<LINHA;i++){
                for(j=0;j<COLUNA;j++){
                    printf("%d ",mat[i][j]);
                    if(num==mat[i][j]){
                        
                    }
                };
                printf("\n");
            };
            printf("\n");
        }
        
    };

    return 0;
}