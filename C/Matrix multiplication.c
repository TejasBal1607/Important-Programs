#include <stdio.h>

int main(){
    int m,n,p,q;
    printf("Enter rows and columns for A: ");
    scanf("%d %d",&m,&n);
    printf("Enter rows and columns for B: ");
    scanf("%d %d",&p,&q);
    int A[m][n];
    int B[p][q];
    int x,y,entry;
    for( x = 0; x < m; x++){
        for( y = 0; y < n; y++){
            printf("Enter entry for A[%d][%d]", x, y);
            scanf("%d", &entry);
            A[x][y] = entry;        }
    }
    for( x = 0; x < p; x++){
        for( y = 0; y < q; y++){
            printf("Enter entry for B[%d][%d]", x, y);
            scanf("%d", &entry);
            B[x][y] = entry;
        }
    }
    printf("[");
    for( x = 0; x < m; x++){
        for( y = 0; y < n; y++){
            printf("%d ", A[x][y]);
        }
        printf("\n");
    }
    printf("]\n");
    printf("[");
    for( x = 0; x < p; x++){
        for( y = 0; y < q; y++){
            printf("%d ", B[x][y]);
        }
        printf("\n");
    }
    printf("]\n");
    int i = 0;
    int j = 0;
    int C[m][q];
    if(n == p){
        
        printf("A X B exists\n");
        printf("[");
        for (x = 0; x < m; x++){
            for(y = 0; y < q; y++){
                for(i = 0; i < n; i++){
                    j += A[x][i]*B[i][y];
                }
                C[x][y] = j;
                j = 0;
            }
        }
        for( x = 0; x < m; x++){
            for( y = 0; y < q; y++){
                printf("%d ", C[x][y]);
            }
        }
        printf("\n");
    }else{
        printf("A X B doesnt exist");
    }


    printf("]");
    return 0;
}

