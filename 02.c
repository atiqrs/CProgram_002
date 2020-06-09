#include <stdio.h>
    void main ()
    {
        int number[21];
        int i, j, a, n;
        scanf("%d", &n);

        if(0 < n && n < 21){
        //input numbers
            for (i = 0; i < n; ++i)
                scanf("%d", &number[i]);
        //short numbers
            for (i = 0; i < n; ++i)
            {
                for (j = i + 1; j < n; ++j)
                {
                    if (number[i] < number[j])
                    {
                        a = number[i];
                        number[i] = number[j];
                        number[j] = a;
                    }
                }
            }
            //prints smallest, largest, 2nd smallest and 2nd largest element
            printf("\n%d %d %d %d", number[n - 1], number[0], number[n - 2] , number[1]);
        }
}
