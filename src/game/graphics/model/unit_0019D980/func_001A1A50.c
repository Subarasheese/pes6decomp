/* compiler: mwcc-3.0.1b210 */
/* Repaired from m2c output by an agent; compiles to the original instructions exactly. */
#include "pes6/m2c.h"

extern void Pes6Heap_Free(void *);
extern void func_00145590(void *);
extern void *D_00520358[];
extern char D_00520360[];
extern char D_00520374[];

void func_001A1A50(void) {
    s32 i;
    s32 j;
    void **p;
    void **q;

    (*(s16 *)D_00520374) = 0;
    p = (void **)D_00520360;
    for (i = 0; i < 0xB; i++) {
        if (p[6] != NULL) {
            Pes6Heap_Free(p[6]);
            p[6] = NULL;
        }
        p++;
    }
    q = D_00520358;
    for (j = 0; j < 2; j++) {
        if (*q != NULL) {
            func_00145590(*q);
            Pes6Heap_Free(*q);
            *q = NULL;
        }
        q++;
    }
}
