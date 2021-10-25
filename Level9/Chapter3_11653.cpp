//제곱근을 통해 소수를 판별하는 방법을 기억할 것!!!
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
int boolPrimeNum(int num);
vector<int> makePrimeNumList(int size);
vector<int> primeFactorization(int num,vector<int> primeNumList);
int main(){

    vector<int> primeNumList;
    int tmp;
    int input;
    cin >> input;
    tmp = input;
    for(int i=2; i*i<=input; i++){
        while(tmp % i == 0){
            cout << i << endl;
            tmp /= i;
        }
    }
    if(tmp != 1) cout << tmp << endl;

    return 0;
}