#include<iostream>
#include<iomanip>
using namespace std;

int main(){
  int n;
  cout<<"Enter value of n: ";
  cin>>n;
                                      //upper portion of square
  for(int i = 1; i <= n; i++)         //row loop
  {
    int m = n;                        //intialising m with value of n at the begining of every loop

    for(int j = 1; j < 2*n; j++)      //column loop
    {
      cout<<setw(3)<<m;               //print m

      if(j < i)                       //decrement condition
      {
        m--;
      }

      else if( i + j >= 2*n)          //increment condition
      {
        m++;
      }                               //otherwise keep value of m constat
    }
    cout<<endl;                       //row end
  }
                                      //lower half of square
  for(int i = n-1; i > 0; i--)        //row loop
  {
    int m = n;                        //intialising m with value of n at the begining of every loop

    for(int j= 1; j < 2*n; j++)       //column loop
    {
      cout<<setw(3)<<m;               //print m

      if(j < i)                       //decrement condition
      {
        m--;
      }

      else if(i + j >= 2*n)           //increment condition
      {
        m++;
      }                               //otherwise keep value of m constant
    }
    cout<<endl;                       //row end
  }
  return 0;
}
