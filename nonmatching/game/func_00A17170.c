/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00991380(u8);                              /* extern */
s32 func_009A0270();                                /* extern */
extern char D_00591BBC[];
extern char D_00591DCD[];

s32 func_00A17170(void *arg0) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_v1;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x11C) < 0x06400000U) {
        goto block_12;
    }
    temp_s0 = func_00991380((M2C_FIELD(arg0, u8 *, 0x12) ^ 1) & 0xFF);
    temp_s0_2 = func_00991380(M2C_FIELD(arg0, u8 *, 0x12)) - temp_s0;
    if (((s32) (*(u8 *)D_00591BBC) >= 2) && ((s32) (*(u8 *)D_00591DCD) > 0)) {
        temp_v1 = func_009A0270() & 0xFF;
        switch (temp_s0_2) {                        /* irregular */
        case -2:
            if (temp_v1 < 0x15) {
                if ((temp_s0_2 == -1) && (temp_v1 >= 0x1F)) {
                    goto block_9;
                }
                goto block_12;
            }
block_9:
            return 1;
        }
    } else {
block_12:
        return 0;
    }
}
