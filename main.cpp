#include <iostream>
using namespace std;

int main() {
   int t=1, ts=0, td=1;
   cin>>n;
   
   do{
      if(t<n)
         cout<<t;
      
      t=ts+td;
      ts=td;
      td=t;
      
   }while(t<n);
   
   return 0;
}
