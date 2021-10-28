#include <iostream>
#include <vector>
using namespace std;
int minLength(int x, int y, int w, int h);
int main(){

    int x;
    int y;
    int w;
    int h;

    int result;

    cin >> x;
    cin >> y;
    cin >> w;
    cin >> h;

    result = minLength(x,y,w,h);
    cout << result << endl;
    return 0;
}
int minLength(int x, int y, int w, int h){

    int result;
    vector<int> list;
    
    int xToZero = x;
    int xToEnd = w-x;
    int yToZero = y;
    int yToEnd = h-y;

    list.push_back(xToZero);
    list.push_back(xToEnd);
    list.push_back(yToZero);
    list.push_back(yToEnd);

    result = list[0];
    for(int i=1; i<4; i++){
        if(result > list[i])
            result = list[i];
    }
    return result;
}