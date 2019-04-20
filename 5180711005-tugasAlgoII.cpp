#include <iostream>
using namespace ::std;

//Variabel Global
int Angka[]={2,3,4,6,7,8,9,1,5,0};
int nilai=10;

//Bubble Sorting
void SortingDesc(){
int i,j,hasil;
for  (i=0;i<nilai;i++){
for  (j=nilai-1;j>i;j--){
if   (Angka[j]>Angka[j-1]){
    hasil        = Angka[j];
    Angka[j]    = Angka[j-1];
    Angka[j-1]  = hasil;
}
}
}
}
//Bubble Sorting
void SortingAscen (){
int i,j,hasil;
for (i=0;i<nilai;i++){
for (j=nilai;j>i;j--){
if  (Angka[j]<Angka[j-1]){
    hasil        = Angka[j];
    Angka[j]    = Angka[j-1];
    Angka[j-1]  = hasil;
}
}
}
}
void show(){
int i;
for (i=0;i<nilai;i++){
cout<<Angka[i]<<" ";
}
}
int main(){
int pilih;
    cout<<"Program Shorting Array\n";
    cout<<"\nDATA ANGKA SEBELUM DI URUTKAN\t:";

show();
    cout<<"\n------------------------------------------------";
    cout<<"\n#====PROGRAM MENCARI DESCENDING DAN ASCENDING====#";
    cout<<"\n1. SHORTING DESCENDING.";
    cout<<"\n2. SHORTING ASCENDING.";
    cout<<"\n------------------------------------------------";
    cout<<"\nINPUT PILIHAN ANDA\t:";
    cin>>pilih;
switch(pilih){
case 1:
SortingDesc();
    cout<<"------------------------------------------------";
    cout<<"\n ------------------------------------------------";
    cout<<"\nDATA SETELAH DI RUBAH KE BENTUK";
    cout<<"\n\nDESCENDING\t:";
    show();
    break;
case 2:
SortingAscen();
    cout<<"------------------------------------------------";
    cout<<"\n------------------------------------------------";
    cout<<"\nDATA SETELAH DI RUBAH KE BENTUK";
    cout<<"\n\nASCENDING\t:";
    show();
    break;
}
return 0;
}
