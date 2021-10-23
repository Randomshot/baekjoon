//static_cast<type> 을 통한 형변환 기억할 것
#include <iostream>
using namespace std;
int main(){
    char input;
    cin >> input;
    cout << static_cast<int>(input)  << endl;
    return 0;
}