#include <iostream>
#include <cmath>
using namespace std;
int hanoyTower(int level, int pad1, int pad2, int pad3);
int main(){

    int level;
    int count;
    cin >> level;

    count = pow(2,level) -1;
    cout << count << endl;
    hanoyTower(level,1,2,3);
    return 0;
}
int hanoyTower(int level, int pad1, int pad2, int pad3){

    if(level == 1)
        cout << pad1 << " " << pad3 << "\n";
    else{
		hanoyTower(level-1,pad1,pad3,pad2);
		hanoyTower(1,pad1,pad2,pad3);
		hanoyTower(level-1,pad2,pad1,pad3);
    }
    return 0;
}