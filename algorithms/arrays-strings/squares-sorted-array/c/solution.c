#include <stdlib.h>
#include <stdio.h>

int compare(const void * a, const void * b) {
    return ( *(int *)a - *(int *)b);
}

int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;
    int* temp = (int*) malloc((*returnSize) * sizeof(int));
    for(int i = 0; i < numsSize; i++) {
        temp[i] = nums[i] * nums[i];
    }

    qsort(temp, numsSize, sizeof(int), compare);
    return temp;
}

int main() {
    // [-4, -1, 0, 3, 10] = [0, 1, 9, 16, 100]
    // [0, 3, 5, 4, 9] = [0, 9, 16, 25, 81]
    int nums[] = {-4, -1, 0, 3, 10};
    int size = sizeof(nums) / sizeof(nums[0]);

    int* ans = sortedSquares(nums, size, &size);
    for(int i = 0; i < size; i++) {
        printf("%d, ", ans[i]);
    }
    printf("\n");
    return 0;
}
