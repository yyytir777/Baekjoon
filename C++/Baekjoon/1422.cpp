#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

vector<string> v;
vector<string> result;

bool compare(string a, string b){
    if(a.length() == b.length()){
        return a > b;
    }
    return a.length() > b.length();
}

bool bigger(string a, string b){
    return (a + b) > (b + a);
}

int main(){
    int k, n;
    cin >> k >> n;

    for(int i = 0; i < k; i++){
        string num;
        cin >> num;
        v.push_back(num);
    }

    sort(v.begin(), v.end(), compare);

    for(int i = 0; i < k; i++){
        string tmp = string(v[i]);
        result.push_back(tmp);
    }

    for(int i = k; i < n; i++){
        result.push_back(v[0]);
        //���� ū �� �Է�
    }
    //���ڸ� ��� �Է��� ��Ȳ

    sort(result.begin(), result.end(), bigger);
    //���� ū �� �Ϸ�...?

    string a = "";
    for(int i = 0; i < result.size(); i++){
        a += result[i];
    }

    cout << a << '\n';
    return 0;
}