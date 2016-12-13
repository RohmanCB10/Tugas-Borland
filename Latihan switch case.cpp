#include<conio.h>
#include<stdio.h>
#include<iostream.h>
main()
{
char kode,lagi;
atas:
clrscr();
cout<<"INPUT KODE BARANG [A..C]: ";cin>>kode;
switch(kode)
{
	case'A':
   case'a':
   {
   cout<<"alat olah raga";
   }
   break;

   case'B':
   case'b':
   {
   cout<<"alat elektronik";
   }
   break;

   case'C':
   case'c':
   {
   cout<<"alat masak";
   }
   break;

   default:
   {
   cout<<"salah kode";
   }
}
cout<<"\nIngin input lagi pilih [Y]";cin>>lagi;
if(lagi=='Y'||lagi=='y')
{
goto atas;
}
getch();
}
