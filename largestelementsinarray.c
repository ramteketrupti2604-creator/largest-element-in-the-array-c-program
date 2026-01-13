#include <stdio.h>
int main() {
    int a[5]={2,8,1,6,4}, max=a[0];
    for(int i=1;i<5;i++)
        if(a[i]>max) max=a[i];
    printf("%d", max);
    return 0;
}
