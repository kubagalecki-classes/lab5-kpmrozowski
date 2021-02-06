#include "Human.hpp"
#include <iostream>
#include <memory>
#include <vector>

int main()
{
    std::vector< Human > humans1(2);
    std::string          imie{"."};
    for (int i = 1; i <= 2; i++) {
        std::cout << "Utworz czlowieka nr " << i << "/3:\nImie: ";
        std::cin >> imie;
        humans1[i - 1] = std::move(Human(imie, 10, 1, 1));
    }

    std::vector< Human > humans2;
    imie = ".";
    for (int i = 1; i <= 3; i++) {
        std::cout << "Utworz czlowieka nr " << i << "/3:\nImie: ";
        std::cin >> imie;
        humans2.push_back(std::move(Human(imie, 10, 1, 1)));
    }

    std::vector< Human > humans3;
    imie = ".";
    for (int i = 1; i <= 4; i++) {
        std::cout << "Utworz czlowieka nr " << i << "/4:\nImie: ";
        std::cin >> imie;
        if (imie == "pop") {
            humans3.pop_back();
            i = i - 2;
        }
        else
            humans3.emplace_back(std::move(Human(std::move(imie), 10, 1, 1)));
    }
    return 0;
}