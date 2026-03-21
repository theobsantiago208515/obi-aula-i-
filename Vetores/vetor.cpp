#include <iostream>
#include <vector>

using namespace std;

int main(void){

    vector<int> vec;
    vec.reserve(5)
    cout << "Escreva números naturais.\n";
    
    int value;
    do{
        cin >> value;
        vec.push_back(value);
    while(vec.back() > 0);

    vec.pop_back();

    for(int i = 0; i < vec.size){
        cout << vec[i] << " ";
    }

    cout << vec.size << "\n";

    return 0;
}