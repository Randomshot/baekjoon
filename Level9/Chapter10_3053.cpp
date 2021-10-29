#include <iostream>
#include <vector>
using namespace std;
double findCircleArea(int r);
double findTaxiCircleArea(int r);
int main(){

    int r;
    double circleArea;
    double taxiCircleArea;
    cin >> r;
    circleArea = findCircleArea(r);
    taxiCircleArea = findTaxiCircleArea(r);

    cout<<fixed;
    cout.precision(6);
    cout << circleArea << "\n" << taxiCircleArea << endl;

    return 0;
}
double findCircleArea(int r){
    return r*r*3.14159265358979;
}
double findTaxiCircleArea(int r){
    return r*r*2.0;
}