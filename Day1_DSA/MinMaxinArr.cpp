#include <iostream>

using namespace std;

struct Pair
{
    int max;
    int min;
};

struct Pair getminmax(int arr[],int low,int high){

        
    struct Pair minmax, mml, mmr;

        if(low==high){
            minmax.min = arr[low];
            minmax.max = arr[high];
            return minmax;
        }

        if(high==low+1){
            if(arr[low]<arr[high]){
                minmax.min = arr[low];
                minmax.max = arr[high];
            }
            else{
                minmax.min = arr[high];
                minmax.max = arr[low];
            }

            return minmax;
        }

        int mid= (low+high)/2;
        mml = getminmax(arr,low,mid);
        mmr = getminmax(arr,mid+1,high);

        if(mml.min < mmr.min){
            minmax.min = mml.min;
        }
        else{
            minmax.min = mmr.min;
        }
        if(mml.max>mmr.max){
            minmax.max = mml.max;
        }
        else{
            minmax.max=mmr.max;
        }

        return minmax;
}


int main(){
    int arr[]={200,43,655,7,60,67,3,8,1,767,6556};
    int low=0;
    int high = 10;

    struct Pair minmax = getminmax(arr,low,high);

    cout<<"min is :"<<minmax.min<<endl;
    cout<<"max is :"<<minmax.max<<endl;

    return 0;

}