#include <iostream>
#include <vector>
using namespace std;

int main(){

    int iter;
    int H;
    int W;
    int clientNum;
    int level;
    int pos;
    cin >> iter;
    string tmp;
    string oneResult="";
    vector<string> list;
    for(int i=0; i<iter; i++){
        oneResult="";
        cin >> H;
        cin >> W;
        cin >> clientNum;
        level = clientNum % H;
        pos = clientNum / H;
        
        //H = 10인데 10*n 손님이면 0이 되버림->높이로 지정
        if(level == 0) level = H;
        //아닐 경우엔 1호부터 시작하니 +1
        else pos += 1;

        tmp = to_string(level);
        oneResult.append(tmp);

        if(pos/10 == 0)
            oneResult.append("0");
        tmp = to_string(pos);
        oneResult.append(tmp);
        list.push_back(oneResult);
    }
    
    for(int i=0; i<iter; i++){
        cout << list.at(i) << endl;
    }
    return 0;
}