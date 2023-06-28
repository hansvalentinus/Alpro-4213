#include <iostream>
using namespace std;

int pangkat(int a, int b){
  if (b == 0){
    return 1;
  }
  else{
    return a * pangkat(a,b-1);
  }
}

int main(){
  int x,y;

  cout<<"masukkan bil asli: ";
  cin>>x;
  cout<<"masukkan bil pangkat: ";
  cin>>y;

  int hasil = pangkat(x,y);
  cout << "hasil pangkat adalah :" << hasil<<endl;

  return 0;
}
