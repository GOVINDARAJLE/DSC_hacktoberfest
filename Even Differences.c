#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int n;
        scanf("%d",&n);
        int count=0,count1=0;
        for(int j=0;j<n;j++){
             int a[n];
             scanf("%d",&a[j]);
             if(a[j]%2!=0){
                 count++;
             }
             else if(a[j]%2==0){
                 count1++;
             }
        }
        if((count==n && count1==0) || (count1==n && count==0)){
            printf("0\n");
        }
        else if(count1>=count){
            printf("%d\n",count);
        }
        else if(count1<=count){
            printf("%d\n",count1);
        }
    }
    return 0;
}
