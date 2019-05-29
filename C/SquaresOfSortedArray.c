/* 977. 有序数组的平方
 * 
 * 给定一个按非递减顺序排序的整数数组 A，返回每个数字的平方组成的新数组，要求也按非递减顺序排序。
 * 
 * 示例 1：
 * 输入：[-4,-1,0,3,10]
 * 输出：[0,1,9,16,100]
 */

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* A, int ASize, int* returnSize){
    int *B = (int *)malloc(sizeof(int) * ASize);
    *returnSize = ASize;
    
    int *p, *q, top = ASize - 1;
    p = A, q = A + ASize - 1;
     
     while (p <= q) {
         if (abs(*p) > abs(*q))
             B[top--] = *p * *p, p++;
         else
             B[top--] = *q * *q, q--;
     }
     
    return B;
}
