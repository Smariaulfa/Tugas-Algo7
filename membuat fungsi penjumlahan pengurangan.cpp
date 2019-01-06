#include <iostream>
#include <conio.h>
using namespace std;

int main()

{
    int pil,penjumlahan,pengurangan,pembagian,perkalian;
    cout<<"PILIHAN\n";
    cout<<"1.PENJUMLAHAN\n";
    cout<<"2.PENGURANGAN\n";
    cout<<"3.PEMBAGIAN\n";
    cout<<"4.PERKALIAN\n";
    cout<<"5.MENU AWAL\n";

    cout<<"\n";
    cout<<"Masukan pilihan = ";cin>>pil;
    switch (pil)
    {
        int a,b;
        case 1:
         cout<<"PENJUMLAHAN"<<endl;
         cout<<"Masukan angka 1 =";cin>>a;
         cout<<"Masukan angka 2 =";cin>>b;
         cout<<"Hasil = "<<a+b<<endl;
        break;
        case 2:
         cout<<"PENGURANGAN"<<endl;
         cout<<"Masukan angka 1 = ";cin>>a;
         cout<<"Masukan angka 2 = ";cin>>b;
         cout<<"Hasil = "<<a-b<<endl;
        break;
        case 3:
         cout<<"PEMBAGIAN"<<endl;
         cout<<"Masukan angka 1 = ";cin>>a;
         cout<<"Masukan angka 2 = ";cin>>b;
         cout<<"Hasil = "<<a/b<<endl;
        break;
        case 4:
         cout<<"PERKALIAN"<<endl;
         cout<<"Masukan angka 1 = ";cin>>a;
         cout<<"Masukan angka 2 = ";cin>>b;
         cout<<"Hasil = "<<a*b<<endl;
        break;
        default:
         cout<<"KEMBALI KE MENU AWAL"<<endl;
         getch();


    }

    return 0;
}
