#include <iostream>
#include <vector>
using namespace std;
int findLeast(vector<int> list);
int main(){

    int x;
    int y;

    vector<int> xList;
    vector<int> yList;

    for(int i=0; i<3; i++){
        cin >> x;
        cin >> y;
        xList.push_back(x);
        yList.push_back(y);
    }

    x = findLeast(xList);
    y = findLeast(yList);

    cout << x << " " << y << endl;
    return 0;
}
int findLeast(vector<int> list){

    int result;
    result = list[0];
    if(list[0] == list[1])
        result = list[2];
    else if(list[0] == list[2])
        result = list[1];
    
    return result;
}
