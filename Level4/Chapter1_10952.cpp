#include <iostream>
using namespace std;
int main(){

    int x;
    int y;
    
    while(1){
        cin >> x;
        cin >> y;

        if(x == 0 && y == 0)
            break;
        cout << x+y << endl;
    }
    //cout << "Hello Wolrd" << endl;
    return 0;
}