#include <iostream>

int main()
{
    std::cout << "UP & DOWN GAME \n" << std::endl;
    srand((unsigned int)time(0));

    int num{ 0 }, count{ 1 }, answer{ rand() % 99 + 10 };

    while (num != answer)
    {
        std::cout << "Input Number (10 ~ 99) : ";
        std::cin >> num;

        if (num < 10 || num >= 100)
        {
            std::cout << "\n" << "Re-input Number : " << "\n" << std::endl;
            continue;
        }

        if (num > answer)
        {
            std::cout << "\n" << "                     ก้ DOWN ก้" << "\n" << std::endl;
            count++;
        }
        else if (num < answer)
        {
            std::cout << "\n" << "                      ก่ UP ก่" << "\n" << std::endl;
            count++;
        }
        else
        {
            std::cout << "\n" << "Correct!" << "\n" << std::endl;
            std::cout << "Attempts : " << count << std::endl;
        }
    }
}