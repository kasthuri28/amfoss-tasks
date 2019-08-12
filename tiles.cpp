#include <iostream>
using namespace std;

int main()
{
   int l,b,s,n;
   cout<<"enter length and breadth";
   cin>>l;
   cin>>b;
   cout<<"enter the side";
   cin>>s;
   cout<<"enter the num of tiles";
   n=(l*b)/(s*s);
   cout<<n;
   return 0;
}
