#include<conio.h>
#include<iostream.h>
#include<stdio.h>
#include<string.h>

main()
{
	char kode[5],pesawat[10],lagi;
   int kelas,harga,jumlah,total;
   atas:
   cout<<"\t\tTiket Pesawat"<<endl;
   cout<<"==================================================="<<endl;
   printf("Masukan kode pesawat [MPT/GRD/BTV] : ");gets(kode);
   cout<<"kelas Pesawat :\n";
   cout<<"     1.Executive\n";
   cout<<"     2.Bisnis\n";
   cout<<"     3.Ekonomi\n";
   cout<<"Pilih kelas [1/2/3]: ";cin>>kelas;
   cout<<"==================================================="<<endl;

   if(strcmp(kode,"MPT")==0)
   {
   	strcpy(pesawat,"MERPATI");
   if(kelas==1)
   harga=1500000;

   else if(kelas==2)
   harga=900000;

   else if(kelas==3)
   harga=500000;


   }

   else if(strcmp(kode,"GRD")==0)
   {
           strcpy(pesawat,"GARUDA");
   if(kelas==1)
   harga=1200000;

   else if(kelas==2)
   harga=800000;

   else if(kelas==3)
   harga=400000;
   }
   else if(strcmp(kode,"BTV")==0)
   {
           strcpy(pesawat,"BATAVIA");
   if(kelas==1)
   harga=1000000;

   else if(kelas==2)
   harga=700000;

   else if(kelas==3)
   harga=300000;
   }
   else
   {
   cout<<"EROR";
   goto bawah;
   }


cout<<"\nNama Pesawat : "<<pesawat;
cout<<"\nHarga Tiket  : "<<harga;
cout<<"\nJumlah Tiket : ";cin>>jumlah;
cout<<"======================================================"<<endl;

total=harga*jumlah;

cout<<"Total Biaya    :Rp"<<total;
cout<<endl;
bawah:
cout<<"\ningin input lagi [y] : ";cin>>lagi;
clrscr();

if(lagi=='Y'||lagi=='y')
goto atas;


getch();
}