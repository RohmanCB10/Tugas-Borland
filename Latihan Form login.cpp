#include <iostream.h>
#include <conio.h>
#include <stdio.h>
main()
{
int username,password;

cout<<"\nSilahkan Log in";

int  user=12162304;
int  pass=19960696;

	cout<<"\nUser name : ";cin>>username;
   cout<<"\nPassword  : ";cin>>password;

   if(username==user&&password==pass)
   {
   cout<<"\nSUKSES Log In";
   }
   else
   {
   cout<<"\nGAGAL";
   }


getch();
}



