#include <iostream>

// Faktoriális számoló függvény
float factorial(int n) {
    if (n <= 1)
        return 1.0;
    else
        return n * factorial(n - 1);
}

int main() {
    int n, k;

    // Társaság méretének bekérése
    std::cout << "Kerem, adja meg a tarsasag meretet: ";
    std::cin >> n;

    // Könyvek számának bekérése
    std::cout << "Kerem, adja meg a konyvek szamat: ";
    std::cin >> k;

    // Számítás a binomiális együtthatóval
    float ways = factorial(n) / (factorial(k) * factorial(n - k));

    // Eredmény kiírása
    std::cout << "A " << n << " embernek " << ways << " kulonbozo modon oszthatunk ki " << k << " konyvet, mindenki egyet kap." << std::endl;

    return 0;
}

