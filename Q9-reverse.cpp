#include <iostream>
#include <cstring>
using namespace std;

void reverse(char *s) {
    int len = strlen(s);
    for (int i = 0; i < len/2; i++){
        char temp = *(s+i);
        *(s+i) = *(s+len-i-1);
        *(s+len-i-1) = temp;
    }
}

int main(){
    char *s;
    s = new char[50];
    cin >> s;
    reverse(s);
    cout << s;
    return 0;
}