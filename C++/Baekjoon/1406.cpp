#include <iostream>
#include <string>
#include <list>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    list<char> editor;
    //editor char�� linked list ����

    string str;
    cin >> str;

    
    for(int i = 0; i < str.size(); i++){
        editor.push_back(str[i]);
        //���ڿ��� editor�� insert
    }

    int cnt;
    cin >> cnt;
    string tmp;

    list<char>::iterator cursor = editor.end();
    //editor�� ���� ����Ű�� iterator ���� -> Ŀ���� ǥ���ϱ� ����

    for(int i = 0; i < cnt; i++){
        cin >> tmp;
        if(tmp == "L"){ 
        //Ŀ���� �������� ��ĭ �ű� & ������ �� ���̸� ����
            if(cursor == editor.begin()){
                break;
            }
            else{
                cursor--; 
            }
        }

        else if(tmp == "D"){
        //Ŀ���� ���������� ��ĭ �ű� & ������ �� ���̸� ����
            if(cursor == editor.end()){
                break;
            }
            else{
                cursor++;
            }
        }

        else if(tmp == "B"){
        //Ŀ�� ���ʿ� �ִ� ���ڸ� ���� & ������ �� ���̸� ����
            if(cursor == editor.begin()){
                break;
            }
            else{
                editor.erase(--cursor);
            }
        }
        
        else if(tmp == "P"){  
            char add;
            cin >> add;
            editor.insert(cursor, add);
        }
    }

    list<char>::iterator iter;

    for(iter = editor.begin(); iter != editor.end(); iter++){
        cout << *iter;
    }
    return 0;
}