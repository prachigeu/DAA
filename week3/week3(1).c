#include<stdio.h>
int main(){
    int test_case;
    scanf("%d",&test_case);
    while(test_case--){
        int n,i,s=0,c=0,flag=0;
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(i=1;i<n;i++){
            int key=a[i];
            int j=i-1;
            while(j>=0&&key<a[j]){
                c++;
                s++;
                flag = 1;
                a[j+1]=a[j];
                j--;
            }
            if(j!=-1)
                c++;
            a[j+1]=key;
            if(flag==1){
                s++;
                flag = 0;
            }
        }
        printf("new array:");
        for(i=0;i<n;i++)
            printf("%d ",a[i]);
        printf("\nComparisons: %d",c);
        printf("\nShift: %d\n",s);
    }
    return 0;
}
