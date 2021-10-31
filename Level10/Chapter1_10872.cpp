#include <iostream>

using namespace std;
int calFactorial(int num);
int main(){

    int num;
    int result = calFactorial(num);
    cin >> num;
    cout << result << endl;
    return 0;
}
int calFactorial(int num){

    if(num > 1){
        return num * calFactorial(num-1);
    }
    else
        return 1;
}