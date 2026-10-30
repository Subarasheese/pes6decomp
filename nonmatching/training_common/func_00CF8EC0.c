/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00264790(void *, u8);
M2C_UNK func_00204D90();                            /* extern */
M2C_UNK func_002645D0(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_00271E40();                            /* extern */
M2C_UNK func_009B6810();                            /* extern */
s32 func_00CD7920();                                /* extern */
extern char D_00591DB5[];

void func_00CF8EC0(void *arg0) {
    s32 temp_v1;

    if (M2C_FIELD(arg0, s32 *, 0x28) != 0) {

    } else {
        func_00271E40();
        func_009B6810();
        if ((*(s8 *)D_00591DB5) == 0) {
            func_00204D90();
        }
    }
    if (func_00CD7920() == 0) {
        if (M2C_FIELD(arg0, s32 *, 0x28) == 0) {
            temp_v1 = M2C_FIELD(arg0, s32 *, 0x34);
            switch (temp_v1) {                      /* irregular */
            case 2:
                M2C_FIELD(arg0, s32 *, 0x34) = 0;
                func_00264790(arg0, 9U);
                func_002645D0(arg0, 6, 1);
                break;
            case 1:
                M2C_FIELD(arg0, s32 *, 0x34) = 0;
                func_00264790(arg0, 9U);
                func_002645D0(arg0, 1, 1);
                return;
            default:
                func_00264790(arg0, 4U);
                return;
            }
        }
    }
}
