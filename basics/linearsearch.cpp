// #include<bits/stdc++.h>
// using namespace std;

// bool LinearSearch(int arr[],int size,int key)
// {
//     for(int i=0;i<size;i++)
//     {
//         if(arr[i]==key)
//         {
//             return 1;
//         }
//     }
//     return 0;
// }

// int main()
// {
// int arr[6] = {12,43,56,76,84};

// int size = sizeof(arr)/sizeof(arr[0]);
// int key;
// cout<<"Enter the key "<<endl;
// cin>>key;

// bool res  = LinearSearch(arr,size,key);
// if(res==true)
// {
//     cout<<"found"<<endl;
// }
// else
// {
//     cout<<"Not found "<<endl;
// }

// }


#include<bits/stdc++.h>
using namespace std;
int main()
{

int arr[5] = {2,7,5,9};
int size = sizeof(arr)/sizeof(arr[0]);
int left = 0;
int right = size - 1;

while(left<right)
{
    int temp = arr[left];
    arr[left] = arr[right];
    arr[right] = temp;
    left++;
    right--;
}

for(int i=0;i<size;i++)
{
    cout<<arr[i]<<" ";
}







}