#include <iostream>
#include <queue>
#define M 101
using namespace std;
//bfs�� ���̷��� ����

int adj_matrix[M][M] = {0,};
bool state[M] = {0,};
queue<int> q;

int cnt = 0;
int node;

void bfs(int v){
    q.push(v);
    state[v] = true;

    while(!q.empty()){
        v = q.front();
        q.pop();
        cnt += 1;

        for(int j = 1; j <= node; j++){
            if(adj_matrix[v][j] == 1 && state[j] == false){ //������ ����Ǿ��ְ� �湮X������
                q.push(j);
                state[j] = true;
            }
        }
    }
    cnt--;
}

int main(){

    cin >> node;

    int edge;
    cin >> edge;

    //adj_matrix �ʱ�ȭ
    for(int i = 0; i < edge; i++){
        int x, y;
        cin >> x >> y;

        adj_matrix[x][y] = 1;
        adj_matrix[y][x] = 1;
    }

    bfs(1);

    cout << cnt;
    return 0;
}