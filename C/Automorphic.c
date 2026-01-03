#include <stdio.h>
#include <math.h>

int main(){
    int num = 0;
    printf("Enter Number: ");
    scanf("%d", &num);
    int copy = num;
    int length = 0;
    while(copy != 0){
        copy /= 10;
        length += 1;
    }
    int square = (int) pow(num, 2);
    int digits = (int) pow(10, length);
    int rem = square%digits;
    if(num == rem){
        printf("The given number is automorphic");
    }else{
        printf("The given number is not automorphic");
    }
    
    return 0;
}