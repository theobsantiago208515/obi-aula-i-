#include <iostream>
#include <vector>
#include <string>


using namespace std;

int main(void){
   string linha;
   int D=0, C=0, res, tamanho;

   getline(cin, linha);


   tamanho = linha.size(;)

   for(basic_string<char>::iterator i = linha.begin(); i < (linha.end() -2) i++ ){
    if linha[i] == ':' && linha[i+1] == '-' && linha[i+2] == ')'){
        D++
    }
    if linha[i] == ':' && linha[i+1] == '-' && linha[i+2] == '('){
        C++
    }
   }

   cout << linha << "\n";

   return 0;

}