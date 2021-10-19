#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int x;
    int y;
    cin >> x;
    cin >> y;
    //cout.unsetf(ios::fixed);
    cout.precision(11);
    cout << (static_cast<double>(x) / static_cast<double>(y)) << endl;

    return 0;
}