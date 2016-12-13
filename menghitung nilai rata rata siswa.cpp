#include<stdio.h>
#include<conio.h>
#include<iostream.h>

main()
{
float tg,ab,uts,uas,na;

cout<<"NILAI Tugas: ",cin>>tg;
cout<<"NILAI Absen: ",cin>>ab;
cout<<"NILAI Uts   : ",cin>>uts;
cout<<"NILAI Uas   : ",cin>>uas;

na=(0.1*tg)+(0.2*ab)+(0.3*+uts)+(0.4*uas);

cout<<"Nilai akhir adalah : "<<na<<endl;
getch();
}