//
// Created by HanDaWoon on 2018-10-20.
//

#include<stdio.h>

int main()
{
    char ciphertext[80], tmp;
    int K;

    scanf("%d\n", &K);
    gets(ciphertext);

    for(int i = 0; ciphertext[i] != '\0'; ++i)
    {
        tmp = ciphertext[i];

        if(tmp >= 'a' && tmp <= 'z')
        {
            tmp -= K;

            if(tmp < 'a')
            {
                tmp += 'z' - 'a' + 1;
            }

            ciphertext[i] = tmp;
        }
        else if(tmp >= 'A' && tmp <= 'Z')
        {
            tmp -= K;

            if(tmp < 'A'){
                tmp += 'Z' - 'A' + 1;
            }

            ciphertext[i] = tmp;
        }
    }

    printf("%s", ciphertext);

    return 0;
}