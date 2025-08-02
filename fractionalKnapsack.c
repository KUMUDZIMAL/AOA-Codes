#include <stdio.h>
#include <stdlib.h>
struct item{
    int value;
    int weight;
};
int compare(const void *a, const void *b) {
    float ratio1 = ((struct item *)a)->value / (float)((struct item *)a)->weight;
    float ratio2 = ((struct item *)b)->value / (float)((struct item *)b)->weight;
    return (ratio2 > ratio1) - (ratio1 > ratio2);
}


void fractionalKnapsack(int n,struct item items[],int capacity){
qsort(items, n, sizeof(struct item), compare);
int currentWeight=0,i;
float totalValue=0.0;
for(i=0;i<n;i++){

if(currentWeight+items[i].weight<=capacity){
    currentWeight+=items[i].weight;

}
else{
    int remainingWeight=capacity-currentWeight;
    totalValue+=items[i].value * (float)remainingWeight/items[i].weight;
    break;
}}
printf("MAXIMUM PROFIT IS %.2f\n",totalValue);

}
int main(){
 int capacity, n;
    printf("Enter the capacity of knapsack: ");
    scanf("%d", &capacity);
    printf("Enter the number of items: ");
    scanf("%d", &n);

    struct item items[n];
    printf("Enter the value and weight of each item:\n");
    for (int i = 0; i < n; i++) {
        printf("Item %d:\n", i + 1);
        printf("Value: ");
        scanf("%d", &items[i].value);
        printf("Weight: ");
        scanf("%d", &items[i].weight);
    }
fractionalKnapsack(n,items,capacity);
return 0;
}

