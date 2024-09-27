#include "functions.h"
#include <sstream>
#include <iostream> // Необходимо для вывода
#include <cstdlib>  // Необходимо для rand() и srand()
using namespace std;

double fraction(double x) {
    int a = int (x);
    return x - a;
}

int charToNum(char x) {
    return static_cast<int>(x) - static_cast<int>('0'); // Преобразование символа в число
}

bool isPositive(int x) {
    return x > 0; // Проверка, является ли число положительным
}

bool isUpperCase(char x) {
    return x >= 'A' && x <= 'Z'; // Проверка на заглавную букву
}

int lastNumSum(int a, int b) {
    return (a % 10) + (b % 10); // Сумма последних цифр
}

int myAbs(int x) {
    return (x < 0) ? -x : x; // Возвращает модуль числа
}

bool is35(int x) {
    // Проверяем, делится ли x на 3 или на 5
    bool divisibleBy3 = (x % 3 == 0);
    bool divisibleBy5 = (x % 5 == 0);
    
    // Возвращаем true, если x делится на 3 или на 5, но не на оба
    return (divisibleBy3 || divisibleBy5) && !(divisibleBy3 && divisibleBy5);
}

string makeDecision(int x, int y) {
    ostringstream result; // Используем ostringstream для формирования строки
    result << x;

    if (x < y) {
        result << "< " << y;
    } else if (x > y) {
        result << " >" << y;
    } else {
        result << "==" << y;
    }

    return result.str(); // Возвращаем сформированную строку
}

bool sum3(int x, int y, int z) { return (x + y == z) || (x + z == y) || (y + z == x); // Проверка, можно ли сложить два числа, чтобы получить третье
}

int getDayCode(const string& day) {
    if (day == "понедельник") return 1;
    if (day == "вторник") return 2;
    if (day == "среда") return 3;
    if (day == "четверг") return 4;
    if (day == "пятница") return 5;
    if (day == "суббота") return 6;
    if (day == "воскресенье") return 7;
    return 0; // Неверный день
}

void printDays(const string& day) {
    switch (getDayCode(day)) {
        case 1:
            cout << "понедельник\nвторник\nсреда\nчетверг\nпятница\nсуббота\nвоскресенье\n";
            break;
        case 2:
            cout << "вторник\nсреда\nчетверг\nпятница\nсуббота\nвоскресенье\n";
            break;
        case 3:
            cout << "среда\nчетверг\nпятница\nсуббота\nвоскресенье\n";
            break;
        case 4:
            cout << "четверг\nпятница\nсуббота\nвоскресенье\n";
            break;
        case 5:
            cout << "пятница\nсуббота\nвоскресенье\n";
            break;
        case 6:
            cout << "суббота\nвоскресенье\n";
            break;
        case 7:
            cout << "воскресенье\n";
            break;
        default:
            cout << "это не день недели\n";
            break;
    }
}


string listNums(int x) {
    ostringstream result; // Используем ostringstream для формирования строки
    for (int i = 0; i <= x; ++i) {
        result << i; // Добавляем текущее число
        if (i < x) result << " "; // Добавляем пробел после числа, если это не последнее
    }
    return result.str(); // Возвращаем сформированную строку
}

string chet(int x) {
    ostringstream result; // Используем ostringstream для формирования строки
    for (int i = 0; i <= x; i += 2) { // Начинаем с 0 и увеличиваем на 2
        result << i; // Добавляем текущее четное число
        if (i < x - 1) result << " "; // Добавляем пробел, если это не последнее четное число
    }
    return result.str(); // Возвращаем сформированную строку
}

int pow(int x, int y) {
    int result = 1; // Начинаем с единицы
    for (int i = 0; i < y; ++i) {
        result *= x; // Умножаем результат на x y раз
    }
    return result; // Возвращаем результат возведения в степень
}

bool equalNum(int x) {
    if (x == 0) return true; // Если число 0, считаем его одинаковым
    int lastDigit = myAbs(x % 10); // Получаем последнюю цифру
    x = myAbs(x / 10); // Убираем последнюю цифру

    while (x > 0) {
        if (myAbs(x % 10) != lastDigit) {
            return false; // Если нашли отличающуюся цифру, возвращаем false
        }
        x /= 10; // Удаляем последнюю цифру
    }
    return true; // Все цифры одинаковые
}

void guessGame() {
    srand(static_cast<unsigned int>(time(0))); // Инициализация генератора случайных чисел
    int secretNumber = rand() % 10; // Генерация числа от 0 до 9
    int guess;
    int attempts = 0;

    std::cout << "Введите число от 0 до 9:\n";
    
    do {
        cin >> guess; // Ввод числа пользователем
        attempts++; // Увеличиваем количество попыток
        
        if (guess < 0 || guess > 9) {
            std::cout << "Пожалуйста, введите число в диапазоне от 0 до 9.\n";
            continue; // Пропускаем итерацию, если число вне диапазона
        }

        if (guess == secretNumber) {
            cout << "Вы угадали!\n";
        } else {
            cout << "Вы не угадали, введите число от 0 до 9:\n";
        }
    } while (guess != secretNumber);
    
    std::cout << "Вы отгадали число за " << attempts << " попытки(ок).\n";
}

int findFirst(int arr[], int size, int x) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == x) {
            return i; // Возвращаем индекс первого вхождения
        }
    }
    return -1; // Если число не найдено, возвращаем -1
}

int maxAbs(int* arr, int size) {
    int maxValue = arr[0]; // Инициализируем с первым элементом 

    for (int i = 1; i < size; ++i) {
        if (abs(arr[i]) > abs(maxValue)) {
            maxValue = arr[i]; // Находим максимальное по модулю значение
        }
    }
    return maxValue; // Возвращаем значение с максимальным модулем
}

void reverse(int arr[], int size) {
    int start = 0; // Начинаем с первого элемента
    int end = size - 1; // Конец - последний элемент

    while (start < end) {
        // Меняем местами элементы
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++; // Идем к следующему элементу спереди
        end--;   // Идем к следующему элементу сзади
    }
}

int* add(int arr[], int size, int x, int pos) {
    if (pos < 0 || pos > size) {
        return nullptr; // Возвращаем nullptr, если позиция некорректна
    }

    // Создаем новый массив размером size + 1
    int *newArr = new int[size + 1];

    // Копируем элементы в новый массив
    for (int i = 0; i < size + 1; ++i) {
        if (i < pos) {
            newArr[i] = arr[i]; // Копируем элементы до позиции вставки
        } else if (i == pos) {
            newArr[i] = x; // Вставляем новый элемент
        } else {
            newArr[i] = arr[i - 1]; // Копируем оставшиеся элементы
        }
    }

    return newArr; // Возвращаем новый массив
}

int* deleteNegative(int arr[], int size) {
    // Сначала посчитаем количество неотрицательных чисел
    int countPositive = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] >= 0) {
            countPositive++;
        }
    }

    // Создаем новый массив для хранения неотрицательных чисел
    int *newArr = new int[countPositive];
    int index = 0;

    // Копируем неотрицательные числа в новый массив
    for (int i = 0; i < size; i++) {
        if (arr[i] >= 0) {
            newArr[index++] = arr[i];
        }
    }

    return newArr; // Возвращаем новый массив
}
