#include <iostream>
using namespace std;

const int SIZE = 5;

double* enterArrayData();
void outputArrayData(double *arr);

int main(){
    double *listArr = nullptr;
    listArr = new double[SIZE];
    listArr = enterArrayData();
    outputArrayData(listArr);
    delete [] listArr;

    return 0;
}

double* enterArrayData(){
    double temp;
    double *arr = nullptr;
    arr = new double[SIZE];
    for(int i = 0; i < SIZE; ++i){
        cin >> temp;
        arr[i] = temp;
    }
    return arr;
}

void outputArrayData(double *arr){
    for(int i = 0; i < SIZE; ++i){
        cout << "Element #" << i << " " << arr[i] << endl;
    }
}


