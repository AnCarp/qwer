/*-------------------------------------------------------
��������ա�
---------------------------------------------------------
�ݹ麯��check�ж��ַ���s�Ƿ��γɻ��Ĵ���
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
                        printf("%s �ǻ��Ĵ�\n", s[i]);
                else
                        printf("%s ���ǻ��Ĵ�\n", s[i]);
        }
        return 0;
}
