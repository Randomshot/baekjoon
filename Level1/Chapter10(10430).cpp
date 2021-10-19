#include <iostream>
using namespace std;
int main(){
    int x;
    int y;
    int z;

    cin >> x;
    cin >> y;
    cin >> z;

    cout << (x+y)%z << endl;
    cout << ((x%z)+(y%z))%z << endl;
    cout << (x*y)%z << endl;
    cout << ((x%z)*(y%z))%z << endl;

    return 0;
}