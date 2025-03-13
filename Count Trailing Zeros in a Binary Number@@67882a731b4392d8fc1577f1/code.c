#include <stdio.h>

int main() 
int countTrailingZeroes(int num) 
    if (num == 0) {
        return sizeof(int) * 8; 
    }
    
    int count = 0;
    while ((num & 1) == 0) { 
        count++;
        num >>= 1; 
    }
    return 0;
}