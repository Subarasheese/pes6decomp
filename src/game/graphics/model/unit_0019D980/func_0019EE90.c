/* compiler: mwcc-3.0.1b210 */
/* Repaired from m2c output by an agent; compiles to the original instructions exactly. */
#include "pes6/m2c.h"

extern void func_00145590(s32);
extern void Pes6Heap_Free(s32);
extern s32 D_00520320[];

void func_0019EE90(void) {
    s32 i;

    for (i = 0; i < 4; i++) {
        if (D_00520320[i] != 0) {
            func_00145590(D_00520320[i]);
            Pes6Heap_Free(D_00520320[i]);
            D_00520320[i] = 0;
        }
    }
}
