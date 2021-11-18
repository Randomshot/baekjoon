//구조체 타입을 가지는 벡터 정렬 하는 법 기억할 것!
//compare 함수를 통해서 직접 정의
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct pos{
    int x;
    int y;
};
bool compare(pos a, pos b);
int main(){

    int size;
    cin >> size;
    vector<pos> list;
    pos tmp;

    for(int i=0; i<size; i++){
        cin >> tmp.x;
        cin >> tmp.y;
        list.push_back(tmp);
    }

    sort(list.begin(),list.end(),compare);
    
    for(int i=0; i<size; i++){
        cout << list[i].x << " " << list[i].y << "\n";
    }
    return 0;
}
bool compare(pos a, pos b){
    if(a.y == b.y) 
        return a.x < b.x;
    else
        return a.y < b.y;
}