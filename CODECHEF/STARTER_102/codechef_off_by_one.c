

#include <stdio.h>

int main(void)
{
    int test;
    scanf("%d", &test);

    int i = 0;

    while (i < test)
    {
        int n, k;
        scanf("%d %d", &n, &k);

        if (n % 2 != 0)
        {
            printf("-1\n");
        }

        else
        {

            int a = (3 * n) / 2;
            if (k % 2 == (n / 2) % 2)
            {

                if (k < a)
                    printf("-1\n");

                else
                {

                    if (k - a + 2 > 100000)
                    {
                        if (k > (n / 2) * 100000 + (n / 2) * (99999))
                        {
                            printf("-1\n");
                        }

                        else
                        {
                            int Q = (k - a + 2) / 100000;

                            if (Q < n / 2)
                            {
                                for (int i = 0; i < n - 1; i++)
                                {

                                    if (i < n / 2)
                                    {
                                        printf("1 ");
                                    }

                                    else
                                    {
                                        if (i < n - Q - 1)
                                        {
                                            printf("2 ");
                                        }
                                        else
                                        {
                                            printf("100000 ");
                                        }
                                    }
                                }

                                printf("%d", k - (n / 2) - (n / 2 - Q - 1) * 2 - Q * 100000);
                            }

                            else
                            {
                                int R = (k - (n / 2) * 100000 - (n/2) + 1) / 99999;
                                for (int i = 0; i < n - 1; i++)
                                {

                                    if (i < n / 2)
                                    {
                                        printf("100000 ");
                                    }

                                    else
                                    {
                                        if (i < n - R - 1)
                                        {
                                            printf("1 ");
                                        }
                                        else
                                        {
                                            printf("99999 ");
                                        }
                                    }
                                }

                                printf("%d", k - (n / 2) * 100000 - (n / 2 - R - 1) * 1 - R * (99999));
                            }
                            // printf("\n");
                        }

                    }

                    else
                    {
                        for (int i = 0; i < n - 1; i++)
                        {

                            if (i < n / 2)
                                printf("1 ");

                            else
                                printf("2 ");
                        }

                        printf("%d", k - a + 2);
                    }
                    printf("\n");
                }
            }
            else
            {
                printf("-1\n");
            }
        }
        i++;
    }
    return 0;
}


