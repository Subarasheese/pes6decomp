/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern int func_001BB430(void *);
extern void Pes6Heap_Free(void *);
extern void func_00146C70(void *);
extern char D_003D16B0[];

void func_001BBFD0(char *a0) {
    if (a0 != NULL) {
        if (func_001BB430(a0 + 0x18) != 0) {
            func_00146C70(D_003D16B0);
        } else {
            void *t = *(void **)(a0 + 0x10);
            if (t != NULL) Pes6Heap_Free(t);
            Pes6Heap_Free(a0);
        }
    }
}
