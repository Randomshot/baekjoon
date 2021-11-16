#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){

    int size;
    vector<int> list;
    int tmp;
    cin >> size;
    for(int i=0; i<size; i++){
        cin >> tmp;
        list.push_back(tmp);
    }
    sort(list.begin(),list.end());

    for(int i=0; i<size; i++){
        cout << list[i] << "\n";
    }
    return 0;
}