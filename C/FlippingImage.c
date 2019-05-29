/* 832. 翻转图像
 * 
 * 给定一个二进制矩阵 A，我们想先水平翻转图像，然后反转图像并返回结果。
 * 水平翻转图片就是将图片的每一行都进行翻转，即逆序。例如，水平翻转 [1, 1, 0] 的结果是 [0, 1, 1]。
 * 反转图片的意思是图片中的 0 全部被 1 替换， 1 全部被 0 替换。例如，反转 [0, 1, 1] 的结果是 [1, 0, 0]。
 * 
 * 示例 1:
 * 输入: [[1,1,0],[1,0,1],[0,0,0]]
 * 输出: [[1,0,0],[0,1,0],[1,1,1]]
 * 解释: 首先翻转每一行: [[0,1,1],[1,0,1],[0,0,0]]；
 *       然后反转图片: [[1,0,0],[0,1,0],[1,1,1]]
 */

/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** flipAndInvertImage(int** A, int ASize, int* AColSize, int* returnSize, int** returnColumnSizes){
    int **B = (int **)malloc(sizeof(int *) * ASize);
    *returnColumnSizes = (int *)malloc(sizeof(int) * ASize);
    *returnSize = ASize;
    memcpy(*returnColumnSizes, AColSize, sizeof(int) * ASize);

    for (int i = 0; i < ASize; i++) {
        B[i] = (int *)malloc(sizeof(int) * AColSize[i]);
        for (int j = 0; j < AColSize[i]; j++) 
            B[i][j] = !A[i][AColSize[i] - 1 - j];
    }

    return B;
}
