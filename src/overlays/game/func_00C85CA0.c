/* compiler: mwcc-3.0.1b198 */
#include "types.h"

extern char D_00CCCDA8[];
extern char D_00CCCDAC[];

void func_00C85CA0(char *arg0) {
    char *p;
    char *prev;
    char *head;
    char *tail;

    *(char **)(arg0 + 0x138) = 0;
    *(char **)(arg0 + 0x13C) = 0;
    head = *(char **)D_00CCCDA8;
    if (head == 0) {
        *(char **)D_00CCCDA8 = arg0;
        *(char **)D_00CCCDAC = arg0;
        return;
    }
    p = head;
    tail = *(char **)D_00CCCDAC;
    do {
        if (*(f32 *)(p + 0x7C) <= *(f32 *)(arg0 + 0x7C)) {
            if (p == head) {
                *(char **)(p + 0x138) = arg0;
                *(char **)(arg0 + 0x13C) = p;
                *(char **)D_00CCCDA8 = arg0;
                return;
            }
            prev = *(char **)(p + 0x138);
            *(char **)(prev + 0x13C) = arg0;
            *(char **)(arg0 + 0x138) = *(char **)(p + 0x138);
            *(char **)(arg0 + 0x13C) = p;
            *(char **)(p + 0x138) = arg0;
            return;
        }
        if (p == tail) {
            *(char **)(p + 0x13C) = arg0;
            *(char **)(arg0 + 0x138) = p;
            *(char **)D_00CCCDAC = arg0;
            return;
        }
        p = *(char **)(p + 0x13C);
    } while (p != 0);
}
