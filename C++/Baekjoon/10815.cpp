#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int cnt_n;
    cin >> cnt_n;
    //cnt_n : �迭arr_n�� ũ��

    int arr_n[cnt_n];
    //�迭 arr_n ����(������� ����ī��)

    for(int i = 0; i < cnt_n; i++){
        cin >> arr_n[i];
    }

    int cnt_m;
    cin >> cnt_m;
    //cnt_m : �迭 arr_m�� ũ��

    int arr_m[cnt_m];
    //�迭 arr_m ����(���� M��)

    for(int i = 0; i < cnt_m; i++){
        cin >> arr_m[i];
    }

    int arr_boolean[cnt_m] = {0};
    //arr_boolean : ����̰� ����ī�带 �������ִ��� ����

    for(int i = 0; i < cnt_n; i++){
        for(int j = 0; j < cnt_m; j++){
            if (arr_n[i] == arr_m[j]){
                arr_boolean[j] = 1;
                break;
            }
        }
    }

    for(int i = 0; i < cnt_m; i++){
        cout << arr_boolean[i] << " ";
    }
    //arr_boolean ���

    return 0;
}