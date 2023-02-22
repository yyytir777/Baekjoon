#include <stdio.h>

int WhoIsFirst(int age1, int age2, int (*cmp)(int n1, int n2)){
    return cmp(age1, age2);
}

int OlderFirst(int n1, int n2){
    if(n1 > n2) return n1;
    else if(n1 < n2) return n2;
    else return 0;
}

int YoungerFirst(int n1, int n2){
    if(n1 > n2) return n2;
    else if(n1 < n2) return n1;
    else return 0;
}

int main(){
    int age1 = 20, age2 = 30, first;

    printf("���� ���� 1 \n");
    first = WhoIsFirst(age1, age2, OlderFirst);
    printf("%d���� %d�� �� %d�� ���� ����! \n\n", age1, age2, first);

    printf("���� ���� 2 \n");
    first = WhoIsFirst(age1, age2, YoungerFirst);
    printf("%d���� %d�� �� %d�� ���� ����! \n\n", age1, age2, first);
}