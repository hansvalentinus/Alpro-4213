#include <iostream>
using namespace std;

int kurang(int a, int b){
  if (b == 0){
    return a;
  }
  else{
    return kurang(a-1, b-1);
  }
}

int main(){
  int x,y;

  cout<<"masukkan angka yg pertama: ";
  cin>>x;
  cout<<"masukkan angka yg kedua: ";
  cin>>y;

  int hasil = kurang(x,y);
  cout << "hasil pengurangan adalah :" << hasil<<endl;

  return 0;
}
