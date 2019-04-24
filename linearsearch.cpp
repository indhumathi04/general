  #include<iostream.h>
	#include<conio.h>
	void main()
	{
	 clrscr();
	 int a[20],s,i,n,f=0;
	 cout<<"\n enter the number of terms ";
	 cin>>n;
	 cout<<"\n enter "<<n<<" values";
	 for(i=0;i<n;i++)
	 {
	 cin>>a[i];
	 }
	 cout<<"\n enter the search element ";
	 cin>>s;
	 for(i=0;i<n;i++)
	 {
	 if(a[i]==s)
	 {
	 cout<<"\n the num "<<s<<" is present at location a["<<i<<"]";
	 f++;
	 }
	 }
	 if(f==0)
	  cout<<"\n element not found";
	 getch();
	 }
