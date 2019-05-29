const int tab[26] = {2, 3, 3, 2, 1, 2, 2, 2, 1, 2, 2, 2, 3, 3, 1, 1, 1, 1, 2, 1, 1, 3, 1, 3, 1, 3};
/* 500. 键盘行
 * 
 * 给定一个单词列表，只返回可以使用在键盘同一行的字母打印出来的单词。
 * 
 * 示例：
 * 输入: ["Hello", "Alaska", "Dad", "Peace"]
 * 输出: ["Alaska", "Dad"]
 */

/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** findWords(char** words, int wordsSize, int* returnSize) {
    int i, j;
    char **a = (char **)malloc(wordsSize * sizeof (int *));
    int n = 0;
    
    for (i = 0; i < wordsSize; i++) {
        int line = tab[toupper(words[i][0]) - 'A'];
        int flag = 0;
        for (j = 1; words[i][j]; j++) {
            if (line != tab[toupper(words[i][j]) - 'A']) {
                flag = 1;
                break;
            }
        }
            
        if (flag == 0) 
            a[n++] = strcpy(malloc(strlen(words[i]) + 1), words[i]);
    }
    
    *returnSize = n;
    return a;
}
