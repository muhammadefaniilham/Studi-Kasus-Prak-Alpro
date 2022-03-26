#include <cstdlib>
#include <iostream>
using namespace std;
class Bensin{
      public :
             Bensin();
             void pilihan();
             void hitung_uang();
             void hitung_liter();
      private :
              double uang, liter, tampil;
              char pil;
              char ambil;
              double harga, pertamax, pertalite;
      };
Bensin::Bensin(){
     harga = 0;
     pertalite	= 7000;
     pertamax	= 9000;
     }
void Bensin::pilihan(){
     cout<<"selamat Datang di SPBU Ramayana"<<endl;
     cout<<"beli berdasarkan : "<<endl;
     cout<<"1 pertalite "<<endl;
     cout<<"2 pertamax "<<endl;
     cout<<"masukkan pilihan anda = ";
     cin>>ambil;
     if(ambil == '1' || ambil == '2'){
              cout<<"beli berdasarkan :"<<endl;
     cout<<"a uang"<<endl;
     cout<<"b liter"<<endl;
     cin>> pil;
     if(pil == 'a'){
          hitung_uang();
          }
     else if(pil=='b'){
          hitung_liter();
          }
     else{
          system("cls");
          pilihan();
          }
              }
     system("cls");
     pilihan();    
     }
void Bensin::hitung_uang(){
     cout<<"masukkan besarnya uang : ";
     cin>> uang;
     if(ambil == '1'){
              harga = pertalite;
              }
     else if (ambil == '2'){
          harga = pertamax;
          }
     tampil = uang / harga;
     cout<<"jumlah Bensin yang dibeli : "<<tampil <<" liter"<<endl;
     system("PAUSE");
     system("cls");
     pilihan();
     }
void Bensin::hitung_liter(){
     cout<<"masukkan jumlah liter : ";
     cin>> liter;
      if(ambil == '1'){
              harga = pertalite;
              }
     else if (ambil == '2'){
          harga = pertamax;
          }
     tampil = harga * liter;
     cout<<"uang yang harus dibayar : Rp "<<tampil <<".00"<<endl;
     system("PAUSE");
     system("cls");
     pilihan();
     }
int main(int argc, char *argv[])
{
    Bensin x;
    x.pilihan();
    system("PAUSE");
    return 0;
}
