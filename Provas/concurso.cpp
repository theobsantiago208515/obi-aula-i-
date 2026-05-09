#include <bits/stdc++.h> 

using namespace std;

int main (void){
    int N, K, V;

    cin >> N >> K;

    int A[N];

    for (int i = 0; i < n-1; i++){
        cin >> A[i];
    }


    for (int j = 0; j<n-1, j++){
        for (int i = 0; i < n-j; i++){
            if A[i] > A[i+1]{
                V = A[i];
                A[i] = A[i+1];
                A[i+1] = V;
            }
        }
        
    }

    for(int i=0; i< n; i++){
        cout << A[i] << " ";
    }
    
        int x = N-K;

        cout << A[x] << "\n";
        
    return 0
}