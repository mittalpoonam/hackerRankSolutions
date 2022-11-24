/*Ques: Given five positive integers, find the minimum and maximum values that can be calculated by
 summing exactly four of the five integers. Then print the respective minimum and maximum values as
 a single line of two space-separated long integers.
*/


#include <stdio.h>

int main(){
    int max;
    int min;
    int arr[5] = {1,2,3,4,5};
    for(int i=0; i<5; i++){
        max = min = arr[0];
        
        if (arr[i]>max){
            max = arr[i];
        }
        else if(arr[i]<min ){
            min = arr[i];
        }
        
    }
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum = sum + arr[i];
    }
   // printf("%d \n", sum);
    
    //printf("%d \n", max);
    //printf("%d \n", min);
    int maxAccQues = (sum - min);
    int minAccQues = (sum - max);
    printf("%d \n", maxAccQues );
    printf("%d \n", minAccQues);
}