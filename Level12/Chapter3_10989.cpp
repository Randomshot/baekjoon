#include <iostream>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int size;
    int tmp;
    cin >> size;

    int list[10001] = {0};

    for(int i=0; i<size; i++){
        cin >> tmp;
        list[tmp]+=1;
    }
    for(int i=0; i<10001; i++){
        for(int j=0; j<list[i]; j++){
            cout << i << "\n";
        }
    }
    return 0;
}