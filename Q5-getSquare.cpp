#include <iostream>
#include <iomanip>
using namespace std;

double* getSquare (double number){
    double* square = new double;
    *square = number*number;
    return square;
}

int main(){
    double n;
    cin >> n;
    cout << fixed << setprecision(2) << *getSquare(n);
    return 0;
}