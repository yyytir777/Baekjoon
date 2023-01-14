#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(string a, string b){
    if(a.size() == b.size()){ //�ΰ��� �ܾ��� ���̰� ������
        return a < b; //a, b ������� ���
    }
    else{ //�ٸ���
        return a.size() < b.size(); //a, b ������� ���
    }
}

int main(){
    vector<string> v;
    // v : �ܾ� �Է¹޾Ƴ���

    int n;
    cin >> n;
    // n : �ܾ��

    for(int i = 0; i < n; i++){
        string word;
        cin >> word;
        v.push_back(word);
    }
    //v�� �ܾ� �Է� �Ϸ�

    sort(v.begin(), v.end(), compare);
    //����

    /*
    vector<int>::iterator iter;
    //iterator : ������ ���Ҹ� ����
    for(iter = v.begin(); iter != v.end(); iter++){

    }
    */

    string a;
    for(int i = 0; i < v.size(); i++){
        if(a == v[i]){
            continue;
        }
        cout << v[i] << '\n';
        a = v[i];
    }
}