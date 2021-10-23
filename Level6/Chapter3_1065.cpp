//반복문 쓸 때 파라미터 명과 겹치지 않는 새로운 변수로 쓸 것!
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool checkHanNum(int i);
int main(){

    int count = 0;
    int input;
    cin >> input;
    
    for(int i=1; i<=input; i++){
        if(checkHanNum(i))
            count++;
    }
    cout << count << endl;
    return 0;
}

bool checkHanNum(int i){

    vector<int> list;
    bool check = true;
    int tmp = i;
    while(i){
        list.push_back(i%10);
        i = i/10;
    }
    i = tmp;
    if(i>=100){
        for(int j=0; j<list.size()-2; j++){
            int first = list.at(j+1) - list.at(j);
            int second = list.at(j+2) - list.at(j+1);
            if(first != second){
                check = false;
                break;
            }
        }
    }

    return check;
}