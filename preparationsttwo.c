// taking input from user using for loop
/*#include<stdio.h>

int  main(){
    int a[5];
    for(int i=0;i<=5;i++)
    printf("enter the element %d",i+1);
    scanf("%d",&a[i]);
}*/
// an array of the student marks
/*#include<stdio.h>
int main(){
    int arr[5] = {5,46,67,89,90};
    for(int i=0;i<5;i++){
        if(arr[i]>35){
            printf("%d\n",arr[i]);
            }else{
                printf("index is : %d\n",i);
            }
    }
}*/
// memory allocation
/*#include<stdio.h>
int main(){
    int arr[5] = {1,1,1,1,1};
    printf("%p",&arr[0]);
    return 0;

    }*/
//
/*#include<stdio.h>
int main(){
    int num[26],temp;
    num[0]=100;
    num[25]=200;
    temp = num[25];
    num[25] = num[0];
    num[0] = temp;
    printf("\n%d%d",num[0],num[25]);
}*/
// given elements in array if numbeer is odd multiply by two and number is even increase by 10
/*#include<stdio.h>
int main(){
    int arr[6] = {1,2,3,4,5,6};
    for(int i=0;i<=6;i++){
        if(arr[i]%2==0){printf("\n%d",arr[i]*2);
            
        }
    else(printf("\n%d",arr[i]+10));
    }
}*/

// count the number which is greater than x
/*#include<stdio.h>
int main(){
    int count = 0;
    int arr[6] = {1,2,3,4,5,6};
    for(int i=0;i<=6;i++){
        if(arr[i]>1){
            count++;}}

            printf("%d",count);  
}*/
// find the sum of the even indices and odd indices then
// find the difference between even indices - odd indices
/*#include<stdio.h>
int main(){
int evensum = 0;
int oddsum = 0;
     int arr[6] = {2,3,4,5,6,7};
     for(int i=0;i<=5;i++){
        if(i%2==0){evensum +=arr[i];}
    else{
        oddsum+=arr[i];
    }
     }
     printf("your fucking output is%d",evensum-oddsum);
}*/
// to print the numbers of pairs in aary whose sum is 12
/*#include<stdio.h>
int main(){int x =12;
int count=0;
    int arr[7] = {2,3,4,5,6,7,8};
    for(int i=0;i<7;i++){
        for(int j=i+1;j<7;j++)
        if(arr[i]+arr[j]==x){
        count++;
        printf(("%d%d\n"),arr[i],arr[j]);
 } } printf("%d\n",count);
}*/
// to print the three number pairs whose sum is 12
/*#include<stdio.h>
int main(){
    int x=11;
    int count =0;
    int arr[6] = {1,2,3,4,5,6};
    for(int i =0;i<6;i++){
        for(int j=i+1;j<6;j++){
            for(int k=i+2;k<6;k++)
            if(arr[i]+arr[j]+arr[k]==x){
                count++;
                printf("%d %d %d\n",arr[i],arr[j],arr[k]);}}}
                printf("%d\n",count);
    }*/
// to print the second largest number in array
/*#include<stdio.h>
int main(){
    int arr[5] = {1,2,3,4,5};
    int max = arr[0];
    for(int i=0;i<=5;i++){
        if(arr[i]>max){
            max=arr[i];}
            }
    int smax = arr[0];
    for(int i=0;i<5;i++){
        if(arr[i]>smax &&arr[i]!=max){
            smax=arr[i];
        }}
     printf("%d",smax);*/
//rotate the array 
#include<stdio.h>
int main(){

}
        
    



