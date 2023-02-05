// // // // #include<bits/stdc++.h>
// // // // using namespace std;
// // // // int main()
// // // // {
// // // //     cout<<"lets start with array "<<endl;
// // // // int n;
// // // // // cout<<"Enter the value of n"<<endl;
// // // // // cin>>n;

// // // // // int arr[n];

// // // // // cout<<"Enter the elements of array "<<endl;
// // // // // for(int i=0;i<=n;i++)
// // // // // {
// // // // //     cin>>arr[i];
// // // // // }


// // // // // for(int i=0;i<=n;i++)
// // // // // {
// // // // //     cout<<arr[i]<<" ";
// // // // // }

// // // // // int arr[4] = {2,3,4,5};
// // // // // cout<<arr[0]<<" ";
// // // // // cout<<arr[1]<<" ";
// // // // // cout<<arr[2]<<" ";
// // // // // cout<<arr[3]<<" ";

// // // // // cout<<"Size of array is "<<endl;
// // // // // cout<<sizeof(arr)/sizeof(arr[0])<<endl;


// // // // char ch[5] = {'a','b','c','d','e'};


// // // // for(int i=0;i<5;i++)
// // // // {
// // // //     cout<<ch[i]<<" ";

// // // // }


// // // // }



// // // #include<bits/stdc++.h>
// // // using namespace std;

// // // int printMax(int arr[],int n)
// // // {
// // // int max = arr[0];
// // // for(int i=0;i<n;i++)
// // // {
// // //     if(arr[i]>max)
// // //     {
// // //    max = arr[i];
// // //     }
// // // }
// // // return max;
// // // }

// // // int printMin(int arr[],int n )
// // // {
// // //     int min = arr[0];
// // //     for(int i=0;i<n;i++)
// // //     {
// // //         if(arr[i]<min)
// // //         {
// // //             min = arr[i];
// // //         }
// // //     }
// // //     return min;
// // // }

// // // int main()
// // // {
// // // int n ;
// // // cout<<"Enter the value of n"<<endl;
// // // cin>>n;
// // // int arr[n];
// // // for(int i=0;i<n;i++)
// // // {
// // //     cin>>arr[i];
// // // }

// // // int max = printMax(arr,n);
// // // cout<<"max  element in an array is "<<max<<endl;
// // // int min = printMin(arr,n);
// // // cout<<"Min element in an array is "<<min<<endl;


// // // }


// // // #include<bits/stdc++.h>
// // // using namespace std;
// // // int main()
// // // {
// // // int n;
// // // //for odd case;
// // // int arr[5] = {1,2,7,8,5};
// // // //for even case;
// // // int arr[6] = {1,2,7,8,5,6};
// // // int i = 0;
// // // int j = 1;

// // // int size = sizeof(arr)/sizeof(arr[0]);

// // // while(j<size)
// // // {
// // //     int temp = arr[i];
// // //     arr[i] = arr[j];
// // //     arr[j] = temp;
// // //     i+=2;
// // //     j+=2;
// // // }

// // // for(int i=0;i<size;i++)
// // // {
// // //     cout<<arr[i]<<" ";
// // // }
// // // }



// // #include<bits/stdc++.h>
// // using namespace std;
// // int main()
// // {
// //     int arr[7] = {2,3,1,6,3,6,2};
// //     int size = sizeof(arr)/sizeof(arr[0]);

// // int count = 0;

// //   vector<int>res;
   

// //    for(int i=0;i<size;i++)
// //    {
// //        count = 0;
// //        for(int j=0;j<size;j++)
// //        {
// //            if(arr[j]==arr[i])
// //            {
// //             count++;
// //            }
// //        }
// //        res.push_back(count);
// //    }

// //    for(int i=0;i<res.size();i++)
// //    {
// //        cout<<res[i]<<" ";
// //    }

// //   for(int i=0;i<size;i++)
// //   {
// //     for(int j=0;j<size;j++)
// //     {
// //         if(arr[i]!=arr[j])
// //         {
// //             cout<<true;
// //             break;
// //         }
// //         else
// //         {
// //             cout<<false;
// //              break;
// //         }
// //     }
// //   }


// // }

// //intersection of two array 
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int arr1[6]  = {1,2,2,2,3,4};
//     int size1 = sizeof(arr1)/sizeof(arr1[0]);
//     int arr2[4] = {2,2,3,3};
//     int size2 = sizeof(arr2)/sizeof(arr2[0]);

//     int i = 0;
//     int j = 0;
//     vector<int> ans;

//     while(i<size1 || j<size2)
//     {
//         if(arr1[i]==arr2[j])
//         {
//         ans.push_back(arr1[i]);
//         i++;
//         j++;
//         }
//         else
//         {
//             i++;
//         }
//     }
//     for(int i=0;i<ans.size()-1;i++)
//     {
//         cout<<ans[i]<<" ";
//     }

// }


// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int sum = 5;
//     int arr[5] = {1,2,3,4,5};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     vector<vector<int>> ans;
//     for(int i=0;i<size;i++)
//     {
//         for(int j=i+1;j<size;j++)
//         {
//             vector<int>temp;
//             temp.push_back(min(arr[i],arr[j]));
//             temp.push_back(max(arr[i],arr[j]));
//             ans.push_back(temp);
//         }
//     }
//        for(int )
  
// }



// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
// int arr[6] = {0,1,1,0,0,1};
// int size = sizeof(arr)/sizeof(arr[0]);
// cout<<"size of arr is "<<size<<endl; 

// int i = 0;
// int j = size-1;

// while(i<j)
// {
//     if(arr[i]==0 && arr[j]==1)
//     {
//         i++;
//         j--;
//     }
//     else if(arr[i]==1 && arr[j]==0)
//     {
//         swap(arr[i],arr[j]);
//         i++;
//         j--;
//     }
//     else
//     {
//         break;
//     }
// }

// for(int i=0;i<size;i++)
// {
//     cout<<arr[i]<<" ";
// }

// }


//check if array is sorted or not 
// #include<bits/stdc++.h>
// using namespace std;


// bool checkSorted(int arr[],int size)
// {
// for(int i=0;i<size;i++)
// {
//     if(arr[i]>arr[i+1])
//     {
//         return 0;
//     }
// }
// return 1;
// }

// int main()
// {
// int arr[5] = {10,20,30,40,50};
// int size = sizeof(arr)/sizeof(arr[0]);

// bool res =  checkSorted(arr,size);
// cout<<res<<endl;

// }

//remove duplicates from an array 
#include<bits/stdc++.h>
using namespace std;

void removeDuplicates(int arr[],int size)
{ 

set<int> set;

for(int i=0;i<size;i++)
{
    set.insert(arr[i]);
}

int  k = set.size();

int j = 0;
for(int x : set)
{
    arr[j++] = x;
}


 }

 

int main()
{
int arr[] =  {1,1,2,2,3,3,3,4,4};
int size = sizeof(arr)/sizeof(arr[0]);
 removeDuplicates(arr,size);
printarr(arr,size);
}