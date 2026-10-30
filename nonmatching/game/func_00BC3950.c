/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009E1C90(M2C_UNK);                         /* extern */
s32 func_00AFBAB0(u8);                              /* extern */
s32 func_00BBB8C0(s32);                             /* extern */
extern void *Pes6Ball_Current;
extern char D_00591BE4[];
extern char D_00CBD260[];
extern char D_00CBD268[];
extern char D_00CBD269[];
extern char D_00CBD2A0[];

s32 func_00BC3950(void *arg0) {
    s32 var_v0;
    u16 temp_s1;
    u8 temp_s0;

    temp_s1 = func_00BBB8C0(((*(u8 *)D_00591BE4) / 6) + ((u8) (*(u8 *)D_00591BE4) >> 0x1F)) & 0xFFFF;
    if ((s32) (*(u16 *)D_00CBD2A0) > 0) {
        goto block_1;
    }
    if ((*(u16 *)D_00CBD260) != 0) {
        if (((func_009E1C90(1) & 0xFF) == 1) && ((*(u8 *)D_00CBD268) == M2C_FIELD(arg0, u8 *, 0x13))) {
            temp_s0 = M2C_FIELD(arg0, u8 *, 0);
            var_v0 = 1;
            if (!((*(u16 *)D_00CBD260) & (1 << (((temp_s0 & 0xFF) - (func_00AFBAB0(temp_s0) & 0xFF)) & 0xFF)))) {
                goto block_1;
            }
            (*(u8 *)D_00CBD269) = temp_s0;
            (*(u16 *)D_00CBD2A0) = temp_s1;
        } else {
            if (M2C_FIELD(Pes6Ball_Current, u16 *, 0x84) != 0xB) {
                (*(u16 *)D_00CBD260) = 0;
            }
            goto block_1;
        }
    } else {
block_1:
        var_v0 = 0;
    }
    return var_v0;
}
