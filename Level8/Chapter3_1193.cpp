#include <iostream>
using namespace std;

struct position{
    int posInLevel;
    int level;
};
position findLevel(int x);
int main(){

    int x;
    position pos;
    int num;
    cin >> x;
    pos = findLevel(x);
    if(pos.level%2 != 0){
        cout << pos.posInLevel << "/" << pos.level-pos.posInLevel << endl;
    }
    else{
        cout << pos.level-pos.posInLevel << "/" <<  pos.posInLevel<< endl;
    }
    return 0;
}
position findLevel(int x){

    int i = 1;
    int tmp = 0;
    position pos;
    while(1){
        if(x <= tmp) break;
        else{
            tmp += i;
            i++;
        }
    }
    // 그 레벨에서 몇번째 인지 확인하기 위해 전체에서 그 전 레벨까지의 합계를 뺌
    pos.posInLevel = x-(tmp-i+1);
    pos.level = i;

    return pos;
}