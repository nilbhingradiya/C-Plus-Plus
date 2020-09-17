//Computer quotient and remainder.

#include<iostream.h>
int main()
{
  int divisor,dividend,quotient,remainder;
  cout<<Enter dividend:;
  cin>>dividend;
  cout<<Enter divisor:;
  cin>>divisor;
  quotient=dividend/divisor;
  remainder=dividend%divisor;
  cout<<Quotient=<<quotient<<endl;
  cout<<Remainder=<<remainder;
  return 0;
}

/*OUT PUT
  Enter dividend:13
  Enter divisor:4
  Quotient=3
  Remainder=1*/
