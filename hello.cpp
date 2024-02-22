#include<iostream>//для реализации ввода/вывода
#include<string>//для работы со строками

int main()
{
    std::string name;
    std::cout << "Enter your name\n";
    std::cin >> name;

    std::cout << "Hello word from " << name << "\n";

    return 0;
}
