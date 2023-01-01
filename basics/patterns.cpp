// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the value of n "<<endl;
//     cin>>n;
// for(int i = 0 ;i<=n;i++)
// {
//     for(int j=0;j<=n;j++)
//     {
//         cout<<"*\t";
//     }
//     cout<<endl;
// }
// }

//pattern 1 
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// int n;
// cout<<"Enter the value of n "<<endl;
// cin>>n;
// for(int i=1;i<=n;i++)
// {
//     for(int j=1;j<=n;j++)
//     {
//         cout<<i<<"\t";
//     }
//     cout<<endl;
// }
// }

//pattern 2 
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// int n;
// int m;

// cout<<"Enter the value of n"<<endl;
// cin>>n;
// cout<<"Enter the value of m"<<endl;
// cin>>m;
// for(int i=1;i<=n;i++)
// {
//     for(int j=1;j<=m;j++)
//     {
//         cout<<j<<"\t";

//     }
//     cout<<endl;
// }
// }

//pattern 3 
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// int n;
// int m;
// cout<<"Enter the value of n "<<endl;
// cin>>n;
// cout<<"Enter the value of m"<<endl;
// cin>>m;

// for(int i=1;i<=n;i++)
// {
//     for(int j=1;j<=n;j++)
//     {
//         int res = n-j+1;
//         cout<<res<<"\t";
//     }
//     cout<<endl;
// }
// }

//pattern 4
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// int n;
// int m;
// cout<<"Enter the value of n"<<endl;
// cin>>n;
// cout<<"Enter the value of m"<<endl;
// cin>>m;
// int count = 1;
// for(int i=1;i<=n;i++)
// {

// for(int j=1;j<=n;j++)
// {
// cout<<count<<"\t";
// count += 1;
// } 
// cout<<endl;
// }

// }

//pattern 5
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// int n;
// int m ;
// cout<<"Enter n"<<endl;
// cin>>n;

// for(int i=1;i<=n;i++)
// {
//     for(int j=1;j<=i;j++)
//     {
//         cout<<"*\t";
//     }
//     cout<<endl;
// }

// }

//pattern 6
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// int n;
// cout<<"Enter the value of n"<<endl;
// cin>>n;
// for(int i=1;i<=n;i++)
// {
// for(int j=1;j<=i;j++)
// {
// cout<<i<<"\t";
// }
// cout<<endl;
// }
// }

//pattern 7
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// int n;
// cout<<"Enter the value of n"<<endl;
// cin>>n;
// int count = 1;
// for(int i=1;i<=n;i++)
// {
// for(int j=1;j<=i;j++)
// {
//     cout<<count<<"\t";
//     count++;
// }
// cout<<endl;
// }
// }

//pattern 8
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// int n;
// cout<<"Enter the value of n"<<endl;
// cin>>n;
// for(int i=1;i<=n;i++)
// {
//     int value = i;
//     for(int j=1;j<=i;j++)
//     {
//         cout<<value<<"\t";
//         value++;
//     }
//     cout<<endl;
// }
// }


// pattern 9
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// int n;
// cout<<"Enter the value of n "<<endl;
// cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         int value = i ;
//         for(int j=1;j<=i;j++)
//         {
//             cout<<value<<"\t";
//             value--;
//         }
//         cout<<endl;
//     }
// }

//patern 10
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// char n;
// cout<<"Enter the value of n "<<endl;
// cin>>n;
// int m ;
// cout<<"Enter the value of m"<<endl;
// cin>>m;

// for(int i=1;i<=m;i++)
// {
//     for(int j=1;j<=m;j++)
//     {
//    cout<<n<<"\t";
   
//     }
//     n++;
//     cout<<endl;
// }
// }

//pattern 10 

// a b c 
//d e  f
//g h  i 

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// char ch;
// cout<<"Enter the value of ch "<<endl;
// cin>>ch;
// int n ;
// cout<<"Enter the value of n "<<endl;
// cin>>n;
// for(int i=1;i<=n;i++)
// {
//     char value = ch;
//     for(int j=1;j<=n;j++)
//     {
//       cout<<ch<<"\t";
//       ch++; 
//     }
//     cout<<endl;
// }
// }


//pattern 11 
// A B C 
// A B C 
// A B C

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// char ch;
// cout<<"Enter the character "<<endl;
// cin>>ch;
// int n;
// cout<<"Enter the value of n"<<endl;
// cin>>n;
// for(int i=1;i<=n;i++)
// {
//   char value = ch;
//   for(int j=1;j<=n;j++)
//   {
//     cout<<value<<"\t";
     
//     value++;
//   }
//   cout<<endl;
// }


// }


//Pattern 12 
// A B C
// B C D 
// C D E 
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//   int n ;
//   char ch;
//   cout<<"Enter the ch "<<endl;
//   cin>>ch;

//   cout<<"Enter the value of n "<<endl;
//   cin>>n;
  

//   for(int i=1;i<=n;i++)
//   {
//     int value = i;
//     for(int j=1;j<=n;j++)
//     {
//       cout<<ch + i<<"\t";
//       ch++;
//     }
//     cout<<endl;

//   }
// }


// A
// BBB 
// CCC

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// int n;
// cout<<"Enter the value of n"<<endl;
// cin>>n;
// char ch;
// cout<<"Enter the character "<<endl;
// cin>>ch;
// for(int i=1;i<=n;i++)
// {

//   for(int j=1;j<=i;j++)
//   {
//  cout<<ch<<"\t";

//   }
//   ch++;
//   cout<<endl;
// }
// }

// A
// B C
// D E F

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//   char ch;
//   cout<<"Enter the value of ch "<<endl;
//   cin>>ch;
//   int n ;
//   cout<<"Enter the value of n"<<endl;
//   cin>>n;
//   for(int i=1;i<=n;i++)
//   {
//     for(int j=1;j<=i;j++)
//     {
//       cout<<ch<<"\t";
//       ch++;

//     }
//      cout<<endl;
//   }
// }


// A
// B C 
// C D E 
// D  E F 

#include<bits/stdc++.h>
using namespace std;
int main()
{
char ch;
cout<<"Enter the value of ch "<<endl;
cin>>ch;
int n;
cout<<"Enter the value of n"<<endl;
cin>>n;
for(int i=1;i<=n;i++)
{
  
for(int j=1;j<=i;j++)
{
  char value = 'A' + i + j -2;
  cout<<value<<"\t";
  
}
cout<<endl;
}
}