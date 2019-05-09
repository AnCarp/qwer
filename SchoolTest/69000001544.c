/*-------------------------------------------------------
【程序填空】
---------------------------------------------------------
递归函数check判断字符串s是否形成回文串。
---------------------------------------------------------*/
#include <stdio.h>
#include <string.h>
int check(char s[], int left, int right)
{
        if (left >= right)
                return 1;
        else
        {
                if (s[left] == s[right])
                        return check(s,left+1,right-1);
                else
                        return 0;
        }
}
int main()
{
        char s[3][40] = {{"ThisissisihT"}, {"RdafKCeK'e:KnlK"}, {"SxPFyga:agyFPxS"}};
        int i, p;
        for (i = 0; i < 3; i++)
        {
                p = check(s[i], 0, strlen(s[i]) - 1);
                if (p)
                        printf("%s 是回文串\n", s[i]);
                else
                        printf("%s 不是回文串\n", s[i]);
        }
        return 0;
}
