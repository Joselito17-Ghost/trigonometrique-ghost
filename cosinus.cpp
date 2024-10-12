#include <iostream>

double puissance(double x, int n) {
    double result = 1;
    for(int i = 0; i < n; i++) {
        result *= x;
    }
    return result;
}

float factorielle(int n) {
    float result = 1;
    for(int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    double x;
    double cosinus = 0;

    std::cout << "Entrez la valeur de x : ";
    std::cin >> x;

    cosinus = 1 - (puissance(x, 2) / factorielle(2)) + (puissance(x, 4) / factorielle(4)) - (puissance(x, 6) / factorielle(6)) + (puissance(x, 8) / factorielle(8)) - (puissance(x, 10) / factorielle(10));

    std::cout << "Développement limité de cosinus jusqu'à factorielle de 5 : " << cosinus << std::endl;

    return 0;
}
