#include <iostream>
using namespace std;
int main() {
   int usia;
   
   cout << "Masukkan usia : ";
   cin >> usia;
   
   if (usia >=0 && usia <=5){
       cout << "Anda temasuk golongan Balita";
   }else if(usia >=6 && usia<=12){
       cout << "Anda temasuk golongan Anak-anak";
   }else if( usia >=13 && usia<=17){
      cout << "Anda temasuk golongan Remaja";
   }else if (usia >=18 && usia<=59){
     cout << "Anda temasuk golongan Dewasa";
   }else{
      cout << "Anda temasuk golongan Lansia";
   }
    return 0;
}