/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D80(void *, s16);
extern void func_001D7F10(void *);
M2C_UNK func_00B8FFF0(s32, void **, M2C_UNK);       /* extern */
M2C_UNK func_00B90360(s32 *, void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void func_00BF9560(s32 *arg0, s32 arg1, s64 arg2) {
    void *sp3C;

    sp3C = NULL;
    if ((arg0 != NULL) && (*arg0 == 0)) {
        if (arg1 == 0) {
            return;
        }
        func_00B8FFF0(arg1, &sp3C, 8);
        func_001D7D80(sp3C, (s16) ((s64) (arg2 << 0x30) >> 0x30));
        func_00B90360(arg0, sp3C, 8, 7, 8);
        func_001D7F10(sp3C);
    }
}
