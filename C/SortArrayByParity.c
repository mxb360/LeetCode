/* 905. 按奇偶排序数组
 * 
 * 给定一个非负整数数组 A，返回一个数组，在该数组中， A 的所有偶数元素之后跟着所有奇数元素。
 * 你可以返回满足此条件的任何数组作为答案。
 * 
 * 示例：
 * 输入：[3,1,2,4]
 * 输出：[2,4,3,1]
 * 输出 [4,2,3,1]，[2,4,1,3] 和 [4,2,1,3] 也会被接受。
 */

/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParity(int* A, int ASize, int* returnSize) {
    int *a = (int *)malloc(ASize * sizeof (int));
    int m = 0, n = ASize - 1;
    
    for (int i = 0; i < ASize; i++)
        if (A[i] % 2)
            a[n--] = A[i];
        else 
            a[m++] = A[i];
    
    *returnSize = ASize;
    return a;
}
