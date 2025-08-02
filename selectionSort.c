#include <stdio.h>
#include <stdlib.h>
void swap(int a[],int i,int min){
int temp;
temp=a[i];
a[i]=a[min];
a[min]=temp;

}
void selectionSort(int n,int a[]){
int i,j,min;
    for(i=0;i<n;i++){
            min=i;
        for(j=i+1;j<n;j++){
            if(a[j]<a[min]){
               min=j;
            }
    }
    if(min!=i){
        swap(a,i,min);
    }
        }
        for(i=0;i<n;i++){
            printf("%d ",a[i]);
        }
}
        
    


int main(){
int i,j,n;
printf("ENTER NO OF ELEMENTS\n");
scanf("%d",&n);
int a[n];
printf("ENTER ELEMENTS TO BE SORTED\n");
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
selectionSort(n,a);

return 0;

}