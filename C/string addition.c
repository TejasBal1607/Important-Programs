<<<<<<< HEAD
#include <stdio.h>
#include <string.h>
int main(){
char num1[]="9999999999",num2[]="2222222222",result[20];
int carry=0, sum, i, j, k = 0;
int len1 = strlen(num1), len2 = strlen(num2),len3;
char temp[20];
i = len1 - 1; j = len2 - 1; // What is the purpose of i and j?
while (i >= 0 || j >= 0 || carry > 0){
int digit1 = (i >= 0) ? num1[i] - '0' : 0; // What is this line about?
int digit2 = (j >= 0) ? num2[j] - '0' : 0;
sum = digit1 + digit2 + carry;
carry = sum / 10;
temp[k++] = (sum % 10) + '0'; // Why added '0'?
i--;
j--;
}
temp[k] ='\0'; // Why?
len3 = k;
for (i = 0; i < len3; i++) result[i] = temp[len3 - 1 -i]; // Purpose of this loop?
result[len3] = '\0';
printf("Sum: %s\n", result); // Result?
return 0;
} 

=======
#include <stdio.h>
#include <string.h>
int main(){
char num1[]="9999999999",num2[]="2222222222",result[20];
int carry=0, sum, i, j, k = 0;
int len1 = strlen(num1), len2 = strlen(num2),len3;
char temp[20];
i = len1 - 1; j = len2 - 1; // What is the purpose of i and j?
while (i >= 0 || j >= 0 || carry > 0){
int digit1 = (i >= 0) ? num1[i] - '0' : 0; // What is this line about?
int digit2 = (j >= 0) ? num2[j] - '0' : 0;
sum = digit1 + digit2 + carry;
carry = sum / 10;
temp[k++] = (sum % 10) + '0'; // Why added '0'?
i--;
j--;
}
temp[k] ='\0'; // Why?
len3 = k;
for (i = 0; i < len3; i++) result[i] = temp[len3 - 1 -i]; // Purpose of this loop?
result[len3] = '\0';
printf("Sum: %s\n", result); // Result?
return 0;
} 

>>>>>>> e692b865351512c6cb2a7a8cb6210672b415bf2d
