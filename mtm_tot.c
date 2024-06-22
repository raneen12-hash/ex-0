#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Enter size of input:");
    int size;
    scanf("%d", &size);
    if(size<=0)
    {
        printf("Invalid size");
    }
    else
    {
        int *arr = (int* )malloc(sizeof(int) * size);
        printf("Enter numbers:\n");
        int sum =0 , num ;
        int i=0;
        while(i!=size)
        {
            if(!(scanf("%d", &num)))
            {
                printf("Invalid number\n");
                free(arr);
                return 0;
            }
            arr[i]=num;
            i++;
        }
        for( i=0 ; i<size ; i++)
        {
            int j =0 ;
            int temp = arr[i];

            while(arr[i]>=1) {
                if (arr[i] <= 1) {
                    printf("The number %d is a power of 2 : %d=2^%d\n", temp, temp, j);
                    sum += j;
                }
                if (arr[i] % 2 == 0) {

                    arr[i] = arr[i] / 2;
                    j++;

                }
                else break;
            }
        }
        printf("Total exponent sum is %d\n" ,sum );
        free(arr);
    }
    return 0;
}
