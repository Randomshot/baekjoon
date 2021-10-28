//에라토스테네스의 채, endl 대신 "\n" 습관화, endl은 버퍼도 정리해줘서 오래걸림
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    int a;
    int b;
    int num;
    cin >> a;
    cin >> b;
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

    for(int i = a; i<=b; i++){
        if(result[i])
            cout << i << "\n";
    }
    return 0;
}
