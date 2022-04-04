#include <iostream>
using namespace std;

int main() {
   int t=1, ts=0, td=1, n;
   cin>>n;
   
   do{
      cout<<t<<endl;
      
      t=ts+td;
      ts=td;
      td=t;
      
   }while(t<n);
   
   return 0;
}
