#include<stdio.h>
int main(){
    int n,m,i,j,flag=0;
    printf("enter the limit of sorted array1 \n");
    scanf("%d",&n);
    int a[n];
    printf("enter the element of sorted array1\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("enter the limit of sorted array2 \n");
    scanf("%d",&m);
    int b[m];
    printf("enter the limit of sorted array2 \n");
    for(i=0;i<m;i++)
        scanf("%d",&b[i]);
    i=j=0;
    while(i<n&&j<m)
    {
        if(a[i]==b[j]){
            printf("%d ",a[i]);
            i++;
            j++;
            flag=1;
        }
        else if(a[i]<b[j])
            i++;
        else
            j++;
    }
    if(flag==0)
        printf("No Common Element");
    return 0;
}
