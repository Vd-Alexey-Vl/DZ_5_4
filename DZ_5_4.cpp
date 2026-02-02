#include <iostream>
#include <windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    {
        int mass[10] = { 11,15,60,32,12,13,61,7,89,6 };
        int n = sizeof(mass) / sizeof(mass[0]);
        std::cout << "Массив до сортировки: ";
        for (int i = 0; i < n; i++)
        {
            std::cout << mass[i] << " ";
        }
        std::cout << std::endl;

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                if (mass[j] < mass[j + 1])
                {
                    int temp = mass[j];
                    mass[j] = mass[j + 1];
                    mass[j + 1] = temp;
                }
            }
        }

        std::cout << "Массив после сортировки: ";
        for (int i = 0; i < n; i++)
        {
            std::cout << mass[i] << " ";
        }
        std::cout << std::endl;

        return EXIT_SUCCESS;
    }
}
