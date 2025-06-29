#include <iostream>
using namespace std;

void swap(int&x,int&y){
     int temp = x;
     x = y;
     y = temp;
}



int binary_search(int arr[] , int left , int right , int element){
     while(left <= right){
     int middle = (left + right) / 2;

     if(arr[middle] == element){
          return middle;
     }
     else if(arr[middle]< element){
          left = middle + 1 ;
     }
     else {
          right = middle - 1 ;
     }}  
return -1;
};
void selection_sort(int arr[], int size){
  for(int i = 0; i < size-1 ; i++){
       int minimum = i;
       for(int j = i +1 ; j < size ; j++){
            if(arr[minimum] > arr[j]){
               minimum = j;
          }
     }
     swap(arr[minimum],arr[i]);
  }   
};

void print(int arr[],int size){
     for(int i = 0;i < size ; i++){
          cout << arr[i] <<" ";
     }
     cout << endl;
}

int main(){
int arr[] = {42, 87, 13, 65, 29, 76, 4, 91, 33, 58};
int size = sizeof(arr) / sizeof(arr[0]);
selection_sort(arr,size);
print(arr,size);
int number;
cout << "enter an integer : ";
cin >> number;
int result = binary_search(arr,0,size - 1, number);
if(result == -1){
     cout << "the Number : (" << number << ") was not found" << endl;
}
else{
     cout << "the number : (" << arr[result] << ") found at index ("<< result <<")";
}
};