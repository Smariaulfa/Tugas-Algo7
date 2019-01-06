#include <stdio.h>
#include <conio.h>

int tukar (int nilai);
int main (void)
{
    int nilai;
    printf ("Masukan nilai antara 1 sampai 5 =");
    scanf ("%d",&nilai);
    tukar (nilai);
    getch ();
}
 int tukar (int nilai)
 {
     switch (nilai)
     {
     case 5:
        printf ("Nilai huruf = A");
        break;
        printf ("Nilai huruf = B");
        break;
        printf ("Nilai huruf = C");
        break;
        printf ("Nilai huruf = D");
        break;
        printf ("Nilai hurruf = E");
        break;

     default :
     printf ("Kesalahan dalam memasukan angka");

     }
     return (nilai);
 }
