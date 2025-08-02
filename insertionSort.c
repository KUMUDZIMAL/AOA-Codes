#include <stdio.h>
#include <stdlib.h>
void insertionSort(int a[],int n){
int i,j,temp;
for(i=1;i<n;i++){
    int temp=a[i];
    int j=i-1;
    while(j>=0 && a[j]>temp){
        
            a[j+1]=a[j];
            j--;
        
    }
    a[j+1]=temp;
}
printf("SORTED ARRAY IS \n");
for(i=0;i<n;i++){
 printf("%d\n",a[i]);
}

}
int main(){
    int n,i;
    printf("ENTER NO OF ELEMENTS\n");
scanf("%d",&n);
int a[n];
printf("ENTER ELEMENTS TO BE SORTED\n");
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
insertionSort(a,n);
}