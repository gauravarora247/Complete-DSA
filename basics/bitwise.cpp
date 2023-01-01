// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// //int a = 4;
// // int b = 6;
// // cout<<(a&b)<<endl;
// // cout<<(a|b)<<endl;
// // cout<<(!a)<<endl;
// // cout<<(!b)<<endl;
// // cout<<(a^b)<<endl;

// int i = 5;
// cout<<(i++)<<endl;
// cout<<(++i)<<endl;



// }


// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// int a ;
// int b = 1;
// a = 10;
// if(++a)
// {
//     cout<<b<<endl;
// } 
// else
// {
//     cout<<(++b)<<endl;
// }
// }


//for loop basic question
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// int n ;
// cout<<"Enter the value of n"<<endl;
// cin>>n;
// int sum =  0;
// for(int i=0;i<=n;i++)
// {
//     sum += i;
// }
// cout<<sum<<endl;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// int  a = 0;
// int b = 1;
// int n;
// cout<<"Enter the value of n"<<endl;
// cin>>n;
// int c;
// for(int i=0;i<=n;i++)
// {
// c = a+b;
// cout<<a<<" ";
// a = b;
// b = c;
// }
// }


//prime number 
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// int n ;
// cout<<"Enter the value of n"<<endl;
// cin>>n;
// int flag = 0;
// for(int i=2;i<=n;i++)
// {
//     if(n%i==0)
//     {

//         flag = 1;
//         cout<<"It is not a  prime number "<<endl;
//         break;
//     }
//     else
//     {
//         cout<<"It is  a prime number "<<endl;   
//         break; 
//     }
// }
// }


// anaother way to print prime number
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// int  n;
// cout<<"Enter the value of n "<<endl;
// cin>>n;
// int flag = 1;
// for(int i=2;i<=n;i++)
// {
//     if(n%i==0)
//     {
//         flag =  0 ;
//        break;
//     }
// }

// if( flag == 0)
// {
//     cout<<"It is not a prime number "<<endl;
// }
// else
// {
//     cout<<"It is a prime number "<<endl;
// }
// }

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    for(int i=0;i<=n;i++)
    {
    cout<<"Hi "<<endl;
    cout<<"Hey "<<endl;

    continue;

    cout<<"Hello "<<endl;
    }
}