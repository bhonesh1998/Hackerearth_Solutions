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
while(n--)
{

   z val=0;
   z x ;
        cin>>x;
        string str=to_string(x);
        for(z i=0;i<str.length()-1;i++){
            if(str[i]=='2'&&str[i+1]=='1'){
                val++;
                break;
            }
        }
        if(val==0&&x%21!=0)cout<<"The streak lives still in our heart!\n";
        else cout<<"The streak is broken!\n";



}
  
  
   

   
 }


     




       
  

