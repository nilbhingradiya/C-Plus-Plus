//Swap Numbers(Using Temparay Variable)

#include<iostream.h>
int main()
{
  int a=5,b=10,temp;
  cout<<Before swapping.<<endl;
  cout<<a=<<a<<,b==<<b<<endl;
  
  temp = a;
  a=b;
  b=temp;
  
  cout<<After swapping.<<endl;
  cout<<a=<<a,b=<<b<<endl;
  return 0;
}

//Output
/* Before swapping.
    a=5,b=10
    
    After swapping.
    a=10,b=5 */
