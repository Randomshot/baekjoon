#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

vector<int> makeMultiple();
vector<int> makeResult(vector<int> multipleList, int x, int y);
int boolPrimeNum(int num);
int main(){

    vector<int> multipleList;

    int x;
    int y;
    int sum=0;
    vector<int> result;

    cin >> x;
    cin >> y;

    multipleList = makeMultiple();
    result = makeResult(multipleList,x,y);

    if(result.size() == 0)
        cout << -1 << endl;
    else{
        sort(result.begin(),result.end());
        for(int i=0; i<result.size(); i++){
            sum += result[i];
        }
        cout << sum << endl << result[0] << endl;
    }

    // boolPrimeNum 을 통해서 소수인지 아닌지 판별, 내가 생각한 알고리즘은 아님 ㅎ;
    // for(int i=x; i<=y; i++){
    //     if(boolPrimeNum(i))
    //         result.push_back(i);
    // }
    // if(result.size() == 0)
    //     cout << -1 << endl;
    // else{
    //     //sort(result.begin(),result.end());
    //     for(int i=0; i<result.size(); i++){
    //         sum += result[i];
    //     }
    //     cout << sum << endl << result[0] << endl;
    // }
    return 0;
}
vector<int> makeMultiple(){

    vector<int> multipleList;

    multipleList.push_back(1);
    for(int i=2; i<=10000; i++){
        for(int j=2; j<=10000; j++){
            if(i*j<=10000)
                multipleList.push_back(i*j);
        }
    }
    sort(multipleList.begin(),multipleList.end());
    multipleList.erase(unique(multipleList.begin(),multipleList.end()),multipleList.end());
    return multipleList;
}
vector<int> makeResult(vector<int> multipleList, int x, int y){

    vector<int> result;
    int count = 0;

    for(int i=x; i<=y; i++){
        count = 0;
        for(int j=0; j<multipleList.size(); j++){
            if(i == multipleList[j])
                count++;
        }
        if(count==0)
            result.push_back(i);
    }

    return result;
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