#include <stdio.h>

int main(){
    int num = 10;
    int * ptr1;
    ptr1 = &num;

    //int�� �����ͺ����� �������ּҰ� ����
    int *ptr2;
    ptr2 = ptr1;

    printf("%d\n", ptr1);
    (*ptr1)++; // num = 11
    (*ptr2)++; // �ּҰ��� +1

    printf("%d", num);
}