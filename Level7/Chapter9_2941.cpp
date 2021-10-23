// string + char 은 push_back() 이용, str 끼리의 비교는 .compare 이용, compare 결과가 0이면 같은것
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){

    string input;
    int inputLength;
    int count=0;
    vector<string> croatiaList;
    string tmp = "";
    int i=0;
    
    cin >> input;
    inputLength = input.length();

    croatiaList.push_back("c=");
    croatiaList.push_back("c-");
    croatiaList.push_back("d-");
    croatiaList.push_back("lj");
    croatiaList.push_back("nj");
    croatiaList.push_back("s=");
    croatiaList.push_back("z=");
    croatiaList.push_back("dz=");

    int oldI;
    while(i<inputLength){
        tmp="";
        oldI = i;
        if(i<inputLength-2){
            tmp.push_back(input[i]);
            tmp.push_back(input[i+1]);
            tmp.push_back(input[i+2]);
        }
        if(tmp.compare(croatiaList[7])==0){
            count++;
            i += 3;
        }
        else {
            if(i<inputLength-1){
                tmp = "";
                tmp.push_back(input[i]);
                tmp.push_back(input[i+1]);
                for(int j=0; j<croatiaList.size()-1; j++){
                    if(tmp.compare(croatiaList[j])==0){
                        count++;
                        i += 2;
                    }
                }
            }
        }
        
        if(oldI == i){
            i++;
            count++;
        }
    }
    cout << count << endl;
    return 0;
}