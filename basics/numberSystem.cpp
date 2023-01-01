//Decimal to binary 

// num = 123
// output = 321

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// int num;
// cout<<"Enter the number "<<endl;
// cin>>num;
// int sum = 0;
// while(num!=0)
// {
//    int rem = num%10;
//    sum = sum * 10 + rem;
//    num /=10;
// }
// cout<<sum<<endl;
// }


#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cout<<"Enter the value of n"<<endl;
cin>>n;
int sum = 0;
int b = 2;
int pow = 1;
while(n!=0)
{
    int rem = n%b;
    sum = sum + ( rem * pow);
    n = n/b;
      pow *=10;
}
cout<<"The binary form of num is"<<" "<<sum<<endl;
}