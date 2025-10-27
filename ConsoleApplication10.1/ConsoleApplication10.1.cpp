#include <iostream>
#include <windows.h>   // для підтримки українських символів у консолі
using namespace std;

// Функція введення елементів масиву
void vvedennya(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }
}

// Функція обчислення суми чисел, кратних 5
int sumaKrat5(int arr[], int n) {
    int s = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 5 == 0)
            s += arr[i];
    }
    return s;
}

// Функція сортування масиву (методом обміну)
void sortuvannya(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    // Увімкнення українських літер у консолі Windows
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int n;
    cout << "Введіть кількість елементів у масивах: ";
    cin >> n;

    int A[100], B[100];

    cout << "\nВведення масиву A:\n";
    vvedennya(A, n);

    cout << "\nВведення масиву B:\n";
    vvedennya(B, n);

    // Обчислення суми чисел, кратних 5
    int sumaA = sumaKrat5(A, n);
    int sumaB = sumaKrat5(B, n);

    cout << "\nСума елементів кратних 5 у масиві A: " << sumaA << endl;
    cout << "Сума елементів кратних 5 у масиві B: " << sumaB << endl;

    // Сортування масивів
    sortuvannya(A, n);
    sortuvannya(B, n);

    cout << "\nВідсортований масив A: ";
    for (int i = 0; i < n; i++) cout << A[i] << " ";

    cout << "\nВідсортований масив B: ";
    for (int i = 0; i < n; i++) cout << B[i] << " ";

    cout << endl;
    return 0;
}

