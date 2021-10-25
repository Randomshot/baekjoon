#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

vector<int> makeMultiple();
int boolPrimeNum(int num);
int main(){

    int size;
    vector<int> multipleList;
    int input;
    int count=0;
    cin >> size;

    multipleList = makeMultiple();
    for(int i=0; i<size; i++){
        cin >> input;
        for(int j=0; j<multipleList.size(); j++){
             if(multipleList[j] == input)
                 count++;
           
        }
    }

    count = size - count;
    cout << count << endl;

    // boolPrimeNum 을 통해서 소수인지 아닌지 판별, 내가 생각한 알고리즘은 아님 ㅎ;
    // for(int i=0; i<size; i++){
    //     cin >> input;
    //     count = count + boolPrimeNum(input);
    // }

    // cout << count << endl;

}
vector<int> makeMultiple(){

    vector<int> multipleList;

    multipleList.push_back(1);
    for(int i=2; i<=1000; i++){
        for(int j=2; j<=1000; j++){
            if(i*j<=1000)
                multipleList.push_back(i*j);
        }
    }
    sort(multipleList.begin(),multipleList.end());
    multipleList.erase(unique(multipleList.begin(),multipleList.end()),multipleList.end());
    return multipleList;
}
int boolPrimeNum(int num){

    // not PrimeNum => return 0;
    // PrimeNum => return 1;
    int count = 1;
    if(num < 2) return 0;
    int sqrtNum = (int)sqrt(num);

    for(int i=2; i<=sqrtNum; i++){
        if(num%i==0) count--;
    }
    if(count < 1) count = 0;
    return count;
}