#include <iostream>
#include <queue>
#define n 1001
using namespace std;

int N, M, V;
//������ ����, ������ ����, Ž�� ������ ������ ��ȣ

int adj_matrix[n][n];
//���� ���
bool state[n] = {0,};
//�湮������ 1, �湮���� �ʾ����� 0

queue<int> q;

void init(){
    for(int i = 0; i < n; i++){
        state[i] = 0;
    }
}

void DFS(int v){
    state[v] = true;
    cout << v << ' ';

    for(int i = 1; i <= N; i++){
        if(adj_matrix[v][i] == 1 && state[i] == false){ //������ ����Ǿ��ְ� �湮X
            DFS(i);
        }
    }
}

void BFS(int v){
    q.push(v);
    state[v] = true;

    while(!q.empty()){
        v = q.front();
        q.pop();
        cout << v << " ";
        //pop�ϸ鼭 ���� ���

        for(int j = 1; j <= N; j++){
            if(adj_matrix[v][j] == 1 && state[j] == false){ //������ ����Ǿ��ְ� �湮X������
                q.push(j);
                state[j] = true;
            }
        }
    }
}

int main(){
    
    cin >> N >> M >> V;

    //edge ����
    for(int i = 0; i < M; i++){
        int x, y;
        cin >> x >> y;

        //index�� ��ȯ
        adj_matrix[x][y] = 1;
        adj_matrix[y][x] = 1;
    }
    
    /*
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cout << adj_matrix[i][j] << " ";
        }
        cout << "\n"; 
    }
    */

    init();
    DFS(V);
    cout << '\n';
    init();
    BFS(V);

    return 0;
}