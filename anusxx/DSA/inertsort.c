#include <stdio.h>  
  void insertionSort(int arr[], int n) {  
    int i, k, j;  
    for (i = 1; i < n; i++) {  
        k = arr[i];  
        j = i - 1;  
  
        while (j >= 0 && arr[j] > k) {  
            arr[j + 1] = arr[j];  
            j = j - 1;  
        }  
        arr[j + 1] = k;  
    }  
}  
  
int main() {  
    int n,i;
	printf("enter the number of elements");
	scanf("%d",&n);
	int arr[n];
     printf("enter the array elements:--");
     for(i=0;i<n;i++){
        scanf("%d", &arr[i]); 
	 }
    n = sizeof(arr) / sizeof(arr[0]);  
    insertionSort(arr, n);  
    for (int i = 0; i < n; i++)  
        printf("%d ", arr[i]);  
    printf("\n");  
    return 0;  
}
