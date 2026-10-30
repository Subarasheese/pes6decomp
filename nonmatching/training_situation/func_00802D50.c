/* compiler: mwcc-3.0.1b198 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001D7D60(s32, M2C_UNK);                /* extern */
M2C_UNK func_00803A80();                            /* extern */
s32 func_00804900();                                /* extern */
void *func_00CDC590();                              /* extern */
extern void *D_003E7E1C;
extern char D_00CFF0B0[];
extern char D_00CFF0C4[];
extern char D_00CFF0C8[];

void func_00802D50(void) {
    s32 temp_v1;

    if (func_00804900() == 0) {
        if (M2C_FIELD(D_003E7E1C, s32 *, 8) != 0) {
            func_00803A80();
        }
        switch ((*(s32 *)D_00CFF0B0)) {                       /* irregular */
        case 0:
            temp_v1 = M2C_FIELD(func_00CDC590(), s32 *, 0xEC);
            if ((temp_v1 != 0x1D) && (temp_v1 != 0x1C) && (temp_v1 != 0x1B) && (temp_v1 != 0x1A) && (temp_v1 != 0x19)) {
                func_001D7D60(*(s32 *)0xCFF0C4, 0);
                func_001D7D60((*(s32 *)D_00CFF0C8), 1);
                return;
            }
            func_001D7D60((*(s32 *)D_00CFF0C4), 1);
            func_001D7D60((*(s32 *)D_00CFF0C8), 1);
            return;
        case 1:
            func_001D7D60((*(s32 *)D_00CFF0C4), 1);
            func_001D7D60((*(s32 *)D_00CFF0C8), 0);
            return;
        }
    } else {
        func_001D7D60((*(s32 *)D_00CFF0C4), 0);
        func_001D7D60((*(s32 *)D_00CFF0C8), 0);
    }
}
