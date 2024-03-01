#include<iostream>
using namespace std;
int binary_search(int arr[], int n, int key){
    int start=0;
    int end=n;
    while(start<=end){
        int mid=((start+end)/2);
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
    }
    return -1;
}

int main(){
    //Input of array size
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    //Input the elements of array
    int arr[n];
    cout<<"Enter the elements of array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //Input of key
    int key;
    cout<<"Enter the element to be searched: ";
    cin>>key;

    //Searching the element
    int ans;
    ans=binary_search(arr,n,key);
    if(ans!=-1){
        cout<<"Element found at index: "<<ans+1<<endl;
    }
    else{
        cout<<"Element not found!!";
    }

    return 0;
}