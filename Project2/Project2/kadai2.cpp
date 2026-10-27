#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


enum Customer { STUDENT = 1, ADULT, SENIOR };


int get_price(enum Customer customer)
{
    int price = 0;

    switch (customer) {
    case STUDENT:
        price = 1500;
        break;
    case ADULT:
        price = 2000;
        break;
    case SENIOR:
        price = 1300;
        break;
    default:
        price = 0;
        break;
    }

    return price;
}

int main(void)
{
    int number;
    int people;
    int price;
    int c;

    printf("利用者区分を入力してください\n");
    printf("1: 学生\n");
    printf("2: 一般\n");
    printf("3: シニア\n");

    while (1) {
        printf("> ");
        if (scanf("%d", &number) != 1) {
            while ((c = getchar()) != '\n' && c != EOF) {
                if (c == EOF) {
                    return 1;
                }
            }
            printf("正しい番号を入力してください\n");
            continue;
        }

        if (number >= STUDENT && number <= SENIOR) {
            break;
        }
        printf("正しい番号を入力してください\n");
    }

    printf("人数を入力してください\n");
    while (1) {
        printf("> ");
        if (scanf("%d", &people) != 1) {
            while ((c = getchar()) != '\n' && c != EOF) {
            }
            printf("正しい人数を入力してください\n");
            continue;
        }
        if (people >= 1) {
            break;
        }
        printf("正しい人数を入力してください\n");
    }

    price = get_price((enum Customer)number);

    printf("\n");
    printf("1人あたりの料金: %d円\n", price);
    printf("合計料金: %d円\n", price * people);

    return 0;
}