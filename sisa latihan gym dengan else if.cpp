#include <iostream>
using namespace std;

int main() {
   string keanggotaan;
   int latihan,Kesempatan;
   
   cout << "Masukkan jenis keanggotaan: ";
   cin >> keanggotaan;
   cout << "Masukkan jumlah latihan: ";
   cin >>latihan;
   
   if (keanggotaan =="gold"){
     Kesempatan = 20-latihan;
     if (Kesempatan == 0){
     cout <<"maaf anda sudah tidak bisa latihan lagi bulan ini"<<endl;
     }else{
         if (Kesempatan < 0){
      cout <<"Anda sudah melebihi batas,silahkan upgrade jenis keanggotaan";
         }else{
             cout<<"Anda masih bisa latihan "<<Kesempatan <<" kali lagi"<<endl;
         }
     }
   }
     else {
         if(keanggotaan =="silver"){
       Kesempatan = 10-latihan;
        if (Kesempatan == 0){
     cout <<"maaf anda sudah tidak bisa latihan lagi bulan ini"; 
     }else{
         if (Kesempatan < 0){
      cout <<"Anda sudah melebihi batas,silahkan upgrade jenis keanggotaan";
         }else{
             cout<<"Anda masih bisa latihan "<<Kesempatan <<" kali lagi"<<endl;
         }
     }
     }else{
         if(keanggotaan =="platinum");{
     cout <<"Anda boleh latihan sepuasnya"<<endl;  
    } 
  }
}
    return 0;
}