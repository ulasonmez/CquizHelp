#include <stdio.h>
#include <stdlib.h>
#include<string.h>



int main() {
    char arr[] = {'S','T','R','E','S','S','T','E','D'};
    //finds the length of the Array
    int lengthoftheArray = sizeof(arr) / sizeof(arr[0]);

    //loops until length equals to 0
    while(1){
        printf("%c",arr[lengthoftheArray-1]);
        if(lengthoftheArray==0){
            break;
        }
        lengthoftheArray--;
    }

    return 0;
}
