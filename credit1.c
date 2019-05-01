#include <stdio.h>
#include <cs50.h>

#define EVEN 1
#define ODD 0

int main(void) {
    int pt1, pt2, n, c, i, valinp;
    int v, m, a;
    int dig[100];
    int cit = EVEN;

    do {
            pt1 = 0, pt2 = 0, valinp = 1;
            for (n = 0; (c = getchar()) != EOF && c != '\n'; n++) {
                    if (c < 48 || c > 57)
                            valinp = 0;
                    c -= 48;
        dig[n] = c;
    }
    if (n == 0)
            valinp = 0;
} while (valinp == 0);

// AMEX_identify
if (dig[0] == 3 && (dig[1] == 4 || dig[1] == 7))
    a = 1;
else
    a = 0;

// Master_identify
if (dig[0] == 5 && (dig[1] == 1 || dig[1] == 2 ||
    dig[1] == 3 || dig[1] == 4 || dig[1] == 5))
    m = 1;
else
    m = 0;

// Visa_identify
if (dig[0] == 4)
    v = 1;
else
    v = 0;
//
for (i = (n - 1); i >= 0; i--) {
    if (!cit) {
        pt2 += ((dig[i] * 2) / 10 + (dig[i] * 2) % 10);
        cit = EVEN;
    } else {
        pt1 += dig[i];
        cit = ODD;
    }
}

    if (((pt1 + pt2) % 10) == 0) {
            if (v && (n == 13 || n == 16))
                    printf("VISA\n");
            else if (a && n == 15)
                    printf("AMEX\n");
            else if (m && n == 16)
                    printf("MASTERCARD\n");
            else
                    printf("INVALID\n");
    }
    else
            printf("INVALID\n");

    return 0;
}


