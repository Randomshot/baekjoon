//카운팅 정렬에 대해 공부 할 것
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
double arithmeticMean(vector<int> list);
int median(vector<int> list);
int mode(vector<int> list);
int range(vector<int> list);
int main(){

    int size;
    cin >> size;
    vector<int> list;
    int tmp;
    for(int i=0; i<size; i++){
        cin >> tmp;
        list.push_back(tmp);
    }
    sort(list.begin(),list.end());

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cout<<fixed;
    cout.precision(0);

    cout << arithmeticMean(list) << "\n";
    cout << median(list) << "\n";
    cout << mode(list) << "\n";
    cout << range(list) << "\n";
    
    return 0;
}
double arithmeticMean(vector<int> list){
    double result = 0.0;
    for(int i=0; i<list.size(); i++){
        result += list[i];
    }
    result = result / (list.size()*1.0);
    return result;
}
int median(vector<int> list){

    int mid = list.size()/2;
    int result = list[mid];
    return result;
}
int mode(vector<int> list){

    int count[8001] = {0};
    int mostFrequent;
    vector<int> result;

    for(int i=0; i<list.size(); i++){
        count[list[i]+4000]++;
    }
    mostFrequent = *max_element(count,count+8001);
    
    for(int i=0; i<8001; i++){
        if(count[i] == mostFrequent)
            result.push_back(i-4000);
    }

    if(result.size() == 1) return result[0];
    else return result[1];
    
}
int range(vector<int> list){

    int result;
    result = list.back() - list.front();
    return result;
}