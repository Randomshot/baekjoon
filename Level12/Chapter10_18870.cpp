//lower_bound() 함수 기억

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    int size;
    vector<int> sortedVec;
    vector<int> origin;
    int input;
    cin >> size;
    for(int i=0; i<size; i++){
        cin >> input;
        sortedVec.push_back(input);
        origin.push_back(input);
    }
    //sortedVec vec : 정렬, 중복제거 벡터
    //origin vec : 원본 벡터
    sort(sortedVec.begin(),sortedVec.end());
    sortedVec.erase(unique(sortedVec.begin(),sortedVec.end()),sortedVec.end());

    //정렬 된 벡터에서 원본 벡터 값 이상의 값이 처음으로 나오는 위치를 반환
    for(int i=0; i<origin.size(); i++){
        //lower_bound 는 주소값을 반환하므로, 인덱스 만을 반환 받기 위해선 -begin() 해야함
        int output = lower_bound(sortedVec.begin(),sortedVec.end(),origin[i]) - sortedVec.begin();
        cout << output << " ";
    }
    
    return 0;
}
