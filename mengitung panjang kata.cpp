#include <stdio.h>
#include <conio.h>
#include <iostream.h>

main()
{
	cout<<"=*=*=*=*=* PROGRAM MENGHITUNG PANJANG KATA *=*=*=*=\n";

   char huruf[20];
   char pindah[20];

   cout<<"Masukan Sembarang Kata = ",gets(huruf);
   cout<<"Jumlah Kata Yang Di Inputkan = ";
   cout<<strlen(huruf);
   getch();
}