#include <stdio.h>

int check(int height, int age)
{
    if (height > 140 && age > 12)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int user_h = 150;
    int user_a = 20;

    int resulte = check(user_h, user_a);

    if (resulte == 1)
    {
        printf("Высота и возраст больше ожидаемого: больше 140 и 12 соответственно\n");
    }
    else
    {
        printf("Высота и возраст не соответствуют минимальному порогу: 140 и 12 соответственно\n");
    }

    return 0;
}
