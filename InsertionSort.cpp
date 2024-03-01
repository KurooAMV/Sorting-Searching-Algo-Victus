#include<iostream>
using namespace std;
int insertion_sort(int arr[], int n){
    for(int i=1; i<n; i++){
        int current=arr[i];
        int j=i-1;
        while(arr[j]>current && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
    for(int i=0; i<n; i++){
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
    insertion_sort(arr,n);
}