//
// Created by nikita on 25.09.2020.
//
#include <iostream>

int main() {
    //Задание 1
    int x, y, z;
    std::cin >> x >> y >> z;
    std::cout << std::endl;
    if (x % 2 != 0 && y % 2 != 0) {
        std::cout << "condition is true";
    } else {
        std::cout << "condition is false";
    }
    if (x < 20 || y < 20) {
        std::cout << "condition is true";
    } else {
        std::cout << "condition is false";
    }
    if (x == 0 || y == 0) {
        std::cout << "condition is true";
    } else {
        std::cout << "condition is false";
    }
    if (x < 0 && y < 0 && z < 0) {
        std::cout << "condition is true";
    } else {
        std::cout << "condition is false";
    }
    if ((x % 5 == 0 && y % 5 != 0 && z % 5 != 0) || (y % 5 == 0 && z % 5 != 0 && x % 5 != 0) ||
        (z % 5 == 0 && x % 5 != 0 && y % 5 != 0)) {
        std::cout << "condition is true";
    } else {
        std::cout << "condition is false";
    }
    if (x > 100 || y > 100 || z > 100) {
        std::cout << "condition is true";
    } else {
        std::cout << "condition is false";
    }
    std::cout << std::endl;
    //Задание 2а
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;
    std::pair<int, int> position1(a, b);
    std::pair<int, int> position2(c, d);
    if (position1.first == position2.first || position2.second == position1.second) {
        std::cout << "Угрожает ладья" << std::endl;
    }
    if (abs(position1.first - position2.first) == abs(position2.second - position1.second)) {
        std::cout << "Слон угрожает" << std::endl;
    }
    if ((position1.first + 1 == position2.first && position1.second == position2.second)
        || (position1.first - 1 == position2.first && position1.second == position2.second)
        || (position1.first + 1 == position2.first && position1.second + 1 == position2.second)
        || (position1.first - 1 == position2.first && position1.second - 1 == position2.second)
        || (position1.first + 1 == position2.first && position1.second - 1 == position2.second)
        || (position1.first - 1 == position2.first && position1.second + 1 == position2.second)
        || (position1.first == position2.first && position1.second + 1 == position2.second)
        || (position1.first == position2.first && position1.second - 1 == position2.second)) {
        std::cout << "Король угрожает" << std::endl;
    }
    if (position1.first == position2.first || position2.second == position1.second ||
        abs(position1.first - position2.first) == abs(position2.second - position1.second)) {
        std::cout << "Ферзь угрожает" << std::endl;
    }
    if ((position1.second + 1 == position2.second && position1.first == position2.first) ||
        (position1.second + 2 == position2.second && position1.first == position2.first)) {
        std::cout << "Пешка дойдет" << std::endl;
    }
    if ((position1.second + 1 == position2.second && position1.first - 1 == position2.first) ||
        (position1.second + 1 == position2.second && position1.first + 1 == position2.first)) {
        std::cout << "Пешка ест" << std::endl;
    }



    //Задание 2б
    char ch;
    std::cin >> ch;
    int n = (int) ch - 96;
    std::cout << n << std::endl;
    //Задание 3
    for (int i = 1; i < 11; ++i) {
        std::cout << i;
        std::cout << " x 7 = ";
        std::cout << i * 7 << std::endl;
    }
    int ne;
    std::cin >> ne;
    for (int i = 1; i < 11; ++i) {
        std::cout << i;
        std::cout << " x " << ne << " = ";
        std::cout << i * ne << std::endl;
    }
    //Задание 4
    int k = 1;
    for (int i = 8; i < 16; i++) {
        k *= i;
    }
    std::cout << k << std::endl;
    k = 1;
    int l;
    std::cin >> l;
    for (int i = l; i < 21; i++) {
        k *= i;
    }
    std::cout << k << std::endl;
    k = 1;
    int q;
    std::cin >> q;
    for (int i = 1; i < q + 1; i++) {
        k *= i;
    }
    std::cout << k << std::endl;
    k = 1;
    int r, t;
    std::cin >> r >> t;
    for (int i = r; i < t + 1; i++) {
        k *= i;
    }
    std::cout << k << std::endl;
    k = 1;
}