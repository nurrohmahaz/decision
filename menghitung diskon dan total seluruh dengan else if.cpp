#include <iostream>
using namespace std;
int main() {
   float totalbelanja,diskon,totalseluruh;
   
   cout << "Masukkan total belanja : ";
   cin >> totalbelanja;
   
   if (totalbelanja >=500000){
       diskon = 0.3 *totalbelanja;
        cout << "diskon anda : "<<diskon <<endl;
   }else if(totalbelanja >=200000){
       diskon = 0.2 *totalbelanja;
        cout << "diskon anda : "<<diskon <<endl;
   }else if(totalbelanja >=100000){
       diskon = 0.1 *totalbelanja;
        cout << "diskon anda : "<<diskon <<endl;
   }else{
     cout << "tidak mendapat diskon";
   }
   totalseluruh = totalbelanja- diskon;
   cout <<"total belanja anda seluruhnya: Rp."<<totalseluruh<<endl;
    return 0;
}