#include "Header2_2.h"

int main() {
    setlocale(LC_ALL, "RUS");
    cout << "Количество чисел в массиве: " << endl;
    int size;
    cin >> size;
    cout << "Заполните массив целыми числами через Enter!" << endl;
    int* massive;
    massive = new int[size];
    int k;
    for (int i = 0; i < size; i++) {
        cin >> k;
        massive[i] = k;
    }
    cout << "\n";
    int count;//(может принимать значения 1, 2, 3).
    int sum = 0;//проверка на равенство суммы элементов массива с его первым эллементом.
    for (int i = 0; i < size; i++) {
        sum += massive[i];
    }
    if (sum == massive[0]) {
        count = 1;
    }
    if (sum > massive[0]) {
        count = 2;
    }
    if (sum < massive[0]) {
        count = 3;
    }
    int px = count;
    void (*TEMP2)(int a[], const int size);
    TEMP2 = TEMP_FOO(px);
    TEMP2(massive, size);
    print(massive, size);
    return 0;
}
