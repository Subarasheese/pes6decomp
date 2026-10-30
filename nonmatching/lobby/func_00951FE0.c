/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_001C8590(M2C_UNK *, s8 *, M2C_UNK);    /* extern */
s32 func_0082C2A0();                                /* extern */
extern char D_008A5F70[];
extern char D_008A9A78[];

s32 func_00951FE0(s8 *arg0) {
    if (func_0082C2A0() == 0) {
        return 0;
    }
    if (((void *)D_008A5F70) == NULL) {
        return 0;
    }
    if (arg0 != NULL) {
        if (*arg0 == 0) {
            func_001C48E8(((void *)D_008A9A78), 0, 0x81);
        } else {
            func_001C8590(((void *)D_008A9A78), arg0, 0x40);
        }
    } else {
        func_001C48E8(((void *)D_008A9A78), 0, 0x81);
    }
    return 1;
}
