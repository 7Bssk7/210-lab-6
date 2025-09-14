#include <iostream>
#include <iomanip>
using namespace std;

const int SIZE = 5;

double* enterArrayData(double *list);
double sumArray(double *arr);
void outputArrayData(double *arr);

int main(){
    double *arr = nullptr;
    arr = new double[SIZE] {5.5, 2.6, 3.4, 8.4, 9.2};
    double *listArr = nullptr;
    listArr = new double[SIZE];
    listArr = enterArrayData(arr);
    outputArrayData(listArr);
    delete [] listArr;

    return 0;
}

double* enterArrayData(double *list){
    double *arr = nullptr;
    arr = new double[SIZE];
    arr = list;
    cout << "Data entry for the array:" << endl;
    for(int i = 0; i < SIZE; ++i){
        cout  << "    > Element #" << i << ": " << arr[i] << endl;
    }
    cout << "Data entry complete." << endl;
    return arr;
}

double sumArray(double *arr){
    double sum = 0;
    for(int i = 0; i < SIZE; ++i){
        sum += arr[i];
    }
    return sum;
}

void outputArrayData(double *arr){
    cout << "Outputting array elements: ";
    for(int i = 0; i < SIZE; ++i){
        cout << arr[i] << " ";
    }
    cout << "\n";
    cout << "Sum of values: "<< sumArray(arr) << endl;
}


