#include <iostream>
using namespace std;
int calConstructor(int num);
int findConstructor(int num);
int main(){

    int num;
    int result;
    cin >> num;
    result = findConstructor(num);
    cout << result << endl;
    return 0;
}
int calConstructor(int num){
    int result=num;

    while(num){
        result += num%10;
        num /= 10;
    }
    
    return result;
}
int findConstructor(int num){
    int result=1;

    while(1){
        if(num == calConstructor(result) || result == 1000000)
            break;
        else
            result++;
    }
    if(result == 1000000) result = 0;
    return result;
}