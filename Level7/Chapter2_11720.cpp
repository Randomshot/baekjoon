#include <iostream>
using namespace std;
int main(){
    int size;
    cin >> size;
    string num;
    cin >> num;
    int total=0;
    for(int i=0; i<size; i++){
        total += static_cast<int>(num[i]) -48;
    }
    cout << total << endl;
    return 0;
}