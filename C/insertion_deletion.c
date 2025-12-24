#include <stdio.h>

void Deletion(int index){
        
    int A[6] = {10,20,30,40,50,60};
    int i;
    int n = sizeof(A)/sizeof(A[0]);
    for(i = index; i<n-1; i++){
        A[i] = A[i+1];
    }
    A[n-1] = 0;
    for(i = 0; i < n-1; i++){
        printf("%d, ",A[i]);
    }

}
void Insertion(int a, int index){
    int A[7] = {10, 20, 40, 50, 60, 70};
    int i;
    int n = sizeof(A)/sizeof(A[0]);
    for(i = n; i>index; i--){
        A[i] = A[i-1];
    }
    A[index] = a;
    for(i = 0; i < n; i++){
        printf("%d, ",A[i]);
    }
}
int main(){
    Insertion(30, 2);
    return 0;
}
