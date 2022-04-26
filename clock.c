#include <stdio.h>

typedef struct {
    int hours, minutes, seconds;
} time;

void setTime(time *t);
void getTime(time *t);

void main() {
    time t;
    setTime(&t);
    getTime(&t);
}

void setTime(time *t) {
    printf("\nHour: \n");
    scanf("%d", &t->hours);

    printf("Minute: \n");
    scanf("%d", &t->minutes);

    printf("Seconds: \n");
    scanf("%d", &t->seconds);
}

void getTime(time *t) {
    printf("%d:%d:%d\n", t->hours, t->minutes, t->seconds);
}