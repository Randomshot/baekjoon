#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct info{

    int age;
    string name;
    int enterOrder;
};
bool compare(info a, info b);
int main(){

    int size;
    cin >> size;
    info input;
    vector<info> result;

    for(int i=0; i<size; i++){
        cin >> input.age;
        cin >> input.name;
        input.enterOrder = i;
        result.push_back(input);
    }
    sort(result.begin(),result.end(),compare);
    
    for(int i=0; i<size; i++){
        cout << result[i].age << " " << result[i].name << "\n";
    }

    return 0;
}
bool compare(info a, info b){

    if(a.age == b.age)
        return a.enterOrder < b.enterOrder;
    else
        return a.age < b.age;
}