#include<stdio.h>
int main(){
     int n,i,j,swap;
     printf("enter the array size:");
     scanf("%d",&n);
     int a[n];
     printf("enter the array elements:--");
     for(i=0;i<n;i++){
        scanf("%d", &a[i]);
     }
     for(i=n;i>0;i--){
        for(j=0;j<i-1;j++){
            if(a[j]>a[j+1]){
                swap=a[j];
                a[j]=a[j+1];
                a[j+1]=swap;
            }

        }
     }
     printf("sorted result\n");
     for(i=0;i<n;i++){
        printf("%d ",a[i]);
     }
}
