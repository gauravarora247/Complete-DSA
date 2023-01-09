// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     // int num = 2;
//  char ch = '1';
//   int num = 1;
//     switch(ch)
//     {
//         case 1:
//         cout<<"first"<<endl;
//         break;
//         case '1':
//         // cout<<"Second "<<endl;
//            switch(num)
//            {
//             case 1:
//             cout<<"Value of num is "<<" "<<num<<endl;
//            }
//         break;
//         default:
//         cout<<"It is default case "<<endl;
         
//     }
// }

// //default case is not necessary 
// // break is necessary to break the cases 


//Calculator using switch case 

#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
int m;
cout<<"Enter the value of n"<<endl;
cin>>n;
cout<<"Enter the value of m"<<endl;
cin>>m;

char op;
cout<<"Enter the operation "<<endl;
cin>>op;

switch(op)
{
    case '+':
    {
      cout<<(n+m);
      break;
    }
    case '-':
    {
     if(n>m)
     {
        cout<<(n-m);
     }
     else
     {
        cout<<(m-n);
     }
     break;
    }

    case '*':
    {
      cout<<n*m<<endl;
      break;
    }

    case '/':
    {
    if(n>m)
    {
        cout<<(n/m);
    }
    else
    {
        cout<<(m/n);
    }
    }
    
    case '%':
    {
     cout<<(n%m);
    }
    

    
}







}