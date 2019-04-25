#include <stdio.h>

int cashbox(float shortChange, int max, int count);

int main()
{
    int result;
    
    float shortChange;
     
    printf("input short change: "); 
     
    scanf("%g", &shortChange);
    
    result = cashbox(shortChange, 0, 0);

    printf("\n result: %d", result);

    return 0;
}

int cashbox(float shortChange, int max, int count) {

    int shortChangeInt = shortChange*100;
    
    if (shortChangeInt == 0) return count;
    
    if (max == 0) max = 25;

    if (shortChangeInt - max < 0) { 
    
        if (max == 25) {
            return cashbox(shortChange, 10, count);
        }
        else if (max == 10) {
            return cashbox(shortChange, 5, count);
        }
        else {
            return cashbox(shortChange, 1, count);
        }
        
    }
    
    printf("%f \n", (float)max/100);
        
    count = count+1;
        
    return cashbox((float)(shortChangeInt - max)/100, max, count);
    
}
