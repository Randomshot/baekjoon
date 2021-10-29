#include <iostream>
#include <vector>

using namespace std;
int main(){

    int a;
    int b;
    int c;

    while(1){
        cin >> a;
        cin >> b;
        cin >> c;

        if(!a && !b && !c) break;
        if(a*a+b*b == c*c || b*b+c*c == a*a || c*c + a*a == b*b)
            cout << "right" << endl;
        else 
            cout << "wrong" << endl;
    }
        
    return 0;
}