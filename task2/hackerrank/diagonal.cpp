#include <iostream>
using namespace std;
int s=0,h=0;
int main()
 {
      int b[10][10];
      int n;
      cin>>n;
      for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
              {
                cin>>b[i][j];
              }    
        }
        for(int i=0;i<n;i++)
     {
        for(int j=0;j<n;j++)
         {
             if(i==j)
               s+=b[i][j];
             if((i+j)==(n-1))
               h+=b[i][j];
         }
     } signed int g=s-h;
        cout<<g;
		return 0;
}
