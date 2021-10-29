#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int getSquareDistance(int x1, int y1, int x2, int y2);
int getPosCount(int x1, int y1, int r1, int x2, int y2, int r2);
int main(){

    int iter;
    int x1,y1,r1,x2,y2,r2;
    int result;
    vector<int> resultList;
    cin >> iter;

    for(int i=0; i<iter; i++){
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        result = getPosCount(x1,y1,r1,x2,y2,r2);
        resultList.push_back(result);

    }

    for(int i=0; i<iter; i++){
        cout << resultList[i] << endl;
    }
}
int getSquareDistance(int x1, int y1, int x2, int y2){

    int result;
    result = pow((x1-x2),2) + pow((y1-y2),2);
    return result;
}
int getPosCount(int x1, int y1, int r1, int x2, int y2, int r2){
    int count=0;
    int squareDistance;
    squareDistance = getSquareDistance(x1,y1,x2,y2);
    if(squareDistance==0){
        if(r1 == r2) 
            count = -1;
        else 
            count = 0;
    }
    else{
        if( (squareDistance == pow((r1-r2),2)) || (squareDistance == pow((r1+r2),2)) )
            count = 1;
        else if( (squareDistance > pow((r1-r2),2)) && (squareDistance < pow((r1+r2),2)) )
            count = 2;
        else 
            count = 0;
    }
    return count;
}