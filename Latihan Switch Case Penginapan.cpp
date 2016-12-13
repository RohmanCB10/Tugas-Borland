#include <string.h>
#include <conio.h>
#include <iostream.h>
main(){

char penyewa[10],tipe[11],kode,bonus[6],lagi;
int  harga,biaya,lama,total,adm,bayar,kembali;

   atas:
	cout<<"\nNama Penyewa        : ";cin>>penyewa;
   cout<<"\nKode Kamar [A/B/M]  : ";cin>>kode;
   switch(kode){

   case 'A':
   case 'a':
   strcpy(tipe,"Anggrek");
   harga=300000;
   break;

   case 'B':
   case 'b':
   strcpy(tipe,"Bougenville");
   harga=250000;
   break;

   case 'M':
   case 'm':
   strcpy(tipe,"Melati");
   harga=200000;
   break;

   default:
   cout<<"Kode salah";
   goto bawah;
   break;
   }

   cout<<"\nLama Menginap   : ";cin>>lama;
   cout<<"\n=============================";
   if(lama>=7)
   {
   strcpy(bonus,"Payung");
   }
   else
   {
   strcpy(bonus,"kosong");
   }


   adm=200000;
   biaya=harga*lama;
   total=biaya+adm;

   cout<<"\nTipe kamar        :  "<<tipe;
   cout<<"\nLama Menginap     :  "<<lama;
   cout<<"\nsouvenir          :  "<<bonus;
   cout<<"\nBiaya Sewa        :  "<<biaya;
   cout<<"\nAdministrasi      :  "<<adm;
   cout<<"\nTotal Yg Di Bayar :  "<<total;
   cout<<"\n=============================";
   cout<<"\nUang Bayar          :  ";cin>>bayar;

   kembali=bayar-total;

   cout<<"\nUang kembali        :  "<<kembali;
   bawah:
   cout<<"\nINGIN INPUT LAGI PILIH [Y]";cin>>lagi;
   clrscr();
   if(lagi=='y'||lagi=='Y')
   goto atas;

getch();
}
