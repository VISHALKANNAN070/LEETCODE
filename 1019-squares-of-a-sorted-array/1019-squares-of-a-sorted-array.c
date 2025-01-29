int cmp(const void* a, const void* b) { return (*(int*)a - *(int*)b); }
int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    int ptr1 = 0;
    int ptr2 = numsSize - 1;
    int index = numsSize-1;
    *returnSize = numsSize;
    int* result = malloc(numsSize * sizeof(int));
    while (ptr1 <= ptr2) {
        if (abs(nums[ptr1]) < abs(nums[ptr2])) {
            result[index--] = (nums[ptr2] * nums[ptr2]);
            ptr2--;
        }

        else {
            result[index--] = (nums[ptr1] * nums[ptr1]);
            ptr1++;
        }
    }
    return result;
}