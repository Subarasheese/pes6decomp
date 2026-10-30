/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u16 Pes6Team_GetPlayerId(s32, s32, s32);
extern void * func_00223C10(void);
extern int func_00231240(void);
s32 func_00210DF0(M2C_UNK);                         /* extern */
s32 func_00221D10(s32, s32, M2C_UNK);               /* extern */
s32 func_002260F0(s32);                             /* extern */
s32 func_00AF7090(s32, s32);                        /* extern */
s32 func_00AF70F0(s32, s32);                        /* extern */
extern char D_00591C09[];

void func_00224EB0(s32 arg0, s32 arg1, s32 arg2) {
    s16 var_s2;
    s32 temp_a0;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_v0;
    u8 *temp_v0;

    temp_a0 = arg0 & 0xFFFF;
    if ((temp_a0 < 0xFE) || (temp_a0 >= 0x10E)) {
        if ((temp_a0 >= 0xCC) && (temp_a0 < 0xDD)) {
            if (((*(u8 *)D_00591C09) == 0xE) && (func_00210DF0(0xE) == 1)) {
                var_s2 = func_00AF70F0(arg0, arg2) & 0xFFFF;
                var_v0 = func_00AF7090(arg0, arg2);
                goto block_10;
            }
        } else {
            if (temp_a0 < 0x40) {
                var_s2 = Pes6Team_GetPlayerId(arg0, arg2, 0) & 0xFFFF;
                var_v0 = func_00221D10(arg0, arg2, 0);
            } else {
                var_s2 = Pes6Team_GetPlayerId(arg0, arg2, 1) & 0xFFFF;
                var_v0 = func_00221D10(arg0, arg2, 1);
            }
block_10:
            temp_s0 = func_002260F0(arg1);
            if ((func_00231240() != 1) && (temp_s0 != 0)) {
                temp_v1 = arg2 & 0xFF;
                if (temp_v1 < 0x20) {
                    M2C_FIELD(((temp_v1 * 0x16) + temp_s0), s16 *, 0x1E4) = var_s2;
                }
            }
            temp_s0_2 = func_002260F0(arg1);
            if ((func_00231240() != 1) && (temp_s0_2 != 0)) {
                temp_v1_2 = arg2 & 0xFF;
                if (temp_v1_2 < 0x20) {
                    M2C_FIELD(((temp_v1_2 * 0x16) + temp_s0_2), s8 *, 0x1E7) = (s8) (var_v0 & 0xFF);
                }
            }
            temp_v0 = func_00223C10();
            if (temp_v0 != NULL) {
                *temp_v0 = (*temp_v0 & ~0xF) | 2;
            }
        }
    }
}
