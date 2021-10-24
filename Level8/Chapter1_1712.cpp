#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){

    long A;
    long B;
    long C;
    long i=0;
    cin >> A;
    cin >> B;
    cin >> C;

    if(C-B <=0){
        i = -1;
    }
    else{
        i = A/(C-B)+1;
    }

    cout << i << endl;
    return 0;
}