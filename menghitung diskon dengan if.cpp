#include <iostream>
using namespace std;
int main() {
   float totalbelanja,diskon,seluruhnya;
   
   cout << "Masukkan Total belanja : ";
   cin >> totalbelanja;
   
   if (totalbelanja>= 100000){
       diskon = 0.05 *totalbelanja;
       cout << "Diskon Anda Adalah :"<<diskon<<endl;
   }
   else{
       cout << "Anda tidak mendapat diskon"<<endl;
   }
       seluruhnya = totalbelanja - diskon;
   cout << "Total belanja Anda Seluruhnya adalah "<<seluruhnya <<endl;
    return 0;
}