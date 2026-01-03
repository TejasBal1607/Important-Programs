#include <stdio.h>
#include <string.h>

int main(){
    int a = 0;
    char c = '\0';
    char s[20] = "";
    printf("Int: ");
    scanf("%d", &a);
    printf("C: ");
    getchar();
    scanf("%c", &c);
    printf("S: ");
    scanf(" %[^\n]s", &s);
    printf("Output: %d, %c, %s", a, c, s);
    printf("\n%d", strcmp("abc", "pqr"));

}