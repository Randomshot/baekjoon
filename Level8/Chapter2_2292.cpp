#include <iostream>
#include <vector>
using namespace std;
int main(){

    int x;
    int tmp = 0;
    int i = 0;

    cin >> x;
    while(1){
        if(x <= (tmp+i)*6+1) break;
        else{
            tmp += i;
            i++;
        }
    }
    cout << i+1 << endl;

    return 0;    
}