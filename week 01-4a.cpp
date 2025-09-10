// week01-4a.cpp 使用 C 語言 處理
#include <stdio.h>  // 使用 C 語言 函式庫

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);   // C語言 讀資料
    int ans = 0;
    for (int i = a; i <= b; i++) {
        if (i % 3 == 0) ans += i;
    }
    printf("%d", ans);  // C語言 輸資料
    return 0;
}
