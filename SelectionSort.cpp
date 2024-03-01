#include<iostream>
using namespace std;
int selection_sort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=i+1 ; j<n; j++){
            if(arr[j]<arr[i]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }

    //printing the sorted array
    cout<<"The printed array is: ";
    for(int i=0 ;i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
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

    //sorting the array provided and printing it out
    selection_sort(arr,n);

    return 0;
}