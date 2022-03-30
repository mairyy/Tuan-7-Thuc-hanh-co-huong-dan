#include <iostream>
using namespace std;

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int *a = new int;
    int *b = new int;
    cin >> *a >> *b;
    swap(a, b);
    cout << *a << ' ' << *b;
    return 0;
}