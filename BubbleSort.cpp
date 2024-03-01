#include<iostream>
using namespace std;
int bubble_sort(int arr[], int n){
    int counter=1;
    while(counter<n){
        for(int i=0; i<n-counter; i++){
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
        }
        }
        counter++;
    }
    for(int j=0; j<n; j++){
        cout<<arr[j]<<" ";
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
    bubble_sort(arr,n);

    return 0;
}