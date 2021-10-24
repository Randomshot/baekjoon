//제곱수에 대한 생각 잘 할 것, 루트 값 구하는 sqrt 함수에 대해서 기억
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int getAct(int x, int y);
int main(){
    int testNum;
    int x;
    int y;
    int actNum;
    vector<int> result;
    cin >> testNum;
    for(int i=0; i<testNum; i++){
        cin >> x;
        cin >> y;
        actNum = getAct(x,y);
        result.push_back(actNum);
    }

    for(int i=0; i<result.size(); i++){
        cout << result.at(i) << endl;
    }
    
    return 0;
}
int getAct(int x, int y){

    int length = y - x;
    int actNum;

    actNum = int (sqrt(length));

    if(actNum*actNum == length)
        return 2*actNum -1;
    else if(actNum*actNum < length && length <= actNum*(actNum+1))
        return 2*actNum;
    else   
        return 2*actNum +1;
}