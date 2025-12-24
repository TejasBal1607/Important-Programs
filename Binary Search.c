#include <stdio.h> //standard input output
#include <math.h> 

int main(){
    int numbers[] = {8, 10, 20, 30, 40, 45, 50,};
    int size = sizeof(numbers)/sizeof(numbers[0]);  //To get the no of items we divide array size in bytes by size of each item
    int a = 40;
    int found = 0;
    int s = 0;
    int e = size-1;
    int m = 0;  
    while(s<=e){
      m = (s+e)/2;
      if(a == numbers[m]){
        found = 1;
        break;
      }
      else if(a > numbers[m]){
        s = m+1;
      }
      else{
        e = m-1;
      }
    }
    if (found == 1){
      printf("Found at index %d", m);
    }else{
      printf("Not found");
    }
    return 0;
}