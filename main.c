#include <stdio.h>

int main(void)
{

    double number1[3][3] = {
        {0.3, 0.7, 0.5},
        {0.6, 0.5, 0.2},
        {0.8, 0.1, 0.9},
    };

    double number2[3][1] = {
        {0.761},
        {0.603},
        {0.650},
    };

    double number3[3][1];

    int i, j, k;

    for (i = 0; i < sizeof(number3) / sizeof(number3[0]); i++)
    {
        for (j = 0; j < sizeof(number3[0]) / sizeof(number3[0][0]); j++)
        {
            number3[i][j] = 0;
        }
    }

    for (i = 0; i < sizeof(number1) / sizeof(number1[0]); i++)
    {
        for (j = 0; j < sizeof(number3[0]) / sizeof(number3[0][0]); j++)
        {
            for (k = 0; k < sizeof(number1[0]) / sizeof(number1[0][0]); k++)
            {
                number3[i][j] += number1[i][k] * number2[k][j];
            }
        }
    }

    for (i = 0; i < sizeof(number3) / sizeof(number3[0]); i++)
    {
        for (j = 0; j < sizeof(number3[0]) / sizeof(number3[0][0]); j++)
        {
            printf("%f ", number3[i][j]);
        }
        printf("\n");
    }

    return 0;
}
