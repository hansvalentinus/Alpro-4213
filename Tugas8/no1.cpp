#include <iostream>
using namespace std;


bool isGanjil(int n){
    if(n % 2 != 0){
        return true;
    }else {
        return false;
    }
}

void isGenapKecil (int arr[], int size){
    int genapKecil = arr[0];
    int idx = -1;

    for (int i = 0; i < size; i++){
        if(!isGanjil(arr[i]) && arr[i] < genapKecil){
            genapKecil = arr[i];
            idx = i;
        }
    }
    if (genapKecil = arr[0]){
        cout << "Genap Terkecil : "<< arr[idx]<< endl;
        cout << "index : "<< idx << endl;
    }else {
        cout << "Tidak Ada Angka Genap" << endl;
    }
}

int main (){
    int arr[]= {6,7,4,3,2};
    int size = sizeof(arr)/sizeof(arr[0]);

    isGenapKecil(arr,size);

}