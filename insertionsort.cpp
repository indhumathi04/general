  #include<iostream>
	#include<conio.h>
	void main()
	{
	 int i,j,n,t,a[30];
	 cout<<"Enter the number of elements:";
	 cin>>n;
	 cout<<"\nEnter the elements\n";
	 for(i=0;i<n;i++)
	    {
	     cin>>a[i];
	    }
	 
	    for(i=1;i<=n-1;i++)
	    {
	        t=a[i];
	        j=i-1;
	 
	        while((temp<a[j])&&(j>=0))
	        {
	         a[j+1]=a[j];    
	         j=j-1;
	        }
	 
	        a[j+1]=t;    
	    }
	 
	    cout<<"\nSorted list is\n";
	    for(i=0;i<n;i++)
	    {
	        cout<<a[i]<<"\t";
	    }
	 
	    getch();
	}

