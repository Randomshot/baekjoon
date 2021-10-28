#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
struct pairNum{
    int min;
    int max;
};
int boolPrimeNum(int num);
int splitNum(int num);
int main(){

    int size;
    cin >> size;
    int max;
    int num;
    pairNum tmpResult;
    vector<pairNum> result;
    for(int i=0; i<size; i++){
        cin >> num;
        tmpResult.min = splitNum(num);
        tmpResult.max = num - tmpResult.min;
        result.push_back(tmpResult);
    }
    for(int i=0; i<size; i++){
        cout << result[i].min << " " << result[i].max << "\n";
    }
    return 0;
}

int boolPrimeNum(int num){

    // not PrimeNum => return 0;
    // PrimeNum => return 1;
    int count = 1;
    if(num < 2) return 0;
    int sqrtNum = (int)sqrt(num);

    for(int i=2; i<=sqrtNum; i++){
        if(num%i==0){
            count--;
            break;
        }
    }
    return count;
}

int splitNum(int num){

    int result=0;
    int min;
    int max;
    for(int i = 2; i<num-1; i++){
        min = i;
        max = num - i;
        if( min > max) break;
        if(boolPrimeNum(min) && boolPrimeNum(max)){
            result = min;
        }
    }
    return result;
}