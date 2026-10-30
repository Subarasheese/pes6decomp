/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001DF820(void *, s32);
void *func_001D6E70(s32, M2C_UNK, s32);             /* extern */
extern char D_00398400[];
extern char D_00398434[];

void func_001B8560(s32 arg0) {
    if (((*(s32 *)D_00398434) != 0) && (arg0 != 0)) {
        if (M2C_FIELD(((void *)D_00398400), void **, 0x10) != NULL) {
            func_001DF820(M2C_FIELD(M2C_FIELD(((void *)D_00398400), void **, 0x10), void **, 0xC), arg0);
        } else if (M2C_FIELD(((void *)D_00398400), s32 *, 0x14) == 0) {
            M2C_FIELD(((void *)D_00398400), void **, 0x10) = func_001D6E70(M2C_FIELD(((void *)D_00398400), s32 *, 4), 0, arg0);
        } else {
            M2C_FIELD(((void *)D_00398400), void **, 0x10) = func_001D6E70(M2C_FIELD(((void *)D_00398400), s32 *, 0x18), 0, arg0);
        }
        M2C_FIELD(((void *)D_00398400), s32 *, 0x28) = arg0;
        M2C_FIELD(((void *)D_00398400), s32 *, 0x24) = -1;
    }
}
