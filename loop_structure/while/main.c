/*
Write a program that determine and show the first 5 numbers multiple of 3, considering 
numbers between 1 and 100. 
*/
#include <stdio.h>

int main(){
    int number = 1;
    int counter = 0;
    while (number <= 100 && counter < 5){
        if (number % 3 ==0 ){
            counter++;
            printf("%d\n", number);
        }
        number++;
    }
}