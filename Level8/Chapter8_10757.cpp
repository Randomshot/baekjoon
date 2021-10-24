#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    string a;
    string b;

    string shortString;
    string longString;
    int tmpA;
    int tmpB;
    int tmpSum;
    
    string result;
    cin >> a;
    cin >> b;

    if(a.length() < b.length()){
        shortString = a;
        longString = b;
    }
    else{
        shortString = b;
        longString = a;
    }
    
    for(int i=0; i< longString.length(); i++){
        if(i<shortString.length()){
            tmpA = shortString[shortString.length()-1-i] -'0';
        }
        else{
            tmpA = 0;
        }
        tmpB = longString[longString.length()-1-i] - '0';
        tmpSum = tmpA + tmpB;
        if(result.length() == i+1){
            tmpSum += 1;
            result.pop_back();
        }
        if(tmpSum >= 10){
            result.push_back(char(48+(tmpSum-10)));
            result.push_back(char(48+(tmpSum/10)));
        }
        else{
            result.push_back(char(48+tmpSum));
        }
    }

    reverse(result.begin(),result.end());
    cout << result << endl;
    return 0;
}