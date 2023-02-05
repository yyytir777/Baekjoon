#include <iostream>
#include <queue>
using namespace std;

#define M 101
#define check 5
#define air 0
#define inner_cheeze 1
#define outer_cheeze 2
#define inner 3
/*
ġ�� ���� ���� inner(3)�� ��ȯ

�ǿ� ġ�� ��ġ �� ����(0)���� �´���ִ� ġ� outer_cheeze(2)�� ��ȯ

���⿡ ������ ġ� ���� -> outer_cheeze(1)�� ����(0)

*/
/*
dfs(0,0)�� �ϸ� �ٱ������ 5, ġ�� ���� ������ 0, ġ��� 1 �� ��
*/
int a, b;
int board[M][M];
int axis_x[4] = {0,0,-1,1};
int axis_y[4] = {1,-1,0,0};
int time = 0;
int c_cnt = 0;
queue<pair<int, int> q;

void bfs(){
    q.push(make_pair(0,0));
    board[0][0] = check;

    while(!q.empty()){
        int x = q.front();
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

void dfs_check(){
    int x = 0;
    int y = 0;
    int dfs_x;
    int dfs_y;
    board[x][y] = check;

    for(int i = 0; i < 4; i++){ //�����¿� ������ ��带 ã�� ����
        dfs_x = x + axis_x[i];
        dfs_y = y + axis_y[i];

        if(dfs_x < 0 || dfs_x >= b || dfs_y < 0 || dfs_y >= a){ //���� �������
            continue;
        }

        if(board[dfs_x][dfs_y] == 0){ // ������ ���� �����԰� ���ÿ� Ž������ ���� ���϶�
            dfs_check(dfs_x, dfs_y);
        }
    }
}

void dfs(){
    int x = 0;
    int y = 0;
    int dfs_x;
    int dfs_y;
    board[x][y] = check;

    for(int i = 0; i < 4; i++){ //�����¿� ������ ��带 ã�� ����
        dfs_x = x + axis_x[i];
        dfs_y = y + axis_y[i];

        if(dfs_x < 0 || dfs_x >= b || dfs_y < 0 || dfs_y >= a){ //���� �������
            continue;
        }

        if(board[dfs_x][dfs_y] == 0){ // ������ ���� �����԰� ���ÿ� Ž������ ���� ���϶�
            dfs(dfs_x, dfs_y);
        }
    }
}

bool isNotCheeze(){
    int r = 0;
    for(int i = 0; i < b; i++){
        for(int j = 0; j < a; j++){
            if(board[i][j] == 1){
                r = 1;
            }
        }
    }
    if(r == 0){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    cin >> b >> a;

    for(int i = 0; i < b; i++){
        for(int j = 0; j < a; j++){
            int str;
            cin >>  str;
            board[i][j] = str;
        }
    }

    dfs_check(); //�ٱ����⸦ 5�� �ʱ�ȭ

    while(1){
        int cnt = 0;
        if(isNotCheeze()){ //ġ� ���ٸ�
            cout << time << '\n' << cnt;
            return 0;
        }
        else{
            dfs()
            cnt = c_cnt;
        }
    }




    for(int i = 0; i < b; i++){
        for(int j = 0; j < a; j++){
            cout << board[i][j] << " ";
        }
        cout << '\n';
    }
    return 0;
}