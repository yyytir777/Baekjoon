#include <stdio.h>

int main(){
    char str1[] = "My String";
    char *str2 = "Your String";
    printf("%s %s\n", str1, str2);

    str2 = "Our String";
    printf("%s %s\n", str1, str2);

    str1[0] = 'X';
    printf("%s\n", str1);

}