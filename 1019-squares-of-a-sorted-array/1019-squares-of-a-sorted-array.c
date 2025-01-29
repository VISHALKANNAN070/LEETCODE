int cmp(const void* a,const void* b){
    return (*(int*)a-*(int*)b);
}
int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    int ptr=0;
    int index=0;
    *returnSize=numsSize;
    int* result=malloc(numsSize*sizeof(int));
    while(ptr<numsSize){
        result[index++]=(nums[ptr]*nums[ptr]);
        ptr++;
    }
    qsort(result,numsSize,sizeof(int),cmp);
    return result;
}