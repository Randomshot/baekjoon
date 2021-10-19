#include <iostream>
using namespace std;
int findMin(int arr[], int length);
int findMax(int arr[], int length);
int main(){

    int x;
    cin >> x;
    int *array = new int[x];

    for(int i=0; i<x; i++){
        cin >> array[i];
    }

    int max;
    int min;

    max = findMax(array,x);
    min = findMin(array,x);
    cout << min << " " << max << endl;
    return 0;
}

int findMin(int arr[], int length){

    int min;
    
    for(int i=0; i<length; i++){
  
        if(min > arr[i] || i == 0)
            min = arr[i];
    }

    return min;
}

int findMax(int arr[], int length){

    int max;
    
    for(int i=0; i<length; i++){
  
        if(max < arr[i] || i == 0)
            max = arr[i];
    }

    return max;
}