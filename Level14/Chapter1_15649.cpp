#include <iostream>
using namespace std;

int N;
int M;
int arr[9]={0,};
bool visited[9]={false, };
void dfs(int num);
int main(){

    cin >> N;
    cin >> M;
    dfs(0);
    return 0;
}
void dfs(int num){
    if(num == M){
        for(int i=0; i<M; i++){
            cout << arr[i] << ' ';
        }
        cout << "\n";
        return;
    }
    for(int i = 1; i<=N; i++){
        if(!visited[i]){
            visited[i]=true;
            arr[num] = i;
            dfs(num+1);
            visited[i]=false;
        }
    }
}