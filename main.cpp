#include <iostream>
#include "seven.h"

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
