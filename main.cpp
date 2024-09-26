// main.cpp
#include <iostream>
#include "functions.h"

int main() {
    int taskChoice;
    char continueResponse;
    bool continueProgram = true;
    while (continueProgram) {
        std::cout << "Выберите задачу:\n";
        std::cout << "1. Дробная часть числа\n";
        std::cout << "2. Преобразовать символ в число\n";
        std::cout << "3. Есть ли позитив\n";
        std::cout << "4. Проверить, является ли буква заглавной\n";
        std::cout << "5. Многократный вызов\n"; // Задача многократного вызова
        std::cout << "6. Модуль числа\n"; // Задача модуля числа
        std::cout << "7. Тридцать пять\n"; // Задача проверки числа
        std::cout << "8. Строка сравнения\n"; // Задача сравнения
        std::cout << "9. Тройная сумма\n"; // Задача тройной суммы
        std::cout << "10. Вывод дней недели\n"; // Задача вывода дней недели
        std::cout << "11. Числа подряд\n"; // Задача чисел подряд
        std::cout << "12. Четные числа\n"; // Задача четных чисел
        std::cout << "13. Степень числа\n"; // Задача степени числа
        std::cout << "14. Одинаковость\n"; // Задача одинаковости цифр
        std::cout << "15. Угадайка\n"; // Задача угадайки
        std::cout << "16. Поиск первого значения\n"; // Задача поиска первого значения
        std::cout << "17. Поиск максимального по модулю\n"; // Задача поиска максимального по модулю
        std::cout << "18. Реверс массива\n"; // Задача реверса массива
        std::cout << "19. Добавление в массив\n"; // Задача добавления в массив
        std::cout << "20. Удалить негатив\n"; // Новая задача
        std::cout << "Введите номер задачи (1-20): ";
    
        std::cin >> taskChoice;

        if (taskChoice == 1) {
            double num;
            std::cout << "Введите число: ";
            std::cin >> num;double result = fraction(num); // Вызов функции для нахождения дробной части
            std::cout << "Дробная часть числа " << num << " равна " << result << std::endl;

        } else if (taskChoice == 2) {
            char ch;
            std::cout << "Введите символ: ";
            std::cin >> ch;
    
            int result = charToNum(ch); // Вызов функции для преобразования символа в число
            std::cout << "Числовое представление символа '" << ch << "' равно " << result << std::endl;

        } else if (taskChoice == 3) {
            int x;
            std::cout << "Введите число: ";
            std::cin >> x;
    
            bool result = isPositive(x); // Вызов функции для проверки, положительное ли число
            std::cout << "Число " << x << (result ? " положительное." : " не положительное.") << std::endl;

        } else if (taskChoice == 4) {
            char ch;
            std::cout << "Введите символ: ";
            std::cin >> ch;
    
            bool result = isUpperCase(ch); // Вызов функции для проверки, является ли буква заглавной
            std::cout << "Символ '" << ch << (result ? "' является заглавной буквой." : "' не является заглавной буквой.") << std::endl;

        } else if (taskChoice == 5) {
            int sum = 0;
            for (int i = 0; i < 5; i++) {
                int num;
                std::cout << "Введите число " << (i + 1) << ": ";
                std::cin >> num;
                sum = lastNumSum(sum, num); // Суммируем последние цифры
                std::cout << "Текущая сумма последних цифр: " << sum << std::endl;
            }

        } else if (taskChoice == 6) {
            int num;
            std::cout << "Введите число: ";
            std::cin >> num;
    
            int result = myAbs(num); // Вызов функции для получения модуля числа
            std::cout << "Модуль числа " << num << " равен " << result << std::endl;

        } else if (taskChoice == 7) {
            int num;
            std::cout << "Введите число: ";
            std::cin >> num;

            bool result = is35(num); // Вызов функции для проверки числа
            std::cout << "Для x = " << num << ", результат: " << std::boolalpha << result << std::endl;

        } else if (taskChoice == 8) {
            int x, y;
            std::cout << "Введите число x: ";
            std::cin >> x;
            std::cout << "Введите число y: ";
            std::cin >> y;

            std::string result = makeDecision(x, y); // Вызов функции для строки сравнения
            std::cout << "Результат сравнения: " << result << std::endl;

        } else if (taskChoice == 9) {
            int x, y, z;
            std::cout << "Введите число x: ";
            std::cin >> x;
            std::cout << "Введите число y: ";
            std::cin >> y;
            std::cout << "Введите число z: ";
            std::cin >> z;

            bool result = sum3(x, y, z); // Вызов функции для тройной суммы
            std::cout << "Результат проверки тройной суммы: " << (result ? "true" : "false") << std::endl;

        } else if (taskChoice == 10) {
            std::string day;
            std::cout << "Введите день недели: ";
            std::cin >> day;

            printDays(day); // Вызов функции для вывода дней недели

        } else if (taskChoice == 11) {
            int x;
            std::cout << "Введите число: ";
            std::cin >> x;

            std::string result = listNums(x); // Вызов функции для получения строки чисел
            std::cout << "Числа от 0 до " << x << ": " << result << std::endl;

        } else if (taskChoice == 12) {
            int x;
            std::cout << "Введите число: ";
            std::cin >> x;

            std::string result = chet(x); // Вызов функции для получения строки четных чисел
            std::cout << "Четные числа от 0 до " << x << ": " << result << std::endl;

        } else if (taskChoice == 13) {
            int x, y;std::cout << "Введите число x: ";
            std::cin >> x;
            std::cout << "Введите число y: ";
            std::cin >> y;

            int result = pow(x, y); // Вызов функции для возведения числа в степень
            std::cout << x << " в степени " << y << " равно " << result << std::endl;

        } else if (taskChoice == 14) {
            int x;
            std::cout << "Введите число: ";
            std::cin >> x;

            bool result = equalNum(x); // Вызов функции для проверки одинаковости цифр
            std::cout << "Все цифры числа " << x << (result ? " одинаковые." : " не одинаковые.") << std::endl;

        } else if (taskChoice == 15) {
            guessGame(); // Вызов функции для угадайки
    
        } else if (taskChoice == 16) {
            int size;
            std::cout << "Введите размер массива: ";
            std::cin >> size;

            int *arr = new int[size]; // Динамическое выделение памяти под массив
            std::cout << "Введите элементы массива:\n";
        
            for (int i = 0; i < size; ++i) {
                std::cin >> arr[i]; // Ввод элементов массива
            }

            int x;
            std::cout << "Введите число для поиска: ";
            std::cin >> x;

            int result = findFirst(arr, size, x); // Вызов функции для поиска первого вхождения
            if (result != -1) {
                std::cout << "Индекс первого вхождения числа " << x << ": " << result << std::endl;
            } else {
                std::cout << "Число " << x << " не найдено в массиве." << std::endl;
            }

            delete[] arr; // Освобождаем выделенную память

        } else if (taskChoice == 17) {
            int size;
            std::cout << "Введите размер массива: ";
            std::cin >> size;

            int *arr = new int[size]; // Динамическое выделение памяти под массив
            std::cout << "Введите элементы массива:\n";

            for (int i = 0; i < size; ++i) {
                std::cin >> arr[i]; // Ввод элементов массива
            }

            int result = maxAbs(arr, size); // Вызов функции для поиска максимального по модулю
            std::cout << "Максимальное по модулю значение в массиве: " << result << std::endl;

            delete[] arr; // Освобождаем выделенную память

        } else if (taskChoice == 18) {
            int size;
            std::cout << "Введите размер массива: ";
            std::cin >> size;

            int *arr = new int[size]; // Динамическое выделение памяти под массив
            std::cout << "Введите элементы массива:\n";

            for (int i = 0; i < size; ++i) {
                std::cin >> arr[i]; // Ввод элементов массива
            }

            reverse(arr, size); // Вызов функции для реверса массива

            std::cout << "Массив после реверса:\n";
            for (int i = 0; i < size; ++i) {
                std::cout << arr[i] << " "; // Вывод измененного массива
            }
            std::cout << std::endl;

            delete[] arr; // Освобождаем выделенную память

        } else if (taskChoice == 19) {
            int size;
            std::cout << "Введите размер массива: ";
            std::cin >> size;

            int *arr = new int[size]; // Динамическое выделение памяти под массив
            std::cout << "Введите элементы массива:\n";

            for (int i = 0; i < size; ++i) {
                std::cin >> arr[i]; // Ввод элементов массива
            }

            int x, pos;
            std::cout << "Введите число для добавления: ";
            std::cin >> x;
            std::cout << "Введите позицию для добавления: ";
            std::cin >> pos;

            int *newArr = add(arr, size, x, pos); // Вызов функции для добавления элемента

            if (newArr) {
                std::cout << "Массив после добавления:\n";
                for (int i = 0; i < size + 1; ++i) {
                    std::cout << newArr[i] << " "; // Вывод измененного массива
                } std::cout << std::endl;

                delete[] newArr; // Освобождаем выделенную память нового массива
            } else {
                std::cout << "Ошибка: Неверная позиция для вставки." << std::endl;
            }

            delete[] arr; // Освобождаем выделенную память исходного массива

        } else if (taskChoice == 20) {
            int size;
            std::cout << "Введите размер массива: ";
            std::cin >> size;

            int *arr = new int[size]; // Динамическое выделение памяти под массив
            std::cout << "Введите элементы массива:\n";

            for (int i = 0; i < size; ++i) {
                std::cin >> arr[i]; // Ввод элементов массива
            }

            int *newArr = deleteNegative(arr, size); // Вызов функции для удаления негативных элементов

            std::cout << "Массив без негативных элементов:\n";
            for (int i = 0; i < size; ++i) {
                if (newArr[i] == '\0') break; // Если достигли конца нового массива
                std::cout << newArr[i] << " "; // Вывод нового массива
            }
            std::cout << std::endl;

            delete[] arr; // Освобождаем выделенную память исходного массива
            delete[] newArr; // Освобождаем выделенную память нового массива

        } else {
            std::cout << "Ошибка: Неверный выбор задачи." << std::endl;
        

    } // Вопрос о завершении работы программы
        std::cout << "Хотите продолжить работу? (y/n): ";
        std::cin >> continueResponse;

        if (continueResponse != 'y' && continueResponse != 'Y') {
            continueProgram = false; // Завершение работы программы
        }

    }

    std::cout << "Спасибо за использование программы!" << std::endl;
    return 0;
}