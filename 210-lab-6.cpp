// COMSC-210 | Lab 6 | Arkhip Finski
// IDE used: Visual Studio
#include <iostream>
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


//This function receives a dynamic double array and populates it with values that the user enters via the console 
//arguments: a pointer to the first element of the empty dynamic double array of size 5.
//return: no return, it's a void function. 
void enterArrayData(double *arr){
    double temp;
    cout << "Data entry for the array:" << endl;
    for(int i = 0; i < SIZE; ++i){
        cout  << "    > Element #" << i << ": ";
        cin >> temp;
        *(arr + i) = temp;
    }
    cout << "Data entry complete." << endl;
}

//This function receives a dynamic double array and calculates the sum of all of its values and returns the sum.
//arguments:a pointer to the first element of the dynamic double array of size 5.
//return:returns the sum of all of dynamic double array values.
double sumArray(double *arr){
    double sum = 0;
    for(int i = 0; i < SIZE; ++i){
        sum += *(arr + i);
    }
    return sum;
}

//This function receives a dynamic double array and outputs its contents on one line.
//arguments:a pointer to the first element of the dynamic double array of size 5.
//return:no return, it's a void function.
void outputArrayData(double *arr){
    cout << "Outputting array elements: ";
    for(int i = 0; i < SIZE; ++i){
        cout << *(arr + i) << " ";
    }
    cout << "\n";
    cout << "Sum of values: "<< sumArray(arr) << endl;
}