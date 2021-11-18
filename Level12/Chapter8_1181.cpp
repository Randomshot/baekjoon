//sort에 사용자 정의 compare 함수 사용 기억할 것!
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(string a, string b);
int main(){

    int size;
    vector<string> list;
    string input;
    int uniqueListSize;
    cin >> size;
    for(int i=0; i<size; i++){
        cin >> input;
        list.push_back(input);
    }
    sort(list.begin(),list.end());
    list.erase(unique(list.begin(),list.end()),list.end());
    uniqueListSize = list.size();  
    sort(list.begin(),list.end(),compare);
    for(int i=0; i<uniqueListSize; i++){
        cout << list[i] << "\n";
    }

    return 0;
}
bool compare(string a, string b){

    if(a.length() == b.length())
        return a < b;
    else
        return a.length() < b.length();
}