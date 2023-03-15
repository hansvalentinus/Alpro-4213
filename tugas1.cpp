#include <iostream>
using namespace std;

int Penjumlahan(int x, int y) {
return x + y;
}

int Pengurangan(int x, int y){
return x - y;
}

int Total(int arr[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += arr[i];
    }
    return total;

}

double RataRata(int arr[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += arr[i];
    }
    double rata_rata = (double) total / size;
    return rata_rata;
}
int main() {
    //1,2
    int a,b,i;
    //3,4
    int arr[] = {1, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);


    cout << "\nMasukan Nilai a: "; cin >> a;
    cout << "\nMasukan Nilai b: "; cin >> b;
    cout << "\n---------------------------------------------------------";
    cout << "\nHasil Penjumlahan dari a dan b adalah " << Penjumlahan(a, b) << endl;
    cout << "\nHasil Pengurangan dari a dan b adalah " << Pengurangan(a, b) << endl;
    int tot = Total(arr,size);
    double rata_rata = RataRata(arr, size);
    cout << "\nTotal: " << tot << endl;
    cout << "\nRata-rata: " << rata_rata << endl;

return 0;
}
