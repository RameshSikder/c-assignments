#include <stdio.h>
#include<stdbool.h>
#include "ramesh.h"



int main(){
    int n;
    int number;
    scanf("%d",&n);
    int arr[n];
    scanf("%d",&number);

    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int even_number = Even(arr,n); //return the count of even numbers in array
    printf("%d\n",even_number); 

    bool result = palindrome(arr, n); //check if the array is palindrome or not and return true and false
    if(result){
        printf("Palindrome\n");
    } else {
        printf("Not Palindrome\n");
    } 

    int rev_num = reverseNumber(number); // reverse the number
    printf("%d\n",rev_num);
    
    int d_Sum = digitsum(number); // sum the digits
    printf("%d\n",d_Sum);



    return 0;
}