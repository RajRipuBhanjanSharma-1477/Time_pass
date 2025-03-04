// writing a code to find the minimum element in the array
#include<stdio.h>
int min(int a[],int n){
    int ans=a[0];
    
    for (int i=0;i<n;i++){
        if(a[i]<ans){
            ans=a[i];
        }
    }

    return ans;
}
void main(){
    int a[]={1,2,3,-4,55,33};
    int n=sizeof(a)/sizeof(a[0]);
    // printf("sizeof(a) = %d\n",sizeof(a));
    // printf("sizeof(a[0]) = %d\n",sizeof(a[0]));
    // printf("num = %d\n",n);
    int tem=min(a,n);
    printf("This is the answer is %d",tem);
}