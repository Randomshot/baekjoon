#include <iostream>
using namespace std;
struct MaxNumber{
    int maxNum;
    int maxPos;
};
MaxNumber findMax(int arr[],int length);
int main(){

    int length = 9;
    int array[9];
    MaxNumber result;
    for(int i=0; i<length; i++){
        cin >> array[i];
    }
    result = findMax(array,length);
    cout << result.maxNum << endl << result.maxPos << endl;
    return 0;
}
MaxNumber findMax(int arr[], int length){

    MaxNumber maxNum;

    for(int i=0; i<length; i++){
        if(i==0 || maxNum.maxNum < arr[i]){
            maxNum.maxNum = arr[i];
            maxNum.maxPos = i+1;
        }
    }
    return maxNum;
}

