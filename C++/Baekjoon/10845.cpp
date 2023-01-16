#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main(){
    int n;
    cin >> n;
    queue <int> q;
    for(int i = 0 ; i < n; i++){
        string cmd;
        cin >> cmd;
        if(cmd == "pop")
        {
            if(q.empty() == 1){
                cout << "-1" << '\n';
            }
            else{
                cout << q.front() << '\n';
                q.pop();
            }
            
        }
        else if(cmd == "front")
        {   
            if(q.empty() == 1){
                cout << "-1" << '\n';
            }
            else{
                cout << q.front() << '\n';
            }
        }
        else if(cmd == "back")
        {
            if(q.empty() == 1){
                cout << "-1" << '\n';
            }
            else{
                cout << q.back() << '\n';
            }
        }
        else if(cmd == "size")
        {   
            cout << q.size() << '\n';
        }
        else if(cmd == "empty")
        {
            cout << q.empty() << '\n';
        }
        else if(cmd == "push")
        {
            int x;
            cin >> x;
            q.push(x);
        }
    }
    return 0;
}