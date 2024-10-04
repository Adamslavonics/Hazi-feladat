#include <iostream>
using namespace std;

int main() 
{
    std::cout << "Szamok, amik oszthatok 5-tel es 7-tel:\n";
    for (int szam = 1; szam <= 100; szam++) {
        if (szam % 5 == 0 && szam % 7 == 0) {
            std::cout << szam << " ";
        }
    }
    std::cout << "\n\n";

    std::cout << "Szamok, amik oszthatok 5-tel vagy 7-tel:\n";
    for (int szam = 1; szam <= 100; szam++) {
        if (szam % 5 == 0 || szam % 7 == 0) {
            std::cout << szam << " ";
        }
    }
    cout << endl;
    system("pause");

    return 0;
}
