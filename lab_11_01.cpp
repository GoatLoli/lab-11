//(вариант 6) Дана последовательность натуральных чисел{ aj }j = 1...n(n <= 10000).
// Если в последовательности нет ни одного простого числа, упорядочить последовательность по неубыванию.

#include <iostream>
#include <vector>
#include <algorithm>

bool isPrime(float* p_mas, int n, int x)
{
    for (int i = 0; i < n; i++)
        int x = p_mas[i];

    if (x < 2)
        return false;
    if (x == 2)
        return true;
    for (int div = 2; div <= sqrt(x) + 1; div++)
        if (x % div == 0)
            return false;
    return true;
}
  
bool hasPrime(float* p_mas, int n, int x)
{
    for (int i = 0; i < n; i++)
        if (isPrime(p_mas, n, x))
        {
            return true;
            break;
        }
    return false; 
}


int main()
{
    int n;
    int x;

    //кол-во
    std::cout << "kol-vo chisel: ";
    std::cin >> n;

    //выделение памяти

    float* p_mas = new float[n];

    //ввод
    std::cout << "chisla v mas: ";
    for (int i = 0; i < n; i++)
    {
        std::cin >> p_mas[i];
    }
 
    //сортировка при отсутствии простых
    if (hasPrime)
    {
        std::sort(p_mas, p_mas + n);
        std::cout << "prostyh net: ";
        for (int i = 0; i < n; i++)
            std::cout << p_mas[i];
    }
    else
        std::cout << "soderzhit prostye";


    delete[] p_mas;

}
