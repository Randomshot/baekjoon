//sqrt 도 아슬아슬하게 됨;
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int boolPrimeNum(int x);
int main(){

    int a;
    int b;
    int num;
    cin >> a;
    cin >> b;
    for(int i=a; i<=b; i++){
        num = boolPrimeNum(i);
        if(num){
            cout << i << "\n";
        }
    }
    return 0;
}
int boolPrimeNum(int x){

    // not PrimeNum => return 0;
    // PrimeNum => return 1;
    int count = 1;
    if(x < 2) count = 0;
    int sqrtNum = (int)sqrt(x);

    for(int i=2; i<=sqrtNum; i++){
        if(x%i==0) count--;
    }
    if(count < 1) count = 0;

    return count;
}