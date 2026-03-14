#include <iostream>

using namespace std;

int main(void){
    long long base, exp, res = 1;

    cout << "Qual a base? ";
    cin >> base;

    cout << "Qual o expoente? ";
    cin >> exp;

    int i = 0;

   for (int i = 0; i < exp; i++){
    res *= base;
   }
    cout << "A resposta é " << res << "\n";
 
    return 0;
}