#include <<stdio.h>

int main() {
    int a;
    scanf("%d", &a);
     int position = findLowestSetBitPosition(a);
    
    if (position == -1)
        printf("There are no set bits in zero.\n");
    else
        printf("The first '1' bit appears at position: %d\n", position);
    
    return 0;
}