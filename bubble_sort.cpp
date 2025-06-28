#include <iostream>
#include <algorithm>
using namespace std;
void swap(int&x,int&y){
  int temp = x;
  x = y;
  y = temp;
}

void bubble_sort(int arr[], int size){
 bool organized = true;
  for(int i = 0 ; i < size ; i++){
    for(int j = 0 ;j < size -i -1 ; j++ ){
      if(arr[j] > arr[j+1]){
        swap(arr[j+1],arr[j]);
						organized = false;
      }
    }
  }
};

void print(int arr[], int n)
{
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
  cout << endl;
}



int main()
{

  int arr[] = { 30,20,40,5,60,2 };
  int n = sizeof(arr) / sizeof(arr[0]);
  bubble_sort(arr, n);
  print(arr, n);
  return 0;

}