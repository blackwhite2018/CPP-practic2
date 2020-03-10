#include <iostream>
#include <stdlib.h>
#include <time.h>

void initCollection(int** collection, int rows, int cols) {
    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            collection[row][col] = 0;
        }
    }
}

void initCollection(double** collection, int rows, int cols) {
    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            collection[row][col] = 0;
        }
    }
}

void initCollection(char** collection, int rows, int cols) {
    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            collection[row][col] = '+';
        }
    }
}

void printCollection(int** collection, int rows, int cols) {
    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            std::cout << collection[row][col] << ' ';
        }
        std::cout << '\n';
    }
}

void printCollection(double** collection, int rows, int cols) {
    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            std::cout << collection[row][col] << ' ';
        }
        std::cout << '\n';
    }
}

void printCollection(char** collection, int rows, int cols) {
    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            std::cout << collection[row][col] << ' ';
        }
        std::cout << '\n';
    }
}

int getMaxMainDiagonal(int** collection, int rows, int cols) {
    int max = collection[0][0];

    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            if (collection[row][col] > max) {
                max = collection[row][col];
            }
        }
    }

    return max;
}

double getMaxMainDiagonal(double** collection, int rows, int cols) {
    double max = collection[0][0];

    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            if (collection[row][col] > max) {
                max = collection[row][col];
            }
        }
    }

    return max;
}

char getMaxMainDiagonal(char** collection, int rows, int cols) {
    char max = collection[0][0];

    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            if (collection[row][col] > max) {
                max = collection[row][col];
            }
        }
    }

    return max;
}

int getMinMainDiagonal(int** collection, int rows, int cols) {
    int min = collection[0][0];

    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            if (collection[row][col] < min) {
                min = collection[row][col];
            }
        }
    }

    return min;
}

double getMinMainDiagonal(double** collection, int rows, int cols) {
    double min = collection[0][0];

    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            if (collection[row][col] < min) {
                min = collection[row][col];
            }
        }
    }

    return min;
}

char getMinMainDiagonal(char** collection, int rows, int cols) {
    char min = collection[0][0];

    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            if (collection[row][col] < min) {
                min = collection[row][col];
            }
        }
    }

    return min;
}

int getRandomNum(int min = 1, int max = 9) {
    return rand() % (max - min + 1) + min;
}

void collectionFill(int* collection, int size) {
    for (int iter = 0; iter < size; iter++) {
        collection[iter] = getRandomNum(1, 9);
    }
}

void printCollection(int* arr, int size) {
    for (int iter = 0; iter < size; iter++) {
        std::cout << arr[iter] << ' ';
    }
}

void printCollection(int*** collection, int layers, int rows, int cols) {
    for (int layer = 0; layer < layers; layer++) {
        printCollection(collection[layer], rows, cols);
        std::cout << '\n';
    }
}

int includes(int key, int* collection, int size) {
    for (int iter = 0; iter < size; iter++) {
        if (collection[iter] == key) {
            return iter;
        }
    }

    return -1;
}

void swap(int& num1, int& num2) {
    int interim = num1;
    num1 = std::move(num2);
    num2 = std::move(interim);
}

void selectionSort(int* collection, int size) {
    for (int iter = 0; iter < size; iter++) {
        int maxCount = iter;
        for (int count = iter; count < size; count++) {
            if (collection[count] < collection[maxCount]) {
                maxCount = count;
            }
        }
        swap(collection[iter], collection[maxCount]);
    }
}

void bubbleSort(int* collection, int size) {
    bool sorted = false;

    while (!sorted) {
        sorted = true;

        for (int iter = 1; iter < size; iter++) {
            if (collection[iter] < collection[iter - 1]) {
                swap(collection[iter], collection[iter - 1]);
                sorted = false;
            }
        }
    }
}

void insertionSort(int* collection, int size) {
    for (int iter = 0; iter < size; iter++) {
        int elem = collection[iter];
        int index = iter;

        while (collection[index - 1] > elem) {
            collection[index] = collection[index - 1];
            index--;
        }

        collection[index] = elem;
    }
}

int maxElemInCollection(int* collection, int size) {
    int max = collection[0];

    for (int iter = 0; iter < size; iter++) {
        if (collection[iter] > max) {
            max = collection[iter];
        }
    }

    return max;
}

int maxElemInCollection(int** collection, int rows, int cols) {
    int
        max = collection[0][0],
        resultFuncMax;

    for (int row = 0; row < rows; row++) {
        resultFuncMax = maxElemInCollection(collection[row], cols);

        if (resultFuncMax > max) {
            max = resultFuncMax;
        }
    }

    return max;
}

int maxElemInCollection(int*** collection, int layers, int rows, int cols) {
    int
        max = collection[0][0][0],
        resultFuncMax;

    for (int layer = 0; layer < layers; layer++) {
        resultFuncMax = maxElemInCollection(collection[layer], rows, cols);

        if (resultFuncMax > max) {
            max = resultFuncMax;
        }
    }

    return max;
}

int*** create3DCollection(int layers, int rows, int cols) {
    int*** collection = new int** [layers];

    for (int layer = 0; layer < layers; layer++) {
        collection[layer] = new int* [rows];
        for (int row = 0; row < rows; row++) {
            collection[layer][row] = new int[cols] { 0 };
        }
    }

    return std::move(collection);
}

void remove3DCollection(int*** collection, int layers, int rows) {
    for (int layer = 0; layer < layers; layer++) {
        for (int row = 0; row < rows; row++) {
            delete[] collection[layer][row];
        }
        delete[] collection[layer];
    }
    delete collection;
}

void fillRandomNums(int*** collection, int layers, int rows, int cols) {
    for (int layer = 0; layer < layers; layer++) {
        for (int row = 0; row < rows; row++) {
            for (int col = 0; col < cols; col++) {
                collection[layer][row][col] = getRandomNum();
            }
        }
    }
}

int max(int num1, int num2) {
    return num1 > num2 ? num1 : num2;
}

int max(int num1, int num2, int num3) {
    return max(max(num1, num2), num3);
}

int main(int argc, char* argv[])
{
    setlocale(LC_ALL, "ru");
    srand((unsigned)time(NULL));

    /*
    ------------------------------------------------------------
        ПРОВЕРКА РАБОТОСПОСОБНОСТИ
    ------------------------------------------------------------
    int
        rows = 3,
        cols = 4;
    char** collection = new char* [rows];

    for (int row = 0; row < rows; row++) {
        collection[row] = new char [cols];
    }

    initCollection(collection, rows, cols);
    collection[0][2] = '2';
    collection[2][2] = '1';
    collection[1][1] = 't';

    printCollection(collection, rows, cols);
    std::cout << getMaxMainDiagonal(collection, rows, cols);
    */

    /*
    ------------------------------------------------------------
        ПРАКТИКА НА ЛИНЕЙНЫЙ ПОИСК (ПРОВЕРЯТЬ НЕ НУЖНО)
    ------------------------------------------------------------
    const int SIZE = 5;
    int collection[SIZE];
    int elem = 4;
    collectionFill(collection, SIZE);
    printCollection(collection, SIZE);

    std::cout << "\nПозиция элемента в массиве: " << includes(elem, collection, SIZE);
    */

    /*
    ------------------------------------------------------------
        ПРАКТИКА НА СОРТИРОВКУ ВЫБОРОМ (ПРОВЕРЯТЬ НЕ НУЖНО)
    ------------------------------------------------------------
    const int SIZE = 5;
    int collection[SIZE];
    collectionFill(collection, SIZE);
    printCollection(collection, SIZE);
    std::cout << '\n';
    selectionSort(collection, SIZE);
    printCollection(collection, SIZE);
    */

    /*
    ------------------------------------------------------------
        ПРАКТИКА НА СОРТИРОВКУ ПУЗЫРЬКОМ (ПРОВЕРЯТЬ НЕ НУЖНО)
    ------------------------------------------------------------
    const int SIZE = 5;
    int collection[SIZE];
    collectionFill(collection, SIZE);
    printCollection(collection, SIZE);
    std::cout << '\n';
    bubbleSort(collection, SIZE);
    printCollection(collection, SIZE);
    */

    /*
    ------------------------------------------------------------
        ПРАКТИКА НА СОРТИРОВКУ ВСТАВКАМИ (ПРОВЕРЯТЬ НЕ НУЖНО)
    ------------------------------------------------------------
    const int SIZE = 5;
    int collection[SIZE];
    collectionFill(collection, SIZE);
    printCollection(collection, SIZE);
    std::cout << '\n';
    insertionSort(collection, SIZE);
    printCollection(collection, SIZE);
    */


    /*
        ЗАДАНИЕ 1, ПРО СОРТИРОВКУ...ВЫШЕ НАПИСАНЫ 3 ФУНКЦИИ СОРТИРОВКИ, ЛЮБАЯ ИЗ НИХ ПОДОЙДЁТ:)
    */


    /*
    int
        layers = 2,
        rows = 3,
        cols = 4;
    int*** collection = create3DCollection(layers, rows, cols);

    fillRandomNums(collection, layers, rows, cols);
    printCollection(collection, layers, rows, cols);
    std::cout << "Нахождение максимального элемента в массиве: " << maxElemInCollection(collection, layers, rows, cols);
    remove3DCollection(collection, layers, rows);
    */

    /*
    // Назождение максимального среди 2 и 3 целых
    std::cout << max(2, 3) << '\n';
    std::cout << max(2, 4, 1) << '\n';
    */
    return 0;
}