#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

#define N 100000
pair<int, int> time[N];
vector<pair<int, int>> v;
//������ �ð��� �������� sort -> ���� �������� ������ �ð��� �������� ���ʴ�� cnt++ ....???

//������������ ����
bool compare(pair<int, int> p1, pair<int, int> p2){
    if(p1.first == p2.first){
        return p1.second > p2.second;
    }
    return p1.first > p2.first;
}

int main(){
    int n, start, end;
    cin >> n;


    //�迭�� ���۽ð� , ������ �ð��� pair�� �Է¹���
    for(int i = 0; i < n; i++){
        cin >> start >> end;
        v.push_back(make_pair(end, start));
    }

    //������ �ð��� ū ������� ���� > �����ϴ� �ð��� ū ������� ����
    sort(v.begin(), v.end(), compare);
    

    int cnt = 0;
    int j, k = 0;
    for(int i = 0; i < v.size(); i++){
        int start_time = v[j].second;
        int end_time = v[k+1].first;

        if(start_time >= end_time){
            cnt++;
            j++;
        }
        else{
            k++;
        }
    }

    cout << cnt;
    return 0;
}