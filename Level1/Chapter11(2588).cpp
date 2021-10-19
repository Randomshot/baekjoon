#include <iostream>
using namespace std;
int main(){
    int x;
    int y;


    int n1;
    int n2;
    int n3;

    cin >> x;
    cin >> y;

    n3 = y%10;
    n2 = (y%100 - n3)/10;
    n1 = y/100;

    cout << x*n3 << endl;
    cout << x*n2 << endl;
    cout << x*n1 << endl;
    cout << x*y << endl;

    return 0;
}