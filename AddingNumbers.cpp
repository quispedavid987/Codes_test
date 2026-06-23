#include <iostream>

int main()
{
    int v1=1, sum=0, limit;
    std::cout << "Deseas sumar desde el 1 hasta el: ";
    std::cin >> limit;
    while (v1 <= limit)
    {
        sum += v1;
        ++v1;
    }
    std::cout << "La suma desde el 1 hasta el " << limit << " es: " << sum << std::endl;
    return 0;
}