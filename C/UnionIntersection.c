#include <stdio.h>

int in(int arr[], int el, int n){
    int i = 0;
    int found = 0;
    for(i = 0; i < n; i++){
        if(arr[i] == el){
            found = 1;
        }
    }
    return found;
}
int main(){
    int A[] = {10,20,30,40,50,60,70,80,90,100};
    int B[] = {15,30,45,60,75,90,105};
    int nA = sizeof(A)/sizeof(A[0]);
    int nB = sizeof(B)/sizeof(B[0]);
    int i = 0;
    int *C = malloc((nA + nB) * sizeof *C);
    int *D = malloc(nA * sizeof *D);
    if (!C || !D) {
        fprintf(stderr, "memory allocation failed\n");
        free(C);
        free(D);
        return 1;
    }
    for(i = 0; i < nA; i++){
        C[i] = A[i];
    }
    int ctr = 0;
    for (i = 0; i < nB; i++){
        if (in(A, B[i], nA) == 0){
            C[nA+ctr] = B[i];
            ctr ++;
        }
    }
    int ctr2 = 0;
    for(i = 0; i < nA + ctr; i++){
        if(in(A,C[i],nA) == 1 && in(B,C[i],nB)==1){
            D[ctr2] = C[i];
            ctr2++;
        }
    }
    for(i = 0; i < nA+ctr; i++){
        printf("%d, ",C[i]);
    }
    printf("\n");
    for(i = 0; i < ctr2; i++){
        printf("%d, ",D[i]);
    }
    printf("\n");
    free(C);
    free(D);
    return 0;

}