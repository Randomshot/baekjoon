#include <iostream>
using namespace std;
int calFibonacci(int n);
int main(){

    int num;
    int result;
    cin >> num;
    result = calFibonacci(num);
    cout << result << endl;
    return 0;
}
int calFibonacci(int n){

    if(n == 0) return 0;
    else if(n == 1) return 1;
    else {
        return calFibonacci(n-1) + calFibonacci(n-2);
    }
}