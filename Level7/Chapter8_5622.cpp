#include <iostream>
#include <vector>
#include <string>
using namespace std;
vector<int> getPhoneNum(string input);
int getTime(vector<int> phoneNum);
int main(){

    string input;
    vector<int> phoneNum;
    int time;

    cin >> input;
    phoneNum = getPhoneNum(input);
    time = getTime(phoneNum);
    cout << time << endl;
    return 0;
}
vector<int> getPhoneNum(string input){

    vector<int> phoneNum;
    int inputLength = input.length();

    for(int i=0; i<inputLength; i++){
        if(input[i] == 'A' || input[i] == 'B' || input[i] == 'C')
            phoneNum.push_back(2);
        else if(input[i] == 'D' || input[i] == 'E' || input[i] == 'F')
            phoneNum.push_back(3);
        else if(input[i] == 'G' || input[i] == 'H' || input[i] == 'I')
            phoneNum.push_back(4);
        else if(input[i] == 'J' || input[i] == 'K' || input[i] == 'L')
            phoneNum.push_back(5);
        else if(input[i] == 'M' || input[i] == 'N' || input[i] == 'O')
            phoneNum.push_back(6);
        else if(input[i] == 'P' || input[i] == 'Q' || input[i] == 'R' || input[i] == 'S')
            phoneNum.push_back(7);
        else if(input[i] == 'T' || input[i] == 'U' || input[i] == 'V')
            phoneNum.push_back(8);
        else if(input[i] == 'W' || input[i] == 'X' || input[i] == 'Y' || input[i] == 'Z')
            phoneNum.push_back(9);
    }

    return phoneNum;
}
int getTime(vector<int> phoneNum){

    int result = 0;
    while(phoneNum.size()>0){
        result += phoneNum.back() +1;
        phoneNum.pop_back();
    }
    return result;

}