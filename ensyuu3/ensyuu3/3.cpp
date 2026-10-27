#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
    char words[3][20];
    char sentence[100];
    char key[20];
    int i;
    int found = 0;

    printf("3つの英単語を入力してください\n");
    for (i = 0; i < 3; i++) {
        printf("%d: ", i + 1);
        scanf("%19s", words[i]);
    }

    printf("\n各単語の長さ\n");
    for (i = 0; i < 3; i++) {
        printf("%s : %d\n", words[i], (int)strlen(words[i]));
    }

    strcpy(sentence, words[0]);
    for (i = 1; i < 3; i++) {
        strcat(sentence, " ");
        strcat(sentence, words[i]);
    }
    printf("\n連結した文字列:\n%s\n", sentence);


    printf("\n検索する単語を入力してください\n");
    printf("> ");
    scanf("%19s", key);

    for (i = 0; i < 3; i++) {
        if (strcmp(words[i], key) == 0) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("%s は登録されています。\n", key);
    }
    else {
        printf("%s は登録されていません。\n", key);
    }

    return 0;
}