#include <iostream>
using namespace std;
int main(){

    int i=0;
    int up;
    int down;
    int height;

    cin >> up;
    cin >> down;
    cin >> height;

    
    i = (height-up)/(up-down);
    while(1){
        if(i*(up-down) >= height-up) break;
        else i++;
    }

    cout << i + 1 << endl;

}