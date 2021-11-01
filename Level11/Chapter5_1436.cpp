#include <iostream>
using namespace std;
int checkEnd(string str);
int main(){

    int input;
    int count = 0;
    int i=666;
    string tmp;
    cin >> input;
    while(1){
        tmp = to_string(i);
        count += checkEnd(tmp);
        if(count == input)
            break;
        i++;
    }
    cout << i << endl;
    return 0;
}
int checkEnd(string str){

    //end = 1, not end = 0;
    int length = str.length();
    string end = "666";
    string tmp;

    if(length<3) return 0;
    else{
        for(int i=0; i<length-2; i++){
            tmp = "";
            tmp = tmp + str[i] + str[i+1] + str[i+2];
            if(tmp.compare(end) == 0) return 1;

        }
    }
    return 0;
}