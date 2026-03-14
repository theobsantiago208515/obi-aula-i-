#include <iostream>
#include <vector>


int main(void){
    int N, M, cal, total = 0, res = 0;

    cin >> N >> M;


    for(int i = 0; i < N; i++){
        for(int j = 0; j < 3; j++){
            cin >> cal;

            if(j==i){
                total += cal*9;
            }else{
                total += cal*4;
            }
        
        }
    }

   res = M - total;

   cout << res << "\n";

   return 0;
          
}