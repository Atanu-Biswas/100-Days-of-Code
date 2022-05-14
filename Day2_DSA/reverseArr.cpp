#include<iostream>
using namespace std;

void printArr(int arr[],int size){
    cout<< "Reversed Array : ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
}

void reverse(int arr[],int size){
    int s =0;
    int e = size -1;

    while(s<e){
       swap(arr[s],arr[e]);
        s++;
        e--;
    }

   

}

int main(){

    int arr[10]={3,7,6,56,53,7,3,2,5,2};
    int size = 10;

    reverse(arr,size);

    printArr(arr,size);


    return 0;
}
