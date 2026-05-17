#include <stdio.h>
#include <stdbool.h>
#include <math.h>
int max(int arr[], int n);
int min(int arr[], int n);
bool isPrime(int n);
bool palindrome(int arr[], int n);
void decimalToHexa(int num);
void decimalToOctal(int num);
void decimalToBinary(int num);
int reverseNumber(int num);
int digitsum(int digit);
int sum(int arr[],int n);
int Odd(int arr[],int n);
int Even(int arr[],int n);



int max(int arr[], int n){
    int mx = arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]>mx){
            mx = arr[i];
        }
    }

    return mx;
}

int min(int arr[], int n){
    int mn = arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]<mn){
            mn = arr[i];
        }
    }

    return mn;
}

bool isPrime(int n){
    if(n<2) return false;
    if(n==2) return true;
    if(n%2 == 0) return false;
    int l = sqrt(n);
    for(int i=3; i<=l;i = i+2){
        if(n%i==0){
            return false;
        }
    }

    return true;
}

int Even(int arr[],int n){
    int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i]%2 == 0){
            count++;
        }
    }

    return count;
}

int Odd(int arr[],int n){
    int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i]%2 != 0){
            count++;
        }
    }

    return count;
}

int sum(int arr[],int n){
    int sm = 0;
    for(int i=0; i<n; i++){
        sm+= arr[i];
    }

    return sm;
}

int digitsum(int digit){
    int sum=0;
    if(digit <0){
        digit = -digit;
    }
    while(digit !=0){
        int r = digit%10;
        sum+=r;
        digit /=10;
    }

    return sum;
}

int reverseNumber(int num){
    int r_num = 0;
    if(num <0) num =-num;
    while(num > 0){
        int r = num % 10;
        r_num = r_num*10 + r;
        num /=10;
    }

    return r_num;
}

void decimalToBinary(int num){
    if(num ==0) {
        printf("0\n");
        return;
    }

    int b[32];
    int i=0;
    while(num >0){
        b[i] = num % 2;
        num /=2;
        i++;
    }

    for(int j = i-1; j>=0; j--){
        printf("%d",b[j]);
    }
    printf("\n");
}

void decimalToOctal(int num){
    if(num ==0) {
        printf("0\n");
        return;
    }

    int Oct[32];
    int i=0;
    while(num >0){
        Oct[i] = num % 8;
        num /=8;
        i++;
    }

    for(int j = i-1; j>=0; j--){
        printf("%d",Oct[j]);
    }
    printf("\n");
}

void decimalToHexa(int num){
    if(num ==0) {
        printf("0\n");
        return;
    }

    int Hexa[32];
    int i=0;
    while(num >0){
        int r = num % 16;
        if(r<10){
            Hexa[i] = r + '0';
        }
        else{
            Hexa[i] = (r-10) + 'A';
        }

        num /=16;
        i++;
    }

    for(int j = i-1; j>=0; j--){
        printf("%c",Hexa[j]);
    }
    printf("\n");
}

bool palindrome(int arr[], int n){
    for(int i = 0; i< n/2; i++){
        if(arr[i] != arr[n-i-1]){
            return false;
        }
    }
    return true;
}

