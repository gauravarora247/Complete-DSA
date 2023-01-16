// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     cout<<"lets start with array "<<endl;
// int n;
// // cout<<"Enter the value of n"<<endl;
// // cin>>n;

// // int arr[n];

// // cout<<"Enter the elements of array "<<endl;
// // for(int i=0;i<=n;i++)
// // {
// //     cin>>arr[i];
// // }


// // for(int i=0;i<=n;i++)
// // {
// //     cout<<arr[i]<<" ";
// // }

// // int arr[4] = {2,3,4,5};
// // cout<<arr[0]<<" ";
// // cout<<arr[1]<<" ";
// // cout<<arr[2]<<" ";
// // cout<<arr[3]<<" ";

// // cout<<"Size of array is "<<endl;
// // cout<<sizeof(arr)/sizeof(arr[0])<<endl;


// char ch[5] = {'a','b','c','d','e'};


// for(int i=0;i<5;i++)
// {
//     cout<<ch[i]<<" ";

// }


// }



#include<bits/stdc++.h>
using namespace std;

int printMax(int arr[],int n)
{
int max = arr[0];
for(int i=0;i<n;i++)
{
    if(arr[i]>max)
    {
   max = arr[i];
    }
}
return max;
}

int printMin(int arr[],int n )
{
    int min = arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
            min = arr[i];
        }
    }
    return min;
}

int main()
{
int n ;
cout<<"Enter the value of n"<<endl;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}

int max = printMax(arr,n);
cout<<"max  element in an array is "<<max<<endl;
int min = printMin(arr,n);
cout<<"Min element in an array is "<<min<<endl;




}