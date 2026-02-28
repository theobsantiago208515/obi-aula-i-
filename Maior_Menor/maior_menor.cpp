#include <iostream>

using namespace std;

int main(void){
    double a, b;

    cout << "Escreva os números que você quer comparar: ";
    cin >> a >> b;

    if (a>b){
        cout << a << " é maior que " << b << "\n"; 
    }
    else if (a<b){
        cout << a << " é menor que " << b << "\n"; 
    }
    else{
        cout << a << " é igual a " << b << "\n"; 
    }
    
    return 0;

}