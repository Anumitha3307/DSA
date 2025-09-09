#include<stdio.h>
void selectionSort(int arr[], int n) {
    // Code here
    int min;
    for(int i=0;i<n-1;i++){
        min = i;
        for(int j = i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        if(min != i){
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
}
void printarray(int arr[],int n){
    for(int i = 0; i<n ; i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    int n;
    printf("enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements of the array : ");
    for(int i = 0; i<n; i++){
        scanf("%d",&arr[i]);

    }
    printf("array before sorting : ");
    printarray(arr,n);
    selectionSort(arr,n);
    printf("\narray after sorting : ");
    printarray(arr,n);

    return 0;
}