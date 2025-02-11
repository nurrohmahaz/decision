#include <iostream>
using namespace std;

int main(){
int pilih;
float a,b,hasil;
cout<<"=== Menu Matematika ==="<<endl;
cout<<" 1.Penjumlahan"<<endl;
cout<<" 2.Pengurangan"<<endl;
cout<<" 3.Pembagian"<<endl;
cout<<" 4.Perkalian"<<endl;

cout<<"\nMasukkan angka ke 1: ";
cin>>a;
cout<<"Masukkan angka ke 2: ";
cin>>b;
cout<<"Tentukan pilihan: ";
cin>>pilih;
if (pilih==1){
    hasil= a+b;
    cout<<"Hasil Operasi "<< a<< "+" << b<<" adalah= "<<hasil<<endl;
}else if (pilih==2){
    hasil= a-b;
    cout<<"Hasil Operasi "<< a<< "-" << b<<" adalah= "<<hasil<<endl;
}else if (pilih==3){
    hasil= a/b;
    cout<<"Hasil Operasi "<< a<< "/" << b<<" adalah= "<<hasil<<endl;
}else if(pilih==4){
    hasil= a*b;
    cout<<"Hasil Operasi "<< a<< "x" << b<<" adalah= "<<hasil<<endl;
}else{
    cout <<"pilihan tidak tersedia"<<endl;
}
return 0;
}