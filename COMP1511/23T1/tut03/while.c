#include <stdio.h>

void a(void) {
    int i = 5;
    while (i > 0) {
        printf("%d\n", i);
        i--;
    }
}

void b(void) {
    int i = 1;
    while (i < 32) {
        printf("%d\n", i);
        i = i + i;
    }
}

void c(void) {
    int i = 0;
    while (i < 32) {
        printf("%d\n", i);
        i = i + 2;
    }
}

void d(void) {
    int i = 5;
    while (i >= 0) {
        printf("%d\n", i);
        i--;
    }
}

void e(void) {
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

void f(void) {
    int i;
    while (i > 0) {
        printf("%d\n", i);
        i--;
    }

}

void g(void) {
    int i = 0;
    int max = 32;
    while (i < max) {
        printf("%d\n", i);
        max = max + 2;
    }

}

void h(void) {
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
    } else if (ch == 'g') {
        g();
    } else if (ch == 'h') {
        h();
    }

    return 0;
}
