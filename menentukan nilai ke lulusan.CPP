#include <iostream.h>
#include <conio.h>



void main()

     {

     clrscr();

     float teori, praktek, rata2;

     cout<<"Masukkan nilai Teori : ";

     cin>>teori;

     cout<<"Masukkan nilai Praktek : ";

     cin>>praktek;

     rata2 = (teori + praktek) / 2;

     if(rata2 >= 60 && praktek >= 55)

     {

          cout<<"Lulus";

     }

     else

     {

          cout<<"Tidak Lulus";

     }

     getch();

}
