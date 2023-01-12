// #include<bits/stdc++.h>
// using namespace std;


// int getpower(int num , int value )
// {
//     int ans = 1;
//     for(int i=1;i<=num;i++)
//     {
//       ans = ans*value;
//     }
//     return ans;
// }


// int main()
// {
// int num;
// int value;
// cout<<"Enter the value of n"<<endl;
// cin>>num;
// cout<<"Enter the value"<<endl;
// cin>>value;
// int res = getpower(num,value);
// cout<<res<<endl;
// int ans =  getpower(num,value);
// cout<<ans<<endl;

// }


//function to check number is odd or even 
// #include<bits/stdc++.h>
// using namespace std;


// bool checktype(int num)
// {
//     if(num%2==0)
//     {
//         return true;
        

//     }
//     else
//     {
//         return false;
//     }
// }
// int main()
// {
// int num;
// cout<<"Enter the value of n"<<endl;
// cin>>num;
// bool res =  checktype(num);
// cout<<res<<endl;
// }


// #include<bits/stdc++.h>
// using namespace std;



// int factorial(int n)
// {
// int fact = 1;
// for(int i=1;i<=n;i++)
// {
//     fact = fact*i;
// }
// return fact;
// }

// int getcomb(int n,int r)
// {
//     int num = factorial(n);
//     int den = factorial(r) * factorial(n-r);
//     int res = num/den;
//     return res;
// }


// int main()
// {
// int n;
// int r;
// cout<<"Enter the value of n "<<endl;
// cin>>n;
// cout<<"Enter the value of r "<<endl;
// cin>>r;
// factorial(n);
// int res =  getcomb(n,r);
// //cout<<"factorial of n is "<<res<<endl;
// //int ans = factorial(r);
// //cout<<"Factorial of r is "<<ans<<endl;
// //int final = getcomb(res,ans);
// //cout<<final<<endl;
// cout<<res<<endl;
// }


//print counting till given number 
// #include<bits/stdc++.h>
// using namespace std;

// void printcount(int c)
// {
//     for(int i=1;i<=c;i++)
//     {
//         cout<<i<<endl;
//     }
// }
// int main()
// {
// int count;
// cout<<"Enter the count "<<endl;
// cin>>count;
// printcount(count);
// }

#include<bits/stdc++.h>
using namespace std;

bool isprime(int n)
{
 for(int i=2;i<n;i++)
 { 
  if(n%i==0)
  {
    return false;
  }
 }
 return true;
}



int main()
{
int num;
int n;
// cout<<"Enter the value of num "<<endl;
// cin>>num;
cout<<"Enter the value of n"<<endl;
cin>>n;
bool res = isprime(n);
cout<<res<<endl;
}