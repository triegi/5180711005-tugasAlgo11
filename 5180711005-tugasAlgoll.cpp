#include <iostream>
using namespace ::std;
int moduls(int nilai,int modul){
return nilai%modul;
}

int main (){
int pertama,kedua;
    cout<<"====PROGRAM MENCARI MODULUS====";
    cout<<"\nMASUKAN ANGKA\t:";cin>>pertama;
    cout<<"MASUKAN ANGKA\t:";cin>>kedua;
    cout<<"-----------------------------";
    cout<<"\n-----------------------------";
    cout<<"\nANGKA\t\t:";
    cout<<pertama;
    cout<<"\nMODULUS\t\t:";
    cout<<kedua;
    cout<<"\n-----------------------------";
    cout<<"\nHASIL AKHIR\t:";
    cout<<moduls(pertama,kedua);
}
