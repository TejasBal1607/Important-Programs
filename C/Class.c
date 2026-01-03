#include <stdio.h>

int main(){
    /*
    int age = 0;
    printf("Enter age: ");
    scanf("%d", &age);
    if(age >= 18){
        printf("You are eligible to vote");
    }
    else{
        printf("You are not eligible to vote");
    }
    return 0;
    */

    /*
    int a = 9;
    int b = 5;
    char max = (a > b) ? 'a' : 'b';
    printf("%c is larger", max);
    */

    /*
    int a = 10;
    char sign = (a = 0) ? '0' : (a > 0) ? '+' : '-';
    printf("a is %c", sign);
    */

    int a[] = {2,7,17,1,0,8};
    int b = 0;
    printf("Enter integer to find: ");
    scanf("%d", &b);
    int size = sizeof(a)/sizeof(a[0]);
    int i = 0;
    int found = 0;
    for(i = 0; i < size; i++){
        if (a[i] == b){
            found = 1;  //can use i == size instead of another variable
            break;
        }
    }

    if (found == 0){
        printf("Could not find this integer in the array");
    }
    else{
        printf("Found the integer at %d position", i);
    }
}