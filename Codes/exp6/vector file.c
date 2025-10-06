#include <stdio.h>

int dotProduct(int *vec1, int *vec2, int size) {
    int result = 0;
    for (int i = 0; i < size; i++) {
        result += (*(vec1 + i)) * (*(vec2 + i));
    }
    return result;
}

int main() {
    int vec1[100], vec2[100], n;

    printf("Enter the size of the vectors: ");
    scanf("%d", &n);

    printf("Enter %d elements for the first vector:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &vec1[i]);
    }

    printf("Enter %d elements for the second vector:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &vec2[i]);
    }

    int result = dotProduct(vec1, vec2, n);
    printf("Dot product of the vectors: %d\n", result);

    return 0;
}
