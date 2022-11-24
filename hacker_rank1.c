/*Given an array of integers, calculate the ratios of its elements that are positive, negative, and zero.
 Print the decimal value of each fraction on a new line with  places after the decimal.
*/

#include <stdio.h>

void main(){
    int countpos = 0;
    int countzero = 0;
    int countneg = 0;
    int arr[5] = {1,1,0,-1,-1};
    for (int i = 0; i < 5; i++)
    {
        if(arr[i] > 0){
            countpos ++;
        }
        else if(arr[i] == 0){
            countzero ++;
        }
        else{
            countneg ++;
        }
    }
    int totalCount = (countneg + countpos + countzero);
    float ratioPos = ((float)countpos/(float)totalCount);
    float ratioNeg = ((float)countneg/(float)totalCount);
    float ratioZero = ((float)countzero/ (float)totalCount);

    printf("%d \n", totalCount);
    printf("%f \n %f \n  %f", ratioNeg, ratioPos,ratioZero);

    
    
}