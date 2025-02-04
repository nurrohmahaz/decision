#include <iostream>
using namespace std;
int main() {
   int bilangan;
   
   cout << "Masukkan bilangan : ";
   cin >> bilangan;
   
   if (bilangan %2 == 0){
       cout << "Bilangan tersebut adalah bilangan genap"<<endl;
   }
   else{
       cout << "Bilangan tersebut adalah bilangan ganjil ";
   }
    return 0;
}