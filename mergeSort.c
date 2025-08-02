#include <stdio.h>
#include <stdlib.h>
void merge(int a[],int n,int lb,int ub){
    int b[n];
    int mid=(lb+ub)/2;
    int i=lb,j=mid+1,k=lb;
    while(i<=mid && j<=ub){
        if(a[i]>a[j]){
        b[k]=a[j];
        j++;
        }
        else{
            b[k]=a[i];
            i++;
        }
        k++;
        
    }
    if(i>mid){
        while(j<=ub){
            b[k]=a[j];
            j++;
            k++;
        }

    }
    if(j>ub){
         while(i<=mid){
            b[k]=a[i];
            i++;
            k++;
        } 
    }

for(i=lb;i<=ub;i++){
    a[i]=b[i];
}


}
void mergeSort(int a[],int lb,int ub,int n){
    int mid;
    if(lb<ub){
        mid=(lb+ub)/2;
        mergeSort(a,lb,mid,n);
        mergeSort(a,mid+1,ub,n);
        merge(a,n,lb,ub);
    }
}
int main(){
    int i,n,lb,ub;
    lb=0;
 
printf("ENTER NO OF ELEMENTS\n");
scanf("%d",&n);
   ub=n-1;
int a[n];
printf("ENTER ELEMENTS TO BE SORTED\n");
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
mergeSort(a,lb,ub,n);
printf("SORTED ARRAY IS \n");
for(i=lb;i<=ub;i++){
 printf("%d ",a[i]);
}

}