#include <iostream>
using namespace std;
/*
���������� ��ȸ
1) ������
    continue
2) �ٸ��� 
    -arr�� ������ �׷�ܾ�X
    -arr�� ������ continue
*/
int main(){
    int n;
    cin >> n;
    int cnt = n;

    for(int i = 0; i < n; i++){
        string word;
        cin >> word;
        bool arr[26] = {false,};
        arr[int(word[0]) - 97] = true;

        for(int j = 0; j < word.size() - 1; j++){

            if(word[j] != word[j + 1]){ //�ٸ���
                if(arr[int(word[j + 1] - 97)] == false){
                    arr[int(word[j + 1] - 97)] = true;
                }
                else{
                    cnt--;
                    break;
                }
            }
        }
    }
    cout << cnt;
    return 0;
}