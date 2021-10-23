//toupper, tolower 사용법 알기
#include <iostream>
#include <vector>
#include <locale>
using namespace std;
#define AlpabetSize 26
vector<int> count(string input);
char findMostFreq(vector<int> pos);
int main(){

    string input;
    vector<int> pos;
    char result;
    cin >> input;

    for(int i=0; i<input.length(); i++){
        input[i] = toupper(input[i]);
    }

    
    pos = count(input);
    result = findMostFreq(pos);
    cout << result << endl;
    return 0;
}
vector<int> count(string input){
    vector<int> pos;
    int inputLength;
    
     for(int i=0; i<AlpabetSize; i++){
         pos.push_back(0);
     }
    inputLength = input.length();

    for(int i=0; i<inputLength; i++){
        int alpabet = static_cast<int>(input[i])-65;

        pos[alpabet] += 1;
    }
    return pos;
}
char findMostFreq(vector<int> pos){
    int count=0;
    int max;
    int maxPos;

    for(int i=0; i<AlpabetSize; i++){
        if(i==0 || max < pos[i]){
            max = pos[i];
            maxPos = i;
        }
    }

    for(int i=0; i<AlpabetSize; i++){
        if(max == pos[i])
            count++;
    }

    if(count == 1){
        return static_cast<char>(maxPos+65);
    }
    else   
        return '?';
}