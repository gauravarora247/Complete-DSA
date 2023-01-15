#include<bits/stdc++.h>
using namespace std;

void passbyvalue(int n)
{
n++;
cout<<"n is "<<n;
cout<<endl;

}



int main()
{
int n;
cout<<"Enter the value of n "<<endl;
cin>>n;
passbyvalue(n);
cout<<"num is "<<n<<endl;

}