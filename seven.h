#pragma once

double approximateSeven(int amt)
{
    if (amt == 0) return 8;

    static double vals[] = {1, 4, 2, 8, 5, approximateSeven(amt - 1)};

    double sum = 0;
    double n = 10;

    for (int i = 0; i < amt; i++)
    {
        sum += vals[i % 6] / n;

        n *= 10;
    }

    return 1 / sum;

}


