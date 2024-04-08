// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    setlocale(LC_ALL,"RU");
    float num1, num2, res;
    char action;
    std::cout << "Simple calculator :)" << std::endl;
    std::cout << "Enter first value: " << std::endl;
    std::cin >> num1;
    std::cout << "Enter second value: " << std::endl;
    std::cin >> num2;
    std::cout << "Action:  '+', '-' ,'*' ,'/' " << std::endl;
    std::cout << "Select action and write it : " << std::endl;
    std::cin >> action;
    
    switch (action)
    {
    case '+':
        res = num1 + num2;
        std::cout << "result: ";
        std::cout << res;
        break;
    case '-':
        res = num1 - num2;
        std::cout << "result: ";
        std::cout << res;

        break;
    case '*':
        res = num1 * num2;
        std::cout << "result: ";
        std::cout << res;
        break;
    case '/':
        res = num1 / num2;
        std::cout << "result: ";
        std::cout << res;
        break;

    default:
        std::cout << "Error" << std::endl;
        break;
    }
  

}   

