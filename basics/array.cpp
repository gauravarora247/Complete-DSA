// // // #include<bits/stdc++.h>
// // // using namespace std;
// // // int main()
// // // {
// // //     cout<<"lets start with array "<<endl;
// // // int n;
// // // // cout<<"Enter the value of n"<<endl;
// // // // cin>>n;

// // // // int arr[n];

// // // // cout<<"Enter the elements of array "<<endl;
// // // // for(int i=0;i<=n;i++)
// // // // {
// // // //     cin>>arr[i];
// // // // }


// // // // for(int i=0;i<=n;i++)
// // // // {
// // // //     cout<<arr[i]<<" ";
// // // // }

// // // // int arr[4] = {2,3,4,5};
// // // // cout<<arr[0]<<" ";
// // // // cout<<arr[1]<<" ";
// // // // cout<<arr[2]<<" ";
// // // // cout<<arr[3]<<" ";

// // // // cout<<"Size of array is "<<endl;
// // // // cout<<sizeof(arr)/sizeof(arr[0])<<endl;


// // // char ch[5] = {'a','b','c','d','e'};


// // // for(int i=0;i<5;i++)
// // // {
// // //     cout<<ch[i]<<" ";

// // // }


// // // }



// // #include<bits/stdc++.h>
// // using namespace std;

// // int printMax(int arr[],int n)
// // {
// // int max = arr[0];
// // for(int i=0;i<n;i++)
// // {
// //     if(arr[i]>max)
// //     {
// //    max = arr[i];
// //     }
// // }
// // return max;
// // }

// // int printMin(int arr[],int n )
// // {
// //     int min = arr[0];
// //     for(int i=0;i<n;i++)
// //     {
// //         if(arr[i]<min)
// //         {
// //             min = arr[i];
// //         }
// //     }
// //     return min;
// // }

// // int main()
// // {
// // int n ;
// // cout<<"Enter the value of n"<<endl;
// // cin>>n;
// // int arr[n];
// // for(int i=0;i<n;i++)
// // {
// //     cin>>arr[i];
// // }

// // int max = printMax(arr,n);
// // cout<<"max  element in an array is "<<max<<endl;
// // int min = printMin(arr,n);
// // cout<<"Min element in an array is "<<min<<endl;


// // }


// // #include<bits/stdc++.h>
// // using namespace std;
// // int main()
// // {
// // int n;
// // //for odd case;
// // int arr[5] = {1,2,7,8,5};
// // //for even case;
// // int arr[6] = {1,2,7,8,5,6};
// // int i = 0;
// // int j = 1;

// // int size = sizeof(arr)/sizeof(arr[0]);

// // while(j<size)
// // {
// //     int temp = arr[i];
// //     arr[i] = arr[j];
// //     arr[j] = temp;
// //     i+=2;
// //     j+=2;
// // }

// // for(int i=0;i<size;i++)
// // {
// //     cout<<arr[i]<<" ";
// // }
// // }



// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int arr[7] = {2,3,1,6,3,6,2};
//     int size = sizeof(arr)/sizeof(arr[0]);

// int count = 0;

//   vector<int>res;
   

//    for(int i=0;i<size;i++)
//    {
//        count = 0;
//        for(int j=0;j<size;j++)
//        {
//            if(arr[j]==arr[i])
//            {
//             count++;
//            }
//        }
//        res.push_back(count);
//    }

//    for(int i=0;i<res.size();i++)
//    {
//        cout<<res[i]<<" ";
//    }

//   for(int i=0;i<size;i++)
//   {
//     for(int j=0;j<size;j++)
//     {
//         if(arr[i]!=arr[j])
//         {
//             cout<<true;
//             break;
//         }
//         else
//         {
//             cout<<false;
//              break;
//         }
//     }
//   }


// }

//intersection of two array 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr1[6]  = {1,2,2,2,3,4};
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int arr2[4] = {2,2,3,3};
    int size2 = sizeof(arr2)/sizeof(arr2[0]);

    int i = 0;
    int j = 0;
    vector<int> ans;

    while(i<size1 || j<size2)
    {
        if(arr1[i]==arr2[j])
        {
        ans.push_back(arr1[i]);
        i++;
        j++;
        }
        else
        {
            i++;
        }
    }
    for(int i=0;i<ans.size()-1;i++)
    {
        cout<<ans[i]<<" ";
    }

}