//에라토스테네스의 채, endl 대신 "\n" 습관화, endl은 버퍼도 정리해줘서 오래걸림
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int countPrimeNum(int a);
int main(){

    int input;
    cin >> input;
    vector<int> result;
    while(input){
        result.push_back(countPrimeNum(input));
        cin >> input;
    }
    for(int i=0; i<result.size(); i++){
        cout << result[i] << "\n";
    }
    return 0;
}

int countPrimeNum(int a){

    int b;
    int count = 0;
    b = 2*a;
    int *result = new int[b+1];
    fill_n(result,b+1,1);
    result[0] = 0;
    result[1] = 0;

    for(int i=2; i <= sqrt(b); i++){
        if(result[i]){
            for(int j=i*2; j<=b; j+=i){
                result[j] = 0;
            }
        }
    }

    for(int i = a+1; i<=b; i++){
        if(result[i])
            count++;
    }

    return count;
}
