#include<stdio.h>
int main(){
    int arr[1000], i, n;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(i=n-1; i>=0; i--){
        printf("%d ", arr[i]);
    }
}
