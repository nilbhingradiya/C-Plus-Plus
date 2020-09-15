#include<iostream.h>
#include<conio.h>
void main()
{
	float amount,year,interest,netamount,rate;
	clrscr();
	cout<<"enter amount=";
	cin>>amount;
	cout<<"enter year=";
	cin>>year;

	if(year<3)
	{
		rate=3.5;
		cout<<"\nrate="<<rate;
	}
	else if(year<6)
	{
		rate=6.5;
		cout<<"\nrate="<<rate;
	}
	else if (year<9)
	{
		rate=9.5;
		cout<<"\nrate="<<rate;
	}
	else if (year<13)
	{
		rate=13.5;
		cout<<"\nrate="<<rate;
	}
	else
	{
		rate=15.5;
		cout<<"\nrate="<<rate;
	}
	interest=(amount*rate*year)/100;
	cout<<"\ninterest="<<interest;
	netamount=amount+interest;
	cout<<"\nneta="<<netamount;
	getch();
}
