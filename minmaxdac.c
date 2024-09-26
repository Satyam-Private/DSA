#include<stdio.h>
#include<conio.h>


typedef struct{
    int min;
    int max;
}minmax;

minmax dacminmax(int arr[] , int low , int high){
    minmax result , rresult , lresult;
      if(low == high){
        result.min = arr[low];
        result.max = arr[low];
        return result;

      }
      else if(low == high + 1){
        if(arr[low] < arr[high]){
            result.min = arr[low];
            result.max = arr[high];
            return result;
        }
        else{
            result.max = arr[low];
            result.min = arr[high];
            return result;
        }
      }
      int mid = (low + high)/2;
      lresult = dacminmax(arr , low , mid);
      rresult = dacminmax(arr , mid+1, high);

      if(lresult.min < rresult.min){
        result.min = lresult.min;
      }
      else{
        result.min =  rresult.min;
      }
      if(lresult.max > rresult.max){
        result.max = lresult.max;
      }
      else{
        result.max =  rresult.max;
      }
      return result;

}


int main(){
    int size;
    printf("enter the size of the array");
    scanf("%d",&size);
    int arr[size];
    printf("enter the array elements one by one");
    for(int i =0; i < size ; i++){
        scanf("%d",&arr[i]);
    }
    int low = 0;
    int high = size -1;

    minmax ans = dacminmax(arr , low , high);
    printf("the smallest element in an array is %d \n", ans.min);
    printf("the largest element in an array is %d", ans.max);

}

