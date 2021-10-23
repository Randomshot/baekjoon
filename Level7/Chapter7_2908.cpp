//stoi 를 통해서 string -> int  기억할 것, #include <string> 필수
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int makeReverse(string num);
int main(){

    string firstNum;
    string secondNum;

    int reversedFirstNum;
    int reversedSecondNum;

    cin >> firstNum;
    cin >> secondNum;

    reversedFirstNum = makeReverse(firstNum);
    reversedSecondNum = makeReverse(secondNum);

    if(reversedFirstNum > reversedSecondNum) cout << reversedFirstNum;
    else cout << reversedSecondNum;

    return 0;
}
int makeReverse(string num){

    int reverseNum;
    int length = num.length();

    string reverseString = "";

    for(int i=0; i<length; i++){
        reverseString = num[i] + reverseString;
    }
    reverseNum = stoi(reverseString);
    return reverseNum;
}