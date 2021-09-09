#include<stdio.h>
int binarySearch(int a[],int n,int key,int searchFirst);

int main(){
    int n,key;
    printf("enter the size");
    scanf("%d",&n);
    int a[n];
    printf("enter the array ");
    for(int i=0;i<n;i++){
         scanf("%d",&a[i]);
    }
    printf("enter the key ");
    scanf("%d",&key);


    int p=binarySearch(a,n,key,1);
    printf ("%d",p);
    int l=binarySearch(a,n,key,0);
    printf ("%d",l);
    int count=l-p+1;
    if (p != -1) {
        printf("Key Element %d occurs %d times.", key, count);
    }
    else {
        printf("Element not found in the array.");
    }



return 0;
}

int binarySearch(int a[],int n,int key,int searchFirst ){
    int mid,result=-1;
     int l=0,r=n-1;
    while(l<=r){

        mid=l+(r-l)/2;
        if(a[mid]==key)
           { result=mid;

                 if (searchFirst) {
                r = mid - 1;
            }

            else {
                l= mid + 1;

           }

           }
        if(a[mid]<key)
          {  l=mid+1;}
        else
            {r=mid-1;}}
    return result;
}
