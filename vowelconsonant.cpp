//check Vowel or a consonant Manually.

#include<iostream.h>
int main()
{
  char c;
  char isLowercaseVowel,isUppercaseVowel;
  cout<<Enter an alphabet:;
  cin>>c;
  //evaluates to 1(true) if c is a loercase vowel
  
  isLowercaseVowel=(c==';a';||c==':e';||c==';i';||c==';o';||c==';u';);
  //evaluates to 1(true) if c is a uppercase vowel
  isLowercaseVowel=(c==';A';||c==':E';||c==';I';||c==';O';||c==';U';);
  /*evaluates to 1(true) if either  isloercase vowel or isUppercaseVowel is true*/
  
  if(isLowercaseVowel||isUppercaseVowel)
    cout<<c<<is a
      vowel;
   else
    cout<<c<<is a consonant.;
    return 0;
}

/*OUTPUT

  Enter an alphabet:u
  u is a vowel. */
