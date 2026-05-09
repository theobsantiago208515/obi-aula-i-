#include<bits/stdc++.h>

using namespace std;

void espalha(char*lava);

int main(void){
    int N, F;
    cin >> N >> F;
    char matrix[N][N];
    for (int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> matrix[i][j];
        }
    } 
   if((int)M[0][0] <= F){
    M[0][0] = '*';
    invade(&M[0][0]);
   }

   void invade(char* lava, int i, int j int N, int F){
        bool n = false, s = false, l = false, o = false;

        if(i != 0){
            if (*lava[i][j+N] == '*') && (*lava[j][j] < F){
                *lava[i][j+N] = '*'
                o = true
            }

            if (*lava[i][j-1] == '*') && (*lava[i-1][j] < F){
                *lava[i][j-1] = '*'
                l = true
            }

            if (*lava[i-1][j] == '*') && (*lava[i-1][j] < F){
                *lava[i-1][j] = '*'
                n = true
            }
           
                
            
            if (*lava[i+1][j] == '*') && (*lava[i-1][j] < F){
                *lava[i+1][j] = '*'
                s = true
            }
        }
    }
}


