#include <iostream>
using namespace std;

int* getPointerToTen(){
    int* pInt = new int;
    *pInt = 10;
    return pInt;
}

int main(){
    cout << *getPointerToTen();
    return 0;
}