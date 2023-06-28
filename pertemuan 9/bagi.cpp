#include <iostream>
using namespace std;

int bagi(int a, int b){
   if (a < b){
    return 0;
   }
   else{
    return 1 + bagi(a-b,b);
   }
}

int main(){
  int x,y;

  cout<<"masukkan angka yg pertama: ";
  cin>>x;
  cout<<"masukkan angka yg kedua: ";
  cin>>y;

  int hasil = bagi(x,y);
  cout << "Hasil pembagian adalah : " << hasil << endl;

  return 0;
}
