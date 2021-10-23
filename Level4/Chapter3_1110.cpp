#include <iostream>
using namespace std;
int main(){

    int cicleNum = 1;
    int x;
    int tmp;
    int a;
    int b;

    cin >> x;
    tmp = x;
    while(1){
        a = x/10;
        b = x%10;
        x = b*10 + (a+b)%10;
        if(x == tmp)
            break;
        else
            cicleNum++;
    }
    cout << cicleNum << endl;
    return 0;
}