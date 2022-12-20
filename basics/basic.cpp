//check whether the no is od or even
// #include<bits/stdc++.h>
// using namespace std;
// int main ()
// {
//     int n ;
//     cout<<"Enter the value of n"<<endl;
//     cin>>n;
//     if(n%2==0)
//     {
//         cout<<"the remainder is even it means it is an even no. "<<endl;
//     }
//     else
//     {
//         cout<<"The no. is an odd no. "<<endl;
//     }
// }

//check whether the number is positive , negative or 0 
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// int n;
// cout<<"Enter the value of n"<<endl;
// cin>>n;
// if(n>0)
// {
//     cout<<"It is a positive no. "<<endl;

// }
// else if(n<0)
// {
//     cout<<"It is a negative no. "<<endl;
// }
// else
// {
//     cout<<"the entered number is zero "<<endl;
// }

// }

//print no.s from 1 to n 
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// int n ;
// cout<<"ENTER the value of n"<<endl;
// cin>>n;
// for(int i=0;i<=n;i++)
// {
//     cout<<i<<" ";
// }
// }

//print the even number from 1 to n
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// int n = 5;
// for(int i=1;i<=n;i++)
// {
//     if(i%2==0)
//     {
//         cout<<i<<" ";
//     }
// }

// }

//print odd numbers from 1 to n 
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// int n;
// cout<<"Enter the value of n"<<endl;
// cin>>n;
// for(int i=0;i<=n;i++)
// {
//     if(i%2!=0)
//     {
//         cout<<i<<" ";
//     }
// }
// }

//find sum from 1 to N
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// int n = 15;
// int sum = 0;
// for(int i=0;i<=n;i++)
// {
// sum = sum + i;
// }

// cout<<sum;
// }



// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// int fact = 1;
// int n =5;

// for(int i=1;i<=n;i++)
// {

// fact *=i;

// }
// cout<<"Factorial of a number is "<<fact;


// }


//prime number 
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// int n;
// cout<<"Enter the value of n"<<endl;
// cin>>n;
// int m = n/2;
// int flag = 0;
// for(int i=2;i<m;i++)
// {
//     if(n%i==0)
//     {
//         cout<<"It is not a prime no. "<<endl;
//         flag = 1;
//         break;
//     }
// }

// if(flag==0)
// {
//     cout<<"It is a prime number "<<endl;
// }
// }



#include<bits/stdc++.h>
using namespace std;
int main()
{
bool bl = 'b';
cout<<sizeof(bl)<<endl;
}

