/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D80(void *, s16);
extern void func_001D7F10(void *);
M2C_UNK func_00B8FFF0(s32, void **, M2C_UNK);       /* extern */
M2C_UNK func_00B906F0(s32, M2C_UNK, void *, M2C_UNK); /* extern */

void func_00BF96A0(s32 arg0, s32 arg1, s16 arg2) {
    void *sp3C;

    sp3C = NULL;
    func_00B8FFF0(arg1, &sp3C, 0);
    func_001D7D80(sp3C, arg2);
    func_00B906F0(arg0, 0, sp3C, 0);
    func_001D7F10(sp3C);
}
