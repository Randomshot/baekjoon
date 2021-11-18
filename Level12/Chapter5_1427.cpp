#include <iostream>
#include <algorithm>
using namespace std;
int main(){

    string input;
    string result = "";
    cin >> input;
    sort(input.begin(),input.end());

    for(int i=0; i<input.length(); i++){
        result =  input[i] + result;
    }

    cout << result << "\n";
    return 0;
}