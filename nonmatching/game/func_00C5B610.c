/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00C132C0(void *);
extern u8 func_00C132B0(void *);
s32 func_002C19F0(s32, M2C_UNK, M2C_UNK);           /* extern */
u32 func_00C13640(s32, M2C_UNK *, s32);             /* extern */
extern char D_00CB3450[];
extern char D_00CB3468[];
extern char D_00CB3470[];
extern char D_00CB3480[];

s32 func_00C5B610(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_s2;
    u32 temp_s1;
    u32 temp_v0_2;

    var_s2 = 0;
    if ((arg0 != -1) && (arg1 != -1)) {
        temp_s0 = arg2 & 0xFF;
        temp_v0 = func_002C19F0((((temp_s0 >> 5) & 1) ^ 1) & 0xFF, 0xC, 1);
        if (temp_v0 != -1) {
            temp_s1 = func_00C13640(temp_v0, ((void *)D_00CB3450), (*(s32 *)D_00CB3468));
            temp_v0_2 = func_00C13640(temp_v0, ((void *)D_00CB3470), (*(s32 *)D_00CB3480));
            if ((temp_s1 != -1U) && ((temp_v0_2 == -1U) || (temp_v0_2 >= temp_s1)) && (temp_s0 == (func_00C132B0((void *) temp_s1) & 0xFF))) {
                temp_v1 = func_00C132C0((void *) temp_s1) & 0xFF;
                if ((temp_v1 != 0x14) && (temp_v1 != 0x17) && (temp_v1 != 0x18)) {

                } else {
                    var_s2 = 1;
                }
            }
        }
    }
    return var_s2;
}
