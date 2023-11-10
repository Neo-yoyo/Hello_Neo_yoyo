#include <iostream>

#include "subtree/vector.h"

int main() {
    /// Создаем вектор типа int и задаем его размер
    Vector<int> v(5);

    /// Вставляем элементы в вектор
    v.PushBack(1);
    v.PushBack(2);
    v.PushBack(3);
    v.PushBack(4);
    v.PushBack(5);

    /// Выводим элементы вектора
    for (const auto& elem : v) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;

}

