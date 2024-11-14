#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Header_8() {
    char string1[20];
    char string2[] = "string literal";
    int i;

    printf("Enter a string: ");
    fgets(string1, sizeof(string1), stdin);  // 使用 fgets 讀入整行

    // 提取第一個單詞
    char* space_pos = strchr(string1, ' ');  // 找到空白字元位置
    if (space_pos != NULL) {
        *space_pos = '\0';  // 將第一個空白字元替換為終止符號 '\0'
    }

    printf("string1 is: %s\nstring2 is: %s\nstring1 with spaces between characters is\n", string1, string2);
    for (i = 0; string1[i] != '\0'; i++)
        printf("%c ", string1[i]);
    printf("\n");

    system("pause");
    return 0;
}


