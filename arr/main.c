#include <stdio.h>
#include <stdlib.h>

int main()
{



    int arr[]={1,2,3,4,5};
    int arr1[]={6,7,8,9,10};
    int arr2[10];


    int l=0;
    int m=0;
    int n=0;
    for(int i=0;i<n;i++){
    if(arr[l]>arr1[m]){
        arr2[n]=arr[m];
        n++;
        m++;
    }

    if(arr[l]<arr1[m]){
        arr2[n]=arr[l];
        n++;
        l++;


    }

    if(l<5 && m==5){
        arr[n]=arr[l];

    }
    if(m<5 && l==5){

        arr[n]=arr[m];

    }
}



for(int i=0;i<n;i++){
    if(l<5 && m==5){
        arr[n]=arr[l];

    }
    if(m<5 && l==5){

        arr[n]=arr[m];

    }

}

for(int i=0;i<10;i++){
    printf("%d\n",arr2[i]);

}
    return 0;
}
