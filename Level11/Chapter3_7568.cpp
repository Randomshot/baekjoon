#include <iostream>
#include <vector>
using namespace std;
struct physical{
    int height;
    int weight;
};
int main(){

    int size;
    physical tmp;
    int count;
    vector<physical> list;
    vector<int> result;

    cin >> size;

    for(int i=0; i<size; i++){
        cin >> tmp.weight;
        cin >> tmp.height;
        list.push_back(tmp);
    }

    for(int i=0; i<size; i++){
        count = 1;
        for(int j=0; j<size; j++){
            if((list[i].height < list[j].height) && (list[i].weight < list[j].weight))
                count++;
        }
        result.push_back(count);
    }
    
    for(int i=0; i<size; i++){
        cout << result[i] << "\n";
    }
    return 0;
}