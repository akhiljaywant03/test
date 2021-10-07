#include<iostream>
using namespace std;

int main(){
    
    // Creating a dynamic array
    int n,k,*arr;
    cout<<"Enter total number of elements in an array: ";
    cin>>n;
    arr = new int [n];
    cout<<"Enter the elements in the array: ";
    for(int i=0;i<n;i++){
        cin>>*(arr+i);
    }

    //Traversing the array and checking for the number in it
    cout<<"Enter the element to be searched: ";
    cin>>k;
    for(int i=0;i<n;i++){
        if(*(arr+i)==k){
            cout<<"Element found at "<<(i+1)<<" position"<<endl;
            break;
        }
    }

    //Freeing up the space occupied by dynamic arrray 
    delete[] arr;

    return 0;
}