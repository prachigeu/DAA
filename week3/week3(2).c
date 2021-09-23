#include<stdio.h>
void sort();
int s=0,c=0;
void sort(){
int n,i,j;

        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(i=0;i<n-1;i++){
            int pos=i;
            for(j=i+1;j<n;j++){
                c++;
                if(a[j]<a[pos]){
                    pos=j;
                }
            }
            s++;
            int temp = a[i];
            a[i] = a[pos];
            a[pos] = temp;}
            for(i=0;i<n;i++)
            printf("%d ",a[i]);
        printf("\nComparisons: %d",c);
        printf("\nShift: %d\n\n",s);
    }


int main(){
    int test_case;
    scanf("%d",&test_case);
    while(test_case--){

        sort();

    }
    return 0;
}
