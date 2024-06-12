#include <stdio.h>

void a(void) {
    int i = 0;
    while (i < 32) {
        printf("%d\n", i);
        i = i + 2; 
    }
}

void b(void) {
    int i = 5;
    while (i >= 0) {
        printf("%d\n", i);
        i--;
    }
}

void c(void) {
    int i = 0;
    int keep_going = 1;
    while (keep_going == 1) {
        if (i > 3) {
            keep_going = 0;
        }
        i++;
    }
    printf("%d\n", i);
}

void d(void) {
    int i;
    printf("%d", i);
    while (i > 0) {
        printf("%d\n", i);
        i--;
    }
}

void e(void) {
    int i = 0;
    int max = 32;
    while (i < max) {
        printf("%d\n", i);
        max = max * max;
    }
}

void f(void) {
    int i = 0;
    int keep_going = 0;
    while (keep_going == 1) {
        if (i > 3) {
            keep_going = 0;
        }
        i++;
    }
    printf("%d\n", i);
}

int main(void) {

    printf("What demo you want to run? ");
    char ch;
    scanf("%c", &ch);

    if (ch == 'a') {
        a();
    } else if (ch == 'b') {
        b();
    } else if (ch == 'c') {
        c();
    } else if (ch == 'd') {
        d();
    } else if (ch == 'e') {
        e();
    } else if (ch == 'f') {
        f();
    }

    return 0;
}
