#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int , int> a, pair<int, int> b){
    if(a.second == b.second){ //y��ǥ�� ������
        return a.first < b.first; //x��ǥ�� �����������
    }
    else{ //y��ǥ�� �ٸ���
        return a.second < b.second; //y��ǥ�� �����������
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    vector <pair<int, int>> dot;

    int n, x, y;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> x >> y;
        dot.push_back({x, y});
    }

    sort(dot.begin(), dot.end(), compare);

    for(int i = 0; i < n; i++){
        cout << dot[i].first << " " << dot[i].second << '\n';
    }
    return 0;
}