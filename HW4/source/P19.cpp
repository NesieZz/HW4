#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Header_8() {
    char string1[20];
    char string2[] = "string literal";
    int i;

    printf("Enter a string: ");
    fgets(string1, sizeof(string1), stdin);  // �ϥ� fgets Ū�J���

    // �����Ĥ@�ӳ��
    char* space_pos = strchr(string1, ' ');  // ���ťզr����m
    if (space_pos != NULL) {
        *space_pos = '\0';  // �N�Ĥ@�Ӫťզr���������פ�Ÿ� '\0'
    }

    printf("string1 is: %s\nstring2 is: %s\nstring1 with spaces between characters is\n", string1, string2);
    for (i = 0; string1[i] != '\0'; i++)
        printf("%c ", string1[i]);
    printf("\n");

    system("pause");
    return 0;
}


