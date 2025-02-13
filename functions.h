#include <string> 
using namespace std;

double fraction(double x);              // Объявление функции для нахождения дробной части числа
int charToNum(char x);                  // Объявление функции для преобразования символа в число
bool isPositive(int x);                 // Объявление функции для проверки, является ли число положительным
bool isUpperCase(char x);               // Объявление функции для проверки, является ли символ заглавной буквой
int lastNumSum(int a, int b);           // Объявление функции для суммирования последних цифр
int myAbs(int x);                       // Объявление функции для получения модуля числа
bool is35(int x);                       // Объявление функции для проверки условия на 3 или 5
string makeDecision(int x, int y); // Объявление функции для сравнения двух чисел
bool sum3(int x, int y, int z);         // Объявление функции для проверки условия тройной суммы
int getDayCode(const std::string& day); // Вспомогательная функция для определения дня
void printDays(const std::string& x);   // Объявление функции для вывода дней недели
string listNums(int x);            // Объявление функции для создания строки чисел
string chet(int x);                // Объявление функции для получения четных чисел
int pow(int x, int y);                  // Объявление функции для возведения числа в степень
bool equalNum(int x);                   // Объявление функции для проверки одинаковости цифр
void guessGame();                       // Объявление функции для угадайки
int findFirst(int arr[], int size, int x); // Объявление функции для поиска первого вхождения
int maxAbs(int arr[], int size);        // Объявление функции для поиска максимального по модулю
void reverse(int arr[], int size);      // Объявление функции для реверса массива
int* add(int arr[], int size, int x, int pos); // Объявление функции для добавления элемента в массив
int* deleteNegative(int arr[], int size); // Объявление функции для удаления отрицательных элементов
