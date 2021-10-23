#include <iostream>
#include <vector>
using namespace std;
#define AlpabetSize 26
int main(){

    string input;
    vector<int> pos;
    int inputLength;
    
     for(int i=0; i<AlpabetSize; i++){
         pos.push_back(-1);
     }
    cin >> input;
    inputLength = input.length();

    for(int i=0; i<inputLength; i++){
        int alpabet = static_cast<int>(input[i])-97;
        if(pos[alpabet] < 0)
            pos[alpabet] = i;
    }

    for(int i=0; i<AlpabetSize; i++){
        cout << pos[i];
        if(i != AlpabetSize-1)
        cout << " ";
    }
    cout << endl;
    return 0;
}