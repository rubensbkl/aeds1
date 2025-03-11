#include <stdio.h>
#include <stdlib.h>

void setupArray(int *array, int x, int y){
    for (int i = 0; i < y; i++) {
        for (int j = 0; j < x; j++) {
            array[j + i*x] = 0;
        }
    }
}

void scanArray(int *array, int x, int y){
    for (int i = 0; i < y; i++) {
        for (int j = 0; j < x; j++) {
            scanf("%d", &array[j + i*x]);
        }
    }
}

void printArray(int *array, int x, int y){
    for (int i = 0; i < y; i++) {
        for (int j = 0; j < x; j++) {
                printf("%d", array[j + i*x]);
        }
        printf("\n");
    }
}

int minesAround(int *array, int x, int y, int size_x, int size_y) {
    int acc = 0;
    for (int i = y-1; i <= y+1; i++) {
        for (int j = x-1; j <= x+1; j++) {
            if (i >= 0 && j >= 0 && j < size_x && i < size_y) {
                if (array[j + i*size_x] == 9) {
                    acc++;
                }
            }
        }
    }
    return acc;
}

void setupIfMine(int *array, int x, int y) {
    for (int i = 0; i < y; i++) {
        for (int j = 0; j < x; j++) {
            if (array[j + i*x] != 9) {
                array[j + i*x] = minesAround(array, j, i, x, y);
            }
        }
    }
}


int main()
{
    int x = 0, y = 0;

    scanf("%d %d", &x, &y);

    if (x > 10 || y > 10 || x < 1 || y < 1) {
        printf("-1");
        return 0;
    }

    int *array = malloc(x * y * sizeof(int));
    setupArray(array, x, y);
    scanArray(array, x, y);
    setupIfMine(array, x, y);
    printf("%dx%d\n", x, y);
    printArray(array, x, y);

    return 0;
    
}
