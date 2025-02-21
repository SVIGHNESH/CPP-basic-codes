#include <stdio.h>
int binarySearch(int arr[], int s, int e, int k) {
  
    int middle = s + (s - e) / 2;
    if(s>e){
      return 0;
    }
    
    if (arr[middle] == k) {
      return 1;
    }
    if (arr[middle] > k) {
      return binarySearch(arr, s, middle, k);
    }
    return binarySearch(arr, middle + 1  , e, k);
}

int main() {
  int arr[5] = {1, 2, 3, 4, 5};
  if(binarySearch(arr, 0, 4, 40)){
    printf("it is present");

  }
  else{
    printf("Not present ");
  }
}
