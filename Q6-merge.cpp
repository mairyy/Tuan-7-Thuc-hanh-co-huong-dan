#include <iostream>
using namespace std;

int* merge(int* firstArr, int lenArr1, int* secondArr, int lenArr2){
    int* mergeArr = new int [lenArr1+lenArr2];
    int firstIndex = 0, secondIndex = 0, mergeIndex = 0;
    if (*(firstArr) < *(firstArr+lenArr1-1)){
        while (firstIndex < lenArr1 && secondIndex < lenArr2){
            if (*(firstArr+firstIndex) <= *(secondArr+secondIndex)){
                *(mergeArr+mergeIndex) = *(firstArr+firstIndex);
                firstIndex++;
            }else{
                *(mergeArr+mergeIndex) = *(secondArr+secondIndex);
                secondIndex++;
            }
            mergeIndex++;
        }
        while (firstIndex < lenArr1){
            *(mergeArr+mergeIndex) = *(firstArr+firstIndex);
            firstIndex++;
            mergeIndex++;
        }
        while (secondIndex < lenArr2){
            *(mergeArr+mergeIndex) = *(secondArr+secondIndex);
            secondIndex++;
            mergeIndex++;
        }
    }else{
        while (firstIndex < lenArr1 && secondIndex < lenArr2){
            if (*(firstArr+firstIndex) >= *(secondArr+secondIndex)){
                *(mergeArr+mergeIndex) = *(firstArr+firstIndex);
                firstIndex++;
            }else{
                *(mergeArr+mergeIndex) = *(secondArr+secondIndex);
                secondIndex++;
            }
            mergeIndex++;
        }
        while (firstIndex < lenArr1){
            *(mergeArr+mergeIndex) = *(firstArr+firstIndex);
            firstIndex++;
            mergeIndex++;
        }
        while (secondIndex < lenArr2){
            *(mergeArr+mergeIndex) = *(secondArr+secondIndex);
            secondIndex++;
            mergeIndex++;
        }
    }
    return mergeArr;
}

void inputArr(int* a, int n){
    for (int i = 0; i < n; i++)
        cin >> *(a+i);
}

int main(){
    int n, m;
    cin >> n;
    int* arr1 = new int [n];
    inputArr(arr1, n);
    cin >> m;
    int* arr2 = new int [m];
    inputArr(arr2, m);
    int* mergeArr = merge(arr1, n, arr2, m);
    for (int i = 0; i < n+m; i++)
        cout << *(mergeArr+i) << ' ';
    return 0;
}