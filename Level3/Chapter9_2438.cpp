#include <iostream>
using namespace std;
int main(){
    int x;


    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> x;

    for(int i = 1; i<=x; i++){

        for(int j = 1; j<=i; j++){
            cout << "*";
        }
        cout << endl;
    }


    return 0;
}