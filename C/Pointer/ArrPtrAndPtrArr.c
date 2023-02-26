#include <stdio.h>

int main(){
    int num1= 10, num2 = 20, num3 = 30, num4 = 40;
    int arr2d[2][4] = {1,2,3,4,5,6,7,8};

    int *whoA[4] = {&num1, &num2, &num3, &num4};
    int (*whoB)[4] = arr2d;
    
    printf("%d %d %d %d\n", **(whoA), **(whoA+1), **(whoA+2), **(whoA+3));
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 4; j++){
            printf("%d ", whoB[i][j]);
        }
        printf("\n");
    }
    return 0;
}