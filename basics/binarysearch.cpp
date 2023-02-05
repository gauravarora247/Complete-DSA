#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[],int size,int key)
{
    int si = 0;
    int ei = size-1;
    int mid = (si+ei)/2;
    while(si<=ei)
    {
        if(arr[mid]==key)
        {
            return mid;
        }

        if(arr[mid]<key)
        {
            si = mid+1;
        }
        else
        {
            ei = mid-1;
        }
        mid = (si+ei)/2;
    }
    return -1;
}
int main()
{
int even[6] = {2,4,6,8,12,14};
int odd[5] = {3,8,11,14,16};
int key = 2;
int size1 = sizeof(even)/sizeof(even[0]);

int res = binarySearch(even,size1,key);
cout<<res;


}