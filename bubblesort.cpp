  #include<iostream.h>
	#include<conio.h>
	void main()
	{
	clrscr();
	int n, i, a[20], j, t;
	cout<<"Enter number of elements :";
	cin>>n;
	cout<<"Enter "<<n<<" numbers :";
	for(i=0; i<n; i++)
	{
	 cin>>a[i];
	}
	cout<<"Sorting array using bubble sort method...\n";
	for(i=0; i<(n-1); i++)
	{
	 for(j=0; j<(n-i-1); j++)
	{
	 if(a[j]>a[j+1])
	{
	t=a[j];
	a[j]=a[j+1];
	a[j+1]=t;
	}
	}
	}
	cout<<"Sorted list in ascending order :\n";
	for(i=0; i<n; i++)
	{
	cout<<a[i]<<"\t";
	}
	getch();
	}
