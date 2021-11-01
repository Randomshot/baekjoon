#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int calMinColoring(int **chessBoard,int height,int width);
int main(){

    int height;
    int width;
    string input;
    int result=0;

    cin >> height;
    cin >> width;

    int **chessBoard = new int*[height];

    for(int i=0; i<height; i++){
        chessBoard[i] = new int[width];
    }

    for(int i=0; i<height; i++){
        cin >> input;
        for(int j=0; j<width; j++){
            //white = 0, black = 1
            if(input[j] == 'W') chessBoard[i][j] = 0;
            else chessBoard[i][j] = 1;
        }
    }

    result = calMinColoring(chessBoard,height,width);
    cout << result;
    
    //free array
    for(int i=0; i<height; i++){
        delete [] chessBoard[i];
    }
    delete [] chessBoard;
    return 0;
}
int calMinColoring(int **chessBoard,int height,int width){
    
    int result=10000;
    int count1=0;
    int count2=0;

    int whiteFirstBoard[8][8];
    int blackFirstBoard[8][8];

    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            if((i+j)%2 == 0){
                whiteFirstBoard[i][j] = 0;
                blackFirstBoard[i][j] = 1;
            }
            else{
                whiteFirstBoard[i][j] = 1;
                blackFirstBoard[i][j] = 0;
            }
        }
    }


    for(int i=0; i<height-7; i++){
        for(int j=0; j<width-7; j++){
            count1 = 0;
            count2 = 0;
            for(int a=0; a<8; a++){
                for(int b=0; b<8; b++){
                    if(chessBoard[i+a][j+b] != whiteFirstBoard[a][b]){
                        count1++;
                    }
                    if(chessBoard[i+a][j+b] != blackFirstBoard[a][b]){
                        count2++;
                    }
                }
            }
            if( count1 < result ) result = count1;
            if( count2 < result ) result = count2;
        }
    }
    return result;
}