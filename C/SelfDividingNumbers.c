/* 728. 自除数
 * 自除数 是指可以被它包含的每一位数除尽的数。
 * 例如，128 是一个自除数，因为 128 % 1 == 0，128 % 2 == 0，128 % 8 == 0。
 * 还有，自除数不允许包含 0 。
 * 给定上边界和下边界数字，输出一个列表，列表的元素是边界（含边界）内所有的自除数。
 * 
 * 示例 1：
 * 输入： 
 * 上边界left = 1, 下边界right = 22
 * 输出： [1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 12, 15, 22]
 */

int iszcs(int n)
{
    int _n = n;
    while (n) {
        if (n % 10 == 0 || _n % (n % 10))
            return 0;
        n /= 10;
    }
    return 1;
}

/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* selfDividingNumbers(int left, int right, int* returnSize) {
    int i, n = 0;
    int *a = (int *)malloc((right - left + 1) * sizeof(int));
    
    for (i = left; i <= right; i++)
        if (iszcs(i))
            a[n++] = i;
    
    *returnSize = n;
    return a;
}
