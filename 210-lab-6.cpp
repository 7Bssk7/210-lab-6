#include <iostream>
#include <iomanip>
using namespace std;

const int SIZE = 5;

void enterArrayData(double *arr);
double sumArray(double *arr);
void outputArrayData(double *arr);

int main(){
    double *listArr = nullptr;
    listArr = new double[SIZE];
    enterArrayData(listArr);
    outputArrayData(listArr);
    delete [] listArr;

    return 0;
}

void enterArrayData(double *arr){
    double temp;
    cout << "Data entry for the array:" << endl;
    for(int i = 0; i < SIZE; ++i){
        cout  << "    > Element #" << i << ": ";
        cin >> temp;
        arr[i] = temp;
    }
    cout << "Data entry complete." << endl;
}

double sumArray(double *arr){
    double sum = 0;
    for(int i = 0; i < SIZE; ++i){
        sum += *(arr + i);
    }
    return sum;
}

void outputArrayData(double *arr){
    cout << "Outputting array elements: ";
    for(int i = 0; i < SIZE; ++i){
        cout << *(arr + i) << " ";
    }
    cout << "\n";
    cout << "Sum of values: "<< sumArray(arr) << endl;
}