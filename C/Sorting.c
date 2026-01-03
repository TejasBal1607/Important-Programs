<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>

void BubbleSort(int A[], int n){
    int i,j,temp=0,ctr =0,temp2=0;
    for(i=0; i<n-1; i++){
        for(j=0; j < n-1-i; j++){
            if(A[j] > A[j+1]){
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
                ctr += 1;
            }
        }
        if (temp2 == ctr){      // Optimization: If no swaps occurred, the array is sorted
            break;
        }
        temp2 = ctr;
    }
    printf("No of Swaps: %d\n", ctr);
    printf("No of Passes: %d\n", i+1);
}


void SelectionSort(int A[], int n){
    int i,j,temp=0,ctr=0,index=0;
    for(i=0; i<n-1; i++){
        for(j=i; j<n; j++){
            if(A[j] < A[index]){
                index = j;
            }
        }
        temp = A[i];
        A[i] = A[index];
        A[index] = temp;
        ctr += 1;
    }
    printf("No of Swaps: %d\n", ctr);
}

void MergeSort(int A[],int* B[], int low, int high){
    if(low >= high){
        return;
    }
    int mid = (low + high)/2;
    MergeSort(A, B, low, mid);
    MergeSort(A, B, mid+1, high);
    int i=low,j=mid+1,k=low;
    while(i<=mid && j<= high){
        if(A[i] <= A[j]){
            B[k] = A[i];
            i++;
        }
        else{
            B[k] = A[j];
            j++;
        }
        k++;
    }
    while(i <= mid){
        B[k] = A[i];
        i++;
        k++;
    }
    while(j <= high){
        B[k] = A[j];
        j++;
        k++;
    }
    for (int x = low; x <= high; x++) {
        A[x] = B[x];
    }    
}

void printArray(int A[], int n){
    for(int i=0; i<n; i++){
        printf("%d ", A[i]);
    }
    printf("\n");
}

int main(){
    int A[] = {8,9,7,23,23,68,69,4,8,84,86};
    int n = sizeof(A)/sizeof(A[0]);
    int *B = malloc(n * sizeof(int)); 
    printf("Original Array: ");
    printArray(A, n);
    BubbleSort(A, n);
    printf("Sorted Array: ");
    printArray(A, n);  
    free(B);
    *B = NULL;
    return 0;
}
=======
#include <stdio.h>
#include <stdlib.h>

void BubbleSort(int A[], int n){
    int i,j,temp=0,ctr =0,temp2=0;
    for(i=0; i<n-1; i++){
        for(j=0; j < n-1-i; j++){
            if(A[j] > A[j+1]){
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
                ctr += 1;
            }
        }
        
        if (temp2 == ctr){      // Optimization: If no swaps occurred, the array is sorted
            break;
        }
        temp2 = ctr;
    }
    printf("No of Swaps: %d\n", ctr);
    printf("No of Passes: %d\n", i+1);
}


void SelectionSort(int A[], int n){
    int i,j,temp=0,ctr=0,index=0;
    for(i=0; i<n-1; i++){
        for(j=i; j<n; j++){
            if(A[j] < A[index]){
                index = j;
            }
        }
        temp = A[i];
        A[i] = A[index];
        A[index] = temp;
        ctr += 1;
    }
    printf("No of Swaps: %d\n", ctr);
}

void MergeSort(int A[],int* B[], int low, int high){
    if(low >= high){
        return;
    }
    int mid = (low + high)/2;
    MergeSort(A, B, low, mid);
    MergeSort(A, B, mid+1, high);
    int i=low,j=mid+1,k=low;
    while(i<=mid && j<= high){
        if(A[i] <= A[j]){
            B[k] = A[i];
            i++;
        }
        else{
            B[k] = A[j];
            j++;
        }
        k++;
    }
    while(i <= mid){
        B[k] = A[i];
        i++;
        k++;
    }
    while(j <= high){
        B[k] = A[j];
        j++;
        k++;
    }
    for (int x = low; x <= high; x++) {
        A[x] = B[x];
    }    
}

void printArray(int A[], int n){
    for(int i=0; i<n; i++){
        printf("%d ", A[i]);
    }
    printf("\n");
}

int main(){
    int A[] = {8,9,7,23,68,69,4,8,84,86};
    int n = sizeof(A)/sizeof(A[0]);
    int *B = malloc(n * sizeof(int)); 
    printf("Original Array: ");
    printArray(A, n);
    MergeSort(A, B, 0, n-1);
    printf("Sorted Array: ");
    printArray(A, n);  
    free(B);
    *B = NULL;
    return 0;
}

>>>>>>> e692b865351512c6cb2a7a8cb6210672b415bf2d
