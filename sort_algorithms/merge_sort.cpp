#include <iostream>
using namespace std;

void Merge(int arr[], int left , int right, int middle){
     int i,j,k;
     int n1 = middle - left +1;
     int n2 = right - middle;
     int *LeftArray = new int[n1],*RightArray = new int[n2];

     for(i = 0 ;i < n1;i++){
          LeftArray[i] = arr[left +i];
     }
     for(j = 0 ; j < n2 ; j++){
          RightArray[j] = arr[middle + j +1 ];
     }
     j = i = 0;
     k = left ;
     while(i < n1 && j < n2 ){
          if(LeftArray[i] <= RightArray[j]){
               arr[k] = LeftArray[i];
               i++;
          }
          else{
               arr[k] = RightArray[j];
               j++;
           }
           k++;
     }
     while(i < n1){
          arr[k] = LeftArray[i];
          i++;
          k++;
     }
     while(j < n2){
          arr[k] = RightArray[j];
          j++;
          k++;
     }
}
void MergeSort(int arr[], int left , int right){
     if(left<right){
          int middle = left +(right-left) / 2;
          MergeSort(arr,left,middle);
          MergeSort(arr,middle+1,right);
          Merge(arr,left,right,middle);
     }
}
void print(int arr[], int size){
  for(int i = 0 ; i < size ; i++){
    cout << arr[i] << " ";
  }
};

int main(){
  int arr[] = {29, 10, 14, 37, 13, 5, 92, 18, 66, 1};
  int size = sizeof(arr) / sizeof(arr[0]);
  MergeSort(arr,0,size-1);
  print(arr,size);
}
