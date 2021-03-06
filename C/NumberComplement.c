/* 476. 数字的补数
 * 
 * 给定一个正整数，输出它的补数。补数是对该数的二进制表示取反。
 * 
 * 注意:
 * 
 * 给定的整数保证在32位带符号整数的范围内。
 * 你可以假定二进制数不包含前导零位。
 * 示例 1:
 * 
 * 输入: 5
 * 输出: 2
 * 解释: 5的二进制表示为101（没有前导零位），其补数为010。所以你需要输出2。
 */

int findComplement(int num) {
    int n = 0;
    unsigned int _num = num;
    
    while ((_num & 0x80000000) == 0)
        _num <<= 1, n++;
    
    return ~_num >> n;
}