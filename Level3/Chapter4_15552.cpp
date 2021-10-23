#include <iostream>
using namespace std;
int main(){
    int x;
    int a;
    int b;

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> x;

    for(int i = 0; i<x; i++){
        cin >> a;
        cin >> b;
        cout << a+b << "\n";
    }


    return 0;
}