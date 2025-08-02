#include <stdio.h>
#include <stdlib.h>
#include<string.h>
void naiveStringMatch(char text[],char pattern[]){
int n=strlen(text);
int m=strlen(pattern);
int i,j,found=0;
for(i=0;i<=n-m;i++){
    for(j=0;j<m;j++){
        if(text[i+j]!=pattern[j]){
            break;
        }

    }
    if(j==m){
        found=1;
        printf("PATTERN FOUND AT INDEX %d",i);
    }
}
    if(!found){
        printf("PATTERN NOT FOUND\n");
    }
   
}


int main(){
    char text[100],pattern[100];
    printf("enter text");
    fgets(text,sizeof(text),stdin);
    text[strcspn(text,"\n")]= '\0';
    printf("enter pattern");
    fgets(pattern,sizeof(pattern),stdin);
    pattern[strcspn(pattern,"\n")]= '\0';
    naiveStringMatch(text,pattern);
    return 0;
}

