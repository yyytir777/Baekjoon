#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int arr[10001] = {0}; 
    /*�ִ� 10,000,000���� ������ �Է¹����� 
    ������ ũ�Ⱑ 10,000���� ������ �����Ƿ�
    �迭�� ũ�⸦ 10,000�� �����ϰ� �� �迭��
    �ε����� ������ �߰� */

    for(int i = 0; i < n; i++){
        int cnt;
        cin >> cnt;
        arr[cnt] += 1;
    }

    for(int i = 0; i <= 10000; i++){
        for(int j = 0; j < arr[i]; j++){
            cout << i << "\n";
        }
    }
}