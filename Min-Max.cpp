#include<bits/stdc++.h>
#define pf printf
#define sf scanf
#define db double 
#define z long long int 
using namespace std ;
#define siz 100001
#define mod 1000000007



int main()
{ 
  z n,k,i;
  cin>>n;
  z a[n],s=0;
  for(i=0;i<n;i++) {cin>>a[i];s+=a[i];} z mi=a[0],ma=a[0];
    for(i=0;i<n;i++) if(ma<a[i]) ma = a[i];
       for(i=0;i<n;i++) if(mi>a[i]) mi = a[i];
        cout <<s-ma<<" "<<s-mi;
  
  
   

   
 }


     




       
  

