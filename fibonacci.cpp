#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int x1=-1,x2=1,n,i,c;
unsigned int x3=0;
cout<<"enter your choice\n";
cout<<"1.last term 2.number of terms ";
cin>>c;
switch(c)
{
	case 1:
	{
	 cout<<"\n enter last term";
	 cin>>n;
	 cout<<"\n fibonacci series\n";
	 while(x3<=n)
	 {
	 x3=x1+x2;
	 x1=x2;
	 x2=x3;
	 cout<<x3<<"\n";
	 }
	 }break;
	case 2:
	{
	 cout<<"\n enter number of terms";
	 cin>>n;
	 cout<<"\nfibonacci series\n";
	 for(i=0;i<n;i++)
	 {
	 x3=x1+x2;
	 x1=x2;
	 x2=x3;
	 cout<<x3<<"\n";
	 }
	 }break;
}
getch();
}

