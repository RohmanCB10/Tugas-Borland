#include <stdio.h>
#include <conio.h>
#include <iostream.h>

main()
{
int a,b,c,d;
char lagi;
clrscr();
atas:
cout<<"Masukan Nilai A :",cin>>a;
cout<<"Masukan Nilai B :",cin>>b;

c=a/b;
d=a*b;

cout<<"Hasil dari C= A/B adalah"<<c<<ends;
cout<<"Hasil dari C= A*B adalah"<<d<<ends;
cout<<"\nIngin menghitung lagi, input [Y]: ";cin>>lagi;
clrscr();
if(lagi=='Y'||lagi=='y')
goto atas;
getch();
}