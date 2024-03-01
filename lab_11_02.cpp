// (вариант 6) Дана целочисленная матрица {Aij}i=1..n,j=1..m (n,m<=100).
// Найти строку с наибольшим произведением элементов и заменить все элементы этой строки этим произведением

#include <iostream>
#include <vector>

void maxRowValue(float** p_matrix, int n, int m, int& maxRow, int maxMult)
{
    for (int i = 0; i < n; i++)
    {
        int mult = 1;
        for (int j = 0; j < m; j++)
        {
            mult *= p_matrix[i][j];
        }
        if (mult > maxMult)
        {
            maxMult = mult;
            maxRow = i;
        }
    }
    //замена эл-тов на наибольшее произведение
    for (int j = 0; j < m; j++)
    {
        p_matrix[maxRow][j] = maxMult;
    }
}

int main()
{
    int n, m;
    int maxRow = 0;
    int maxMult = 1;

    std::cout << "razmer matricy: ";
    std::cin >> n >> m;

    //создание вектора строк для 2ух мерного массива
    float** p_matrix = new float* [n];
    for (int i = 0; i < n; i++)
        p_matrix[i] = new float[m];

    //ввод
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            std::cin >> p_matrix[i][j];
 
    maxRowValue(p_matrix, n, m, maxRow, maxMult);

    //вывод
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            std::cout << p_matrix[i][j] << " ";
        }
    }

    //полное удаление
    for (int i = 0; i < n; i++)
        delete[] p_matrix[i];
    delete[] p_matrix;
}

