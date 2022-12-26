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
#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cout<<"Enter the value of n"<<endl;
cin>>n;
for(int i=1;i<=n;i++)
{
    int value = i;
    for(int j=1;j<=i;j++)
    {
        cout<<value<<"\t";
        value++;
    }
    cout<<endl;
}
}