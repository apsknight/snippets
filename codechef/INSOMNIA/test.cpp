#include<iostream>
using namespace std;
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
  long long int m,mod=1000000007,res1,res2,res,m1,m2,m3,m4;
  cin>>m;
      if(m%4==0)
      {
          m1=(m/4)%mod;
          m2=(m-1)%mod;
          m3=((m-2)/2)%mod;
          m4=(m-3)%mod;
      }
     else if(m%4==1)
     {
       
          m1=(m)%mod;
          m2=((m-1)/4)%mod;
          m3=((m-2))%mod;
          m4=((m-3)/2)%mod;  
     }
     else if(m%4==2)
     {
        
          m1=(m/2)%mod;
          m2=(m-1)%mod;
          m3=((m-2)/4)%mod;
          m4=(m-3)%mod; 
     }
     else
     {
        
          m1=(m)%mod;
          m2=((m-1)/2)%mod;
          m3=((m-2))%mod;
          m4=((m-3)/4)%mod; 
     }
  res1=(m1*m2)%mod;
   res2=(m3*m4)%mod;
  res=((res1%mod)*(res2%mod))%mod;
  cout<<res<<endl;
  }
  return 0;
  }