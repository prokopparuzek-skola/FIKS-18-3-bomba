#include <stdio.h>

int main() {
    int n, m;
    int draty[4];
    int *last, *ac, *swap;
    last = &draty[2];
    last[0] = -1;
    last[1] = -1;
    ac = draty;

    scanf("%d%d", &n, &m);
    for (; m > 0; m--) {
        scanf("%d%d", &ac[0], &ac[1]);
        if (*last != -1) {
            if ((ac[0] == last[1] && ac[1] > last[1]) || (ac[0] == last[0] && ac[1] == last[1]));
            else {
                puts("tddm");
                return 0;
            }
        }
        swap = ac;
        ac = last;
        last = swap;
    }
    puts("bum");
    return 0;
}
