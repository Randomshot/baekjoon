#include <iostream>
#include <vector>
using namespace std;

long long sum(std::vector<int> &a){
    long long size = a.size();
    long long ans = 0;
    for(long long i=0; i<size; i++){
        ans += a[i];
    }
    return ans;
}