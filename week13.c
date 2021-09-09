#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int jumpSearch(int a[],int n,int key);
int jumpSearch(int a[],int n,int key){
  float j=sqrt(n);
  float steps=j;
  int prev=0;

  while(a[(int)(fmin(steps,n)-1)]<key){
    prev=steps;
    steps+=j;
    if(prev>=n){
      return -1;
    }}
 while( a[(int)(prev)]<key){
  prev+=1;
  if(prev== fmin(steps,n))
  {return -1;}
  if(a[(int)(prev)]==key)
  {return prev;}


 }

  return -1;
}
int main(){
    int n,key;

    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
         scanf("%d",&a[i]);
    }
    scanf("%d",&key);


    int p=jumpSearch(a,n,key);
    if(p == -1)
        printf("NOT PRESENT");

    else
        printf("PRESENT %d",p+1);


return 0;
}
