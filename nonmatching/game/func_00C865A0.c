/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

M2C_UNK Pes6Heap_Free(void *);                      /* extern */
M2C_UNK func_001B9640(s32);                         /* extern */
s32 func_001B9750(void *, s32);                     /* extern */
M2C_UNK func_0020CFB0();                            /* extern */
void *func_00C85ED0(s32 *, s32 *, M2C_UNK *);       /* extern */
M2C_UNK func_00C86770();                            /* extern */
M2C_UNK func_00C89DB0();                            /* extern */
extern s32 *D_003EA884;
extern char func_00C85FE0[];

s32 func_00C865A0(void) {
    s32 sp4C;
    s32 flags;
    s32 var_s1;
    s32 *s0;
    void *s2;

    s0 = D_003EA884;
    var_s1 = 0;
    if (s0 == NULL) {
        var_s1 = 1;
    } else if (s0[s0[9] + 3] == 0) {
        flags = s0[12];
        if ((flags & 4) != 0) {
            func_00C89DB0();
            flags = s0[12] | 4;
            s0[12] = flags;
            s0[12] = flags ^ 4;
            s0[s0[9] + 3] = 0;
            s0[9] = 2;
        } else if ((flags & 2) != 0) {
            func_0020CFB0();
            flags = s0[12] | 2;
            s0[12] = flags;
            s0[12] = flags ^ 2;
            s0[s0[9] + 3] = 0;
            s0[9] = 0;
        } else if ((flags & 1) == 0) {
            var_s1 = 1;
        } else {
            s2 = func_00C85ED0(s0, &sp4C, (M2C_UNK *) func_00C85FE0);
            if ((s2 != NULL) && (sp4C > 0)) {
                func_001B9640(func_001B9750(s2, sp4C));
                s0[13] = 0;
                s0[14] = 0;
            }
            if (s2 != NULL) {
                Pes6Heap_Free(s2);
            }
            flags = s0[12] | 8;
            s0[12] = flags;
            flags ^= 8;
            s0[12] = flags;
            flags |= 1;
            s0[12] = flags;
            s0[12] = flags ^ 1;
            if (D_003EA884 != NULL) {
                Pes6Heap_Free(D_003EA884);
                D_003EA884 = NULL;
            }
        }
    } else {
        func_00C86770();
    }
    return var_s1;
}
