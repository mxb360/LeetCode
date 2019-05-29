/* 852. 山脉数组的峰顶索引
 * 
 * 我们把符合下列属性的数组 A 称作山脉：
 *     A.length >= 3
 *     存在 0 < i < A.length - 1 使得A[0] < A[1] < ... A[i-1] < A[i] > A[i+1] > ... > A[A.length - 1]
 * 
 * 给定一个确定为山脉的数组，返回任何满足 
 *     A[0] < A[1] < ... A[i-1] < A[i] > A[i+1] > ... > A[A.length - 1] 
 * 的 i 的值。
 * 
 * 
 * 示例 1：
 * 
 * 输入：[0,1,0]
 * 输出：1
 */

int peakIndexInMountainArray(int* A, int ASize) {
    int lft = 0, rgt = ASize  - 1;
    int mid;
    
    
    while (lft < rgt) {
        if (A[lft] > A[lft + 1])
            return lft;
        else if (A[rgt - 1] < A[rgt])
            return rgt;
        
        mid = lft + (rgt - lft) / 2;
        if (A[mid] > A[mid - 1] && A[mid] > A[mid + 1])
            return mid;
        else if (A[mid] > A[mid - 1] && A[mid] < A[mid + 1])
            lft = mid + 1;
        else
            rgt = mid - 1;
    }
    
    return -1;
}
