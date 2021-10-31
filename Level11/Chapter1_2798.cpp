#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int blackJack(vector<int> list, int num,int size);
int main(){

    int size;
    int num;
    vector<int> list;
    int tmp;
    int result;
    cin >> size;
    cin >> num;

    for(int i=0; i<size; i++){
        cin >> tmp;
        list.push_back(tmp);
    }
    //sort(list.begin(),list.end());
    result = blackJack(list,num,size);
    cout << result << endl;
    return 0;
}
int blackJack(vector<int> list,  int num, int size){
    int result=0;
    int tmp;

    for(int i=0; i<size-2; i++){
        for(int j=i+1; j<size-1; j++){
            for(int k=j+1; k<size; k++){
                tmp = list[i] + list[j] + list[k];
                if(tmp > result && tmp <= num)
                    result = tmp;
            }
        }
    }
    return result;
}