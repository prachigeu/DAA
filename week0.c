#include<stdio.h>
int main(){
int n,c=0;
printf("enter the length of array: ");
scanf("%d",&n);
int a[n],key;
printf("enter the key element:");
scanf("%d",&key);
printf("enter the array: ");
for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
for(int i=0;i<n;i++){
if(a[i]==key)
   c++;
}
if(c==1)
  printf("element is present");
else
  printf("element is not present");
return 0;


}
