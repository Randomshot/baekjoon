//vector 중복 제거 과정을 기억할 것
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int count=0;
    int num;
    cin >> num;
    vector<char> tmp;
    string input;
    int inputLength;
    for(int i=0; i<num; i++){
        
        //vector 초기화
        tmp.clear();
        cin >> input;
        inputLength = input.length();
        for(int j=0; j<inputLength; j++){
            tmp.push_back(input[j]);
        }
        // 정렬 안하고 erase 하면, 연속으로 중복 된 값들만 제거 됨
        tmp.erase(unique(tmp.begin(),tmp.end()),tmp.end());
        int oldSize = tmp.size();
        // 정렬 후 erase 하면, 모든 중복 된 값들 제거
        sort(tmp.begin(),tmp.end());
        tmp.erase(unique(tmp.begin(),tmp.end()),tmp.end());
        // 둘의 크기가 같으면 그룹 단어
        if(oldSize == tmp.size()){
            count++;
        }
    }
    cout << count << endl;
    
}