// vector 중복 제거 하는 법을 잘 알아둘것!!
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int makeConstructNum(int i);
int main(){

    vector<int> constructNumList;
    int constructNum;
    for(int i=1; i<=10000; i++){
        constructNum = makeConstructNum(i);
        if(constructNum <= 10000)
            constructNumList.push_back(constructNum);
    }
    sort(constructNumList.begin(),constructNumList.end());
    constructNumList.erase(unique(constructNumList.begin(),constructNumList.end()),constructNumList.end());

    int j=0;
    for(int i=1; i<=10000; i++){
        if(i == constructNumList[j]){
            if(j < constructNumList.size()-1)
                j++;
        }
        else{
            cout << i << endl;
        }
    }


}
int makeConstructNum(int i){

    int total=i;
    while(i){
        total += i%10;
        i = i/10;
    }
    return total;
}