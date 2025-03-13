#include <stdio.h>

// Function to count trailing zeroes in binary representation
int countTrailingZeroes(int num) {
    if (num == 0) {
        return sizeof(int) * 8; // If num is 0, return total bits in an integer
    }
    
    int count = 0;
    while ((num & 1) == 0) { // Check the least significant bit
        count++;
        num >>= 1; // Right shift the number
    }
    return count;
}