#include <stdio.h>
#include <math.h>

int main(void) 
{ 
    float cash;
    do {
        cash = get_float ("Change owed:\n");
        }
    while (cash<0);
    
    int roundCash = round (cash * 100);

    int countFromTwentyFive; 
    
    int countFromTen; 
    
    int countFromFive; 

    int countLessFromTwentyFive = roundCash%25;
    
    int countLessFromTen = countLessFromTwentyFive%10; 
    
    int countLessFromFive = countLessFromTen%5; 

    if (countLessFromTwentyFive == 0) countFromTwentyFive = roundCash/25;
    else countFromTwentyFive=( roundCash - countLessFromTwentyFive )/25;
    
    if (countLessFromTen == 0) countFromTen=countLessFromTwentyFive/10;
    else countFromTen=(countLessFromTwentyFive - countLessFromTen)/10;
    
    if (countLessFromFive == 0) countFromFive=countLessFromTen/5;
    else countFromFive=(countLessFromTen-countLessFromFive)/5;
    
    printf ("\n\n%i\n", countFromTwentyFive + countFromFive + countFromTen + countLessFromFive);
}    
