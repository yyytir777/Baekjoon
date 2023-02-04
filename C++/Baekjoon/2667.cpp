#include <iostream>
#include <algorithm>
#include<vector>
#define n 26
using namespace std;

int N;
int map[n][n];
int state[n][n] = {0,};
int complex_cnt = 0; //���� ����
int cnt; //���� �� �� ����
int axis_x[4] = {0,0,-1,1};
int axis_y[4] = {1,-1,0,0};
vector<int> house;

void DFS(int x, int y){
    cnt++;
    int dfs_x;
    int dfs_y;
    state[x][y] = true;

    for(int i = 0; i < 4; i++){ //�����¿� ������ ��带 ã�� ����
        dfs_x = x + axis_x[i];
        dfs_y = y + axis_y[i];

        if(dfs_x < 0 || dfs_x >= N || dfs_y < 0 || dfs_y >= N){ //���� �������
            continue;
        }

        if(map[dfs_x][dfs_y] == 1 && state[dfs_x][dfs_y] == 0){ // ������ ���� �����԰� ���ÿ� Ž������ ���� ���϶�
            DFS(dfs_x, dfs_y);
        }
    }
}

int main(){
    cin >> N;

    for(int i = 0; i < N; i++){
        string input;
        cin >> input;
        for(int j = 0; j < N; j++){
            map[i][j] = input[j] - 48;
        }
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(map[i][j] == 1 && state[i][j] == 0){
                cnt = 0; //���� �ȿ� �ϳ��� ����
                DFS(i, j);
                complex_cnt += 1;
                house.push_back(cnt); //vector�� ���� �� �� ���� push & ������ ������ �� ������ ����
            }
        }
    }

    sort(house.begin(), house.end());
    cout << complex_cnt << '\n';
    vector<int>::iterator iter;

    for(iter = house.begin(); iter < house.end(); iter++){
        cout << *iter << '\n';
    }

    return 0;
}