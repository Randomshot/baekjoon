#include <iostream>
using namespace std;
int main(){

    int input[10];
    int result[42];
    int count = 0;
    for(int i=0; i<10; i++){
        cin >> input[i];
        
    }
    for(int i=0; i<42; i++){
        result[i] = 0;
    }

    for(int i=0; i<10; i++){
        for(int j =0; j<42; j++){
            if(input[i]%42==j) result[j] = result[j]+1;
        }
    }

    for(int i=0; i<42; i++){
        if(result[i]>0) count++;
    }
    cout << count << endl;
    return 0;
}