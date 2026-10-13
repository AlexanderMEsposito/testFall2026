#include <iostream>

int main()
{

    std::cout << "Hi world.\n";
    for (int i = 0; i < 1234; i++) {
        std::cout << i;
    
        char a = 65;
        std::cout << (a+=((i%26)));

}
    return 0;
}
