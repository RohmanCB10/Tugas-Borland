#include<stdio.h>
#include<conio.h>
#include<iostream.h>
main()
{
	char kode,nmbuku,bns,lagi;
   int harga,jumlah,potongan;
   atas:
   cout<<"\nMasukan Kode [1|2|3]     : ";cin>>kode;
   cout<<"\nJumlah Yang Akan Di beli : ";cin>>jumlah;
   cout<<"\n----------------------------------------";
   cout<<"\nNama buku Yang Anda Beli :"<<nmbuku;
   switch(kode)
   {
   	case'1':
      {
      cout<<"Sukses Belajar Borland C++"<<nmbuku;
      harga=50000;
      }
      break;

      case'2':
      {
      cout<<"Kunci Pribadi Yang Sukses"<<nmbuku;
      harga=35000;
      }
      break;

      case'3':
      {
      cout<<"Mencari Mutiara Di Dasar Hati"<<nmbuku;
      harga=45000;
      }
      break;
   }
   cout<<"\nHarga Buku               : "<<harga;
   if(jumlah>5)
   {
   potongan=harga*0.1;
   }
   else
   {
   potongan=0;
   }

   cout<<"\nPotongan                 : "<<potongan;
   cout<<"\nBonus Yang Di dapat      :"<<bns;
   if(jumlah>5)
   {
   cout<<"NOTEBOOK"<<bns;
   }
   else
   {
   cout<<"belum dapat"<<bns;
   }
   float total;
   total=jumlah*harga;
   cout<<"\nTotal Harga              : "<<total;

   float ppn;
   ppn=total*0.1;

   cout<<"\nPPN                      : "<<ppn;
   cout<<"\n------------------------------------------";
   float gtotal;
   gtotal=ppn+total;
   cout<<"\nGrand Total              : "<<gtotal;

   cout<<"\n*** T E R I M A  K A S I H ***";
   cout<<endl;
   cout<<"\nIngin Input Lagi? Input Y :";cin>>lagi;
   clrscr();
   if(lagi=='Y'||lagi=='y')
   {
   goto atas;
   }




getch();
}
