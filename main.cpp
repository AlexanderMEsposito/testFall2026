#include <iostream>

double approximateSeven(int amt)
{

    static double vals[] = {1, 4, 2, 8, 5, 7};

    double sum = 0;
    double n = 10;

    for (int i = 0; i < amt; i++)
    {
        sum += vals[i % 6] / n;

        n *= 10;
    }

    return 1 / sum;

}


int main()
{

    std::cout << "Hi world.\n";
    for (int i = 0; i < 1234; i++) {
        std::cout << i;
    
        char a = 65;
        std::cout << (a+=((i%26)));

}

    std::cout << "\n7 = " << approximateSeven(3) << '\n';

    return 0;
}
