#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int n = 15;  /// константа, которую мы хотим найти

int main() {
    vector<int> ls(n);  /// создаем список на n элементов
    int a = 0;
    for (int i = 0; i < n; i++) {
        ls[i] = i;  /// заполняем значениями
    }
    while (next_permutation(ls.begin(), ls.end())) {  /// получение всех перестановок списка
        a++;  /// простое действие с единичным временем исполнения
    }
    cout << a;  /// выводить ответ нужно для того, чтобы получать нужный вердикт в системе
    return 0;
}
