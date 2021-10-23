#include <iostream>
#include <vector>
using namespace std;
int main(){

    int testNum;
    cin >> testNum;
    int iter;
    string inputString;
    vector<char> result;
    
    for(int i=0; i<testNum; i++){
        cin >> iter;
        cin >> inputString;
        for(int j=0; j<inputString.length(); j++){
            for(int k=0; k<iter; k++){
                result.push_back(inputString[j]);
            }
        }
        result.push_back('\n');
    }
    for(int i=0; i<result.size(); i++){
        cout << result[i];
    }
    return 0;
}