#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d" ,&a,&b);
    int r=~(1<<b);
    result=r&a;
    printf("%d",result);
    
    return 0;
}