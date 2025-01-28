int cmp(const void* a, const void* b) { return (*(int*)a - *(int*)b); }
double minimumAverage(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(int), cmp);
    int min = 0;
    int max = numsSize - 1;
    float result = INT_MAX;
    while (min < max) {
        float average = ((nums[min] + nums[max]) / 2.0);
        min++;
        max--;
        if (result > average)
            result = average;
    }
    return result;
}