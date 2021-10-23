#include <iostream>
using namespace std;
int main(){

    int x;
    int y;
    
    while(1){
        cin >> x;
        cin >> y;

        if(cin.eof() == true)
            break;
        cout << x+y << endl;
    }
    //cout << "Hello Wolrd" << endl;
    return 0;
}