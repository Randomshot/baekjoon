//getline을 통해 공백을 포함한 문자열 받는 법 기억할 것
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){

    string input;
    int count = 1;
    getline(cin,input);
    if(input.empty())
        cout << "0";
    
    else{
        for(int i=0; i<input.length(); i++){
            if(input[i] == ' ')
                count++;
        }
        
    }
    if(input[0] == ' ') count--;
    if(input[input.length()-1] == ' ') count--;
    cout << count;
    return 0;
}

