#include <iostream>
#include <vector>
using namespace std;

int main(){

    int input;
    int weight;
    int fiveNum=0;
    int threeNum=0;
    cin >> input;

    fiveNum = input/5;
    if(input == 4 || input == 7){
        cout << -1 << endl;
    }
    else{
        while(1){
            weight = fiveNum*5 + threeNum*3;
            if(weight == input) break;
            else if(weight > input){
                fiveNum--;
                threeNum++;
            }
            else{
                threeNum++;
            }
        }
        cout << fiveNum + threeNum << endl;
    }
    return 0;
}