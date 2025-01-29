bool isPowerOfTwo(int n) {
    int max=pow(2,30);
    return n>0?(max%n==0):0;
}