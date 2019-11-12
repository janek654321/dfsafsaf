#include <iostream>
using namespace std;
int main()
{
  int n,i;
  cout<<"podaj liczbe:"<<endl;
  cin>>n;
  for (i=2; i<n; i++)
    if(n%i==0)
      i=n+1;
  if(i==n)
    cout<<"Jest to liczba pierwsza";
  else
    cout<<"Jest to liczba zlozona";
}
