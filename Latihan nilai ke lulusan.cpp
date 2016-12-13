#include <stdio.h>
#include <conio.h>
#include <iostream.h>
main()
{
int nilai,tugas;
char *grade,*ket;
printf("\nMasukan Sebuah Nilai: ");scanf("%d",&nilai);
printf("\nMasukan Nilai Tugas: "); scanf("%d",&tugas);

if(nilai>90)
	{
   ket="lulus";
   grade="A";
   }
else if(nilai>80)
	{
   ket="lulus";
   grade="B";
   }
else if(nilai>70)
	{
   ket="lulus";
   grade="C";
   }
else if(nilai>=65)
	{
   ket="gagal";
   grade="D";
   }
else if(nilai<65)
	{
   ket="gagal";
   grade="E";
   }
else
printf("Tidak Lulus \n");

cout<<"\nketerangan : "<<ket<<endl;
cout<<"\ngrade      : "<<grade<<endl;


getch();
}
