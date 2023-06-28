#include <iostream>
using namespace std;

int tambah(int a, int b){
  if (b == 0){
    return a;
  }
  else{
    return 1 + tambah(a, b-1);
  }
}

int main(){
  int x,y;

  cout<<"masukkan angka yg pertama: ";
  cin>>x;
  cout<<"masukkan angka yg kedua: ";
  cin>>y;

  int hasil = tambah(x,y);
  cout << "hasil pertambahan adalah :" << hasil<<endl;

  return 0;
}
