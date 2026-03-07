#include <iostream>

using namespace std;

int main(void){
    int n, exp, res = 1;
    cout << "Qual a base da potência? ";
    cin >> n;

    cout << "Qual o expoente da potência? ";
    cin >> exp;

    int i = 0;

    while (i < exp){
        res *= n;

        i ++
    }

    cout << "O resultado é " << res;

    return 0;
}