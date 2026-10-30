/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D80(void *, s16);
extern void func_001D7F10(void *);
M2C_UNK func_00B8FFF0(s32, void **, M2C_UNK);       /* extern */
M2C_UNK func_00BE8AF0(s32 *, void *, M2C_UNK, M2C_UNK, s32, s32); /* extern */

void func_00BF95F0(s32 *arg0, s32 arg1, s64 arg2, s32 arg3, s32 arg4) {
    void *sp5C;

    sp5C = NULL;
    if ((arg0 != NULL) && (*arg0 == 0)) {
        if (arg1 == 0) {
            return;
        }
        func_00B8FFF0(arg1, &sp5C, 7);
        func_001D7D80(sp5C, (s16) ((s64) (arg2 << 0x30) >> 0x30));
        func_00BE8AF0(arg0, sp5C, 6, 0, arg3, arg4);
        func_001D7F10(sp5C);
    }
}
