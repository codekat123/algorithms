#include <iostream>
using namespace std;
void swap(int&x,int&y){
    int temp = x;
    x = y;
    y = temp;
}

void selection_sort(int arr[] , int size ){
    int minimum;
    for(int i = 0 ; i < size -1 ; i++ ){
        minimum = i; 
        for(int j = i +1 ; j < size ; j++){
            if(arr[j] < arr[minimum]){
                minimum = j;
            }
        }
        swap(arr[minimum], arr[i]);
    }
};

void print(int arr[], int size){
    for(int i = 0 ; i < size ; i++){
        cout << arr[i] << " ";
    }
}


int main(){
    int arr[] = {29, 10, 14, 37, 13, 5, 92, 18, 66, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    selection_sort(arr,size);
    print(arr,size);
};





