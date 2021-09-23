#include<stdio.h>
#include<math.h>
int ExponentialSearch(int a[],int n, int key);
int binarySearch(int a[],int l,int r,int key);
int j,n;
int ExponentialSearch(int a[],int n, int key){
    printf("hy");
    if(a[0]==key){
        return 0;}
    j=1;
    while(j<n && a[j]<=key){

            j=j*2;
        }

        return binarySearch(a,(int)(j/2),fmin(j,n-1),key);
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

int main(){
    int key;
    printf("enter the size");
    scanf("%d",&n);
    int a[n];
    printf("enter the array ");
    for(int i=0;i<n;i++){
         scanf("%d",&a[i]);
    }
    printf("enter the key ");
    scanf("%d",&key);


    int p=ExponentialSearch( a, n, key);

    if(p == -1)
        printf("NOT PRESENT");

    else
        printf("PRESENT %d",p+1);


return 0;
}
