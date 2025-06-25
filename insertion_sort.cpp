#include <iostream>
using namespace std;

void insertion_sort(int arr[], int size){
  int j,key;
  for(int i = 1 ; i < size ; i++ ){
    key = arr[i];
    j = j -1;
    while(j >= 0 && arr[j] > key){
      arr[j+1] = arr[j];
      j = j -1;
    }
    arr[j + 1] = key;
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
  insertion_sort(arr,size);
  print(arr,size);
}