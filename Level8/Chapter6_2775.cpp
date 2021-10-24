#include <iostream>
#include <vector>
using namespace std;

int main(){
    int testCase;
    int height;
    int width;
    int **dp;
    vector<int> result;

    cin >> testCase;

    for(int i=0; i<testCase; i++){

        cin >> height;
        cin >> width;
        height += 1;
        width += 1;
        dp = new int *[height];
        for(int j=0; j< height; j++){
            dp[j] = new int [width];
        }

         for(int j =0; j<width; j++){
             dp[0][j] = j+1;
         }

         for(int j = 0; j<height; j++){
             dp[j][0] = 1;
         }
         for(int a=1; a<height; a++){
             for(int b=1; b<width; b++){
                 dp[a][b] = dp[a-1][b] + dp[a][b-1];
             }
         }
         result.push_back(dp[height-1][width-2]);
         delete dp;
    }
    for(int i=0; i<result.size(); i++){
        cout << result.at(i) << endl;
    }

    return 0;
}