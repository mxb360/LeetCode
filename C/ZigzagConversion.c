/* 6. Z 字形变换
 *
 * 将一个给定字符串根据给定的行数，以从上往下、从左到右进行 Z 字形排列。
 * 
 * 比如输入字符串为 "LEETCODEISHIRING" 行数为 3 时，排列如下：
 * 
 * L   C   I   R
 * E T O E S I I G
 * E   D   H   N
 * 之后，你的输出需要从左往右逐行读取，产生出一个新的字符串，比如："LCIRETOESIIGEDHN"。
 * 
 * 请你实现这个将字符串进行指定行数变换的函数：
 * 
 * string convert(string s, int numRows);
 * 示例 1:
 * 
 * 输入: s = "LEETCODEISHIRING", numRows = 3
 * 输出: "LCIRETOESIIGEDHN"
 * 示例 2:
 * 
 * 输入: s = "LEETCODEISHIRING", numRows = 4
 * 输出: "LDREOEIIECIHNTSG"
 * 解释:
 * 
 * L     D     R
 * E   O E   I I
 * E C   I H   N
 * T     S     G
 */

char * convert(char * s, int numRows){
    int len = strlen(s);
    int n = 2 * (numRows - 1);
    int i, j;
    
    char *buf = (char *)malloc(len + 1);
    char *_buf = buf;
    
    if (n == 0)
        return strcpy(buf, s);
    
    for (i = 0; i < numRows; i++) {
        for (j = 0; j <= len + n; j += n) {
            if (i > 0 && i < numRows - 1 && j - i >= 0 && j - i < len)
                *buf++ = s[j - i];
            if (j + i < len)
                *buf++ = s[j + i];
        }
    }
    
    *buf = 0;
    return _buf;
}
