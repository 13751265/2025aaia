///week11-1.cpp
///函式/函數 function
#include <stdio.h>
///前面定義函式
///送出來的是int整數
int addnum(int a,int b)///送進去整數a,整數b
{
    printf("在函式addnum()裡,得到參數a:%d b:%d\n",a,b);
    int ans=a+b;
    printf("算出答案%d要return出去喔\n",ans);
    return ans;///把算出來的結果傳出去
}
int main()
{///主要函式,主程式
    int ans=addnum(2,3);
    printf("得到答案:%d\n",ans);
}
