/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001709E0(s32);
M2C_UNK func_00161038(M2C_UNK *);                   /* extern */
M2C_UNK func_0016D5C0(M2C_UNK);                     /* extern */
s32 func_0016D938(s32);                             /* extern */
M2C_UNK func_00170E78();                            /* extern */
extern char D_003CABE8[];

void func_00170B78(void *arg0) {
    s32 temp_s0;

    if (arg0 != NULL) {
        if ((u8) M2C_FIELD(arg0, u8 *, 2) >= 2U) {
            func_00170E78();
        }
        if (M2C_FIELD(arg0, s8 *, 1) == 0) {
            func_0016D5C0(0x5000);
            temp_s0 = func_0016D938(M2C_FIELD(arg0, s32 *, 0x18));
            func_0016D5C0(0x5001);
            if (temp_s0 < 0) {
                func_00161038(((void *)D_003CABE8));
            }
        }
        M2C_FIELD(arg0, s8 *, 0) = 0;
        func_001709E0((s32) arg0);
    }
}
