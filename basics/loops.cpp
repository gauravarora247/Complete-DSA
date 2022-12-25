// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// //int n;
// // cout<<"Enter the value of n"<<endl;
// // cin>>n;
// // if(n>0)
// // {
// //     cout<<"n is positive no. "<<endl;

// // }
// // else
// // {
// //     cout<<"n is a negative no. "<<endl;
// // }

// int a ;
// int b;
// cout<<"ENTER A "<<endl;
// cin>>a;
// cout<<"Enter b "<<endl;
// cin>>b;
// if(a>b)
// {
//     cout<<"A is greater"<<endl;
// }
// else
// {
// cout<<"B is greater"<<endl;
// }


// }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// int a;
// cout<<"Enter the value of a"<<endl;
// cin>>a;
// if(a>0)
// {
//     cout<<"It is a positive no. "<<endl;
// }
// else if(a<0)
// {
//     cout<<"It is a negative no."<<endl;
// }
// else
// {
//     cout<<"A is equal to 0"<<endl;
// }
// }

// #include<bits/stdc++.h>
// using  namespace std;
// int main()
// {
// int age;
// cout<<"Enter the age "<<endl;
// cin>>age;
// if((age > 18) && (age<50))
// {
//     cout<<"You are young"<<endl;
// }
// else if(age >50)
// {
//     cout<<"You are old "<<endl;

// }
// else
// {
//     cout<<"you are a kid "<<endl;
// }
// }


//check the number is between a and z or A and Z or 0 to 9 
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// char ch;
// cout<<"Enter the character "<<endl;
// cin>>ch;
// if(ch >='a' && ch <='z')
// {
//     cout<<"It is lowercase"<<endl;
// }
// else if(ch>='A' &&  ch<='Z')
// {
//     cout<<"It is an uppercase letter "<<endl;
// }
// else
// {
//     cout<<"It is a number "<<endl;
// }

// }


//print number 1 to n 
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// int n ;
// cout<<"Enter the value of n"<<endl;
// cin>>n;
// int i = 0;
// while(i<=n)
// {

//     cout<<i<<endl;
//    i = i+1;
// }
// cout<<"I is greater than number "<<endl;

// }




//print sum from number 1 to n
#include<bits/stdc++.h>
using namespace std;
int main()
{
int n ;
int i = 1;
cout<<"Enter the value of n"<<endl;
cin>>n;
int sum = 0;
while(i<=n)
{
    // cout<<sum<<endl;
    
    sum = sum+i;
    i = i+1;
  
}
cout<<"sum is "<<sum<<endl;
}