/* 709. 转换成小写字母
 * 
 * 实现函数 ToLowerCase()，
 * 该函数接收一个字符串参数 str，并将该字符串中的大写字母转换成小写字母，之后返回新的字符串。
 * 
 * 示例 1：
 * 
 * 输入: "Hello"
 * 输出: "hello"
 */

char * toLowerCase(char * str){
    int i;
    char *new_str = (char *)malloc(strlen(str) + 1);
    
    for (i = 0; str[i]; i++)
        new_str[i] = tolower(str[i]);
    new_str[i] = 0;
    
    return new_str;
}
