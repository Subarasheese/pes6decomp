/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
extern char D_00398400[];
extern char D_00398434[];

void func_001B84D0(s8 arg0) {
    if ((*(s32 *)D_00398434) != 0) {
        if ((M2C_FIELD(((void *)D_00398400), s32 *, 0x20) != 2) && (M2C_FIELD(((void *)D_00398400), s32 *, 0x20) != 1) && (M2C_FIELD(((void *)D_00398400), s32 *, 0x20) != 0)) {
            func_001D7D60(M2C_FIELD(((void *)D_00398400), void **, 0x14), arg0);
        } else {
            func_001D7D60(M2C_FIELD(((void *)D_00398400), void **, 0), arg0);
        }
        M2C_FIELD(((void *)D_00398400), s8 *, 0x2C) = arg0;
    }
}
