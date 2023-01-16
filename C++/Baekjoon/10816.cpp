#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int cnt_n;
    cin >> cnt_n;
    //cnt_n : �迭arr_n�� ũ��

    int arr_n[cnt_n];

    for(int i = 0; i < cnt_n; i++){
        int n;
        cin >> arr_n[i];
    }
    //arr_n�� �Է�

    sort(arr_n, arr_n + cnt_n);

    int cnt_m;
    cin >> cnt_m;
    //cnt_m : �迭 arr_m�� ũ��

    int arr_m[cnt_m];

    for(int i = 0; i < cnt_m; i++){
        cin >> arr_m[i];
        
    }

    int bool_m[cnt_m];
    for(int i = 0; i < cnt_m; i++){
        int a;
        a = upper_bound(arr_n, arr_n + cnt_n, arr_m[i]) - lower_bound(arr_n, arr_n + cnt_n, arr_m[i]);
        if(a <= 0){
            a = 0;
        }
        bool_m[i] = a;
    }

    for(int i = 0; i < cnt_m; i++){
        cout << bool_m[i] << " ";
    }
    return 0;
}