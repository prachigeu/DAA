#include<stdio.h>
int binarySearch(int a[],int l,int r,int key);

int main(){
    int n,key;
    printf("enter the size");
    scanf("%d",&n);
    int a[n];
    printf("enter the array ");
    for(int i=0;i<n;i++){
         scanf("%d",&a[i]);
    }



    int p,j,i,q;
    for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        key=a[i]+a[j];
        p=binarySearch(a,0,n-1,key);
        if(p != -1)
       {printf("\n %d,%d, %d",i+1,j+1,p+1);
       break;
       q=1;}

    }}

    if(q == 1)
        printf("NOT PRESENT");




return 0;
}

int binarySearch(int a[],int l,int r,int key){
    int mid;

    while(l<=r){

        mid=l+(r-l)/2;
        if(a[mid]==key)
           { return mid;}
        if(a[mid]<key)
          {  l=mid+1;}
        else
            {r=mid-1;}}
    return -1;
}
