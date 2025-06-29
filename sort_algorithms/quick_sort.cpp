#include<iostream>
using namespace std;

int partitioning1(int arr[], int begin ,int end){
    int i = begin - 1;
    int pivot = arr[end];

    for (int j = begin; j < end; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[end]);
    return i + 1;
}

void quicksort(int arr[], int l ,int h ){
    if(l < h){
        int piv = partitioning1(arr, l, h);
        quicksort(arr, l, piv - 1);
        quicksort(arr, piv + 1, h);
    }
}

int main(){
    int arr[] = {10, 7, 8, 9, 1, 5};
    int size = sizeof(arr)/sizeof(arr[0]);

    quicksort(arr, 0, size - 1);

    cout << "Sorted array: ";
    for(int i = 0; i < size; i++)
        cout << arr[i] << " ";
    return 0;
}
