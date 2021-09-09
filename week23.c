#include<stdio.h>


int main(){
    int n,key;
    printf("enter the size");
    scanf("%d",&n);
    int a[n];
    printf("enter the array ");
    for(int i=0;i<n;i++){
         scanf("%d",&a[i]);
    }

   printf("enter the key");
    scanf("%d",&key);

    int p,j,i,q,c=0;
    for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        q=abs(a[i]-a[j]);
        if(q==key)
       {
       c++;
       }

    }}

    if(c>0)
        printf("%d",c);
    else
        printf("not present");




return 0;
}
