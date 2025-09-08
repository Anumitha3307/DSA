#include<stdio.h>
void bubbleSort(int* arr, int n) {
    
    int temp;
    // Code here
    for(int i = 0;i<n-1;i++){
        
        for(int j = 0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                
            }
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
    bubbleSort(arr,n);
    printf("\narray after sorting : ");
    printarray(arr,n);

    return 0;

}