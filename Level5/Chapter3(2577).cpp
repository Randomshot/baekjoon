#include <iostream>
using namespace std;
int findLength(int tmp);
int *makeArray(int tmp, int length);
int *countNum(int arr[], int length);
int main(){

    int A,B,C;
    int multiple;
    int length;
    int tmp;
    int *result;
    cin >> A >>B >> C;
    multiple = A*B*C;
    length = findLength(multiple);
    int *arr = makeArray(multiple,length);
    result = countNum(arr,length);
    for(int i=0; i<10; i++){
        cout << result[i] << endl;
    }
    return 0;
}
int findLength(int tmp){
    int length = 1;
    while(1){
        tmp = tmp/10;
        if(tmp == 0){
            break;
        }
        else{
            length++;
        }
    }
    return length;
}

int *makeArray(int tmp, int length){
    int *result = new int[length];
    for(int i=0; i<length; i++){
        result[i] = tmp%10;
        tmp=tmp/10;
    }
    return result;
}

int *countNum(int arr[],int length){
    int *result = new int[10];
    for(int i=0; i<10; i++){
        result[i] = 0;
    }
    for(int i=0; i<length; i++){
        if(arr[i]==0) result[0] = result[0]+1;
        else if(arr[i]==1) result[1] = result[1]+1;
        else if(arr[i]==2) result[2] = result[2]+1;
        else if(arr[i]==3) result[3] = result[3]+1;
        else if(arr[i]==4) result[4] = result[4]+1;
        else if(arr[i]==5) result[5] = result[5]+1;
        else if(arr[i]==6) result[6] = result[6]+1;
        else if(arr[i]==7) result[7] = result[7]+1;
        else if(arr[i]==8) result[8] = result[8]+1;
        else if(arr[i]==9) result[9] = result[9]+1;
    }

    return result;
}