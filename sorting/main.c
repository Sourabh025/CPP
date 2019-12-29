#include <stdio.h>
#include <stdlib.h>

int main()
{
int arr[5]={3,2,1,4,5};
bubblesort(arr,5);
selectionsort(arr,5);
insertion(arr,5);


    return 0;
}


void bubblesort(int arr[],int n){
int temp;
for(int i=0;i<n;i++){

    for(int j=i+1;j<n;j++){

        if(arr[i]>arr[j]){

            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;

        }

    }

}
//for(int i=0;i<n;i++)
//printf("%d",arr[i]);


}

void selectionsort(int arr[],int n){

for(int i=0;i<n;i++){

        int min=i;

        for(int j=i+1;j<n;j++){

                    if(arr[i]>arr[j]){

                        min=j;

                    }
    int temp=arr[min];
    arr[min]=arr[i];
    arr[i]=temp;



    }


}

//for(int i=0;i<n;i++)
//printf("%d\n",arr[i]);






}

void insertion(int arr[],int n){


for(int i=1;i<n;i++){
int j=i-1;
int key=arr[i];

while(j>=0 && arr[j]>key){



            arr[i]=arr[j];
            j--;




}

arr[j+1]=key;

}



for(int i=0;i<n;i++)
printf("%d\n",arr[i]);



}


