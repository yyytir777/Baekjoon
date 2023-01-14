#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    
    int cnt_n;
    cin >> cnt_n;
    //cnt_n : �迭arr_n�� ũ��

    vector <int> vector_n;

    for(int i = 0; i < cnt_n; i++){
        int n;
        cin >> n;
        vector_n.push_back(n);
    }
    //vector_n�� �Է�

    int cnt_m;
    cin >> cnt_m;
    //cnt_m : �迭 arr_m�� ũ��

    int arr_m[cnt_m];

    for(int i = 0; i < cnt_m; i++){
        cin >> arr_m[i];
        
    }

    //vector_m�� �Է�

    int arr_boolean[cnt_m];
    //arr_boolean : ����̰� ����ī�带 �������ִ��� ���� ũ�� : cnt_m

    /*
    for(int i = 0; i < cnt_n; i++){
        for(int j = 0; j < cnt_m; j++){
            if (arr_n[i] == arr_m[j]){
                arr_boolean[j] = 1;
                break;
            }
        }
    }
    => �ð����⵵ : n^2 �̹Ƿ� vector -> binary search ����ؾ���
    */

    sort(vector_n.begin(), vector_n.end());
    //������� ī�� ����

    for(int i = 0; i < cnt_m; i++){
        if(binary_search(vector_n.begin(), vector_n.end(), arr_m[i])){
            arr_boolean[i] = 1;
        }
        else{
            arr_boolean[i] = 0;
        }
    }
    //arr_boolean �Է�

    for(int i = 0; i < cnt_m; i++){
        cout << arr_boolean[i] << " ";
    }
    //arr_boolean ���
    return 0;
}