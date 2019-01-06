#include <iostream>
using namespace std;
typedef struct pecahan {
  int pb;
  int py;
};
int main (int argc,char*argv[])
{
    pecahan p1,p2;
    cout<<"MERUBAH PECAHAN KE BILANGAN BULAT"<<endl;
    cout<<"Masukan pembilang = ";cin>>p1.pb;
    cout<<"Masukan penyebut  = ";cin>>p2.py;
    cout<<"\           "<<p1.pb<<endl;
    cout<<"\  p1=      -"<<endl;
    cout<<"\           "<<p2.py<<endl;
      if("/")
      {
          cout<<"HASILNYA = "<<(p1.pb)/(p2.py)<<endl;

      }
      return 0;
}
