/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009B30B0(u16, u16);                        /* extern */
s32 func_00A09950(void *);                          /* extern */
s32 func_00C20350(s32, M2C_UNK);                    /* extern */
M2C_UNK func_00C20600(void *, u16, u16, s32, s32);  /* extern */
extern void *Pes6Ball_Current;
extern char D_00591BEC[];
extern char D_00591E4C[];
extern char D_005926DC[];

void func_00C1F8F0(void *arg0, u16 arg1, s32 arg2) {
    s16 var_v0;
    s32 var_a3;
    u16 temp_s0;

    if ((M2C_FIELD(arg0, u8 *, 0x3E) == (*(u8 *)D_005926DC)) && (func_00C20350(arg2, 0) != 0)) {
        M2C_FIELD(arg0, s8 *, 0x45) = 0x90;
        return;
    }
    temp_s0 = M2C_FIELD(arg0, u16 *, 0xA8);
    if (((func_009B30B0(temp_s0, M2C_FIELD(Pes6Ball_Current, u16 *, 0x58)) & 0xFFFF) < 0x31) && ((func_009B30B0(temp_s0, arg1) & 0xFFFF) < 0x31)) {
        var_v0 = 2;
    } else if (((func_009B30B0(temp_s0, arg1) & 0xFFFF) < 0x16) && (arg2 >= 0x180)) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x114) < 0x1001U) {
            if ((*(u8 *)D_00591E4C) != 0) {
                if (func_00A09950(arg0) == 0) {
                    goto block_18;
                }
                goto block_12;
            }
block_12:
            var_v0 = 4;
        } else {
block_18:
            var_v0 = 2;
        }
    } else {
        var_v0 = 4;
    }
    M2C_FIELD(arg0, s16 *, 0x3A) = var_v0;
    var_a3 = (s32) ((f32) arg2 * (*(f32 *)D_00591BEC));
    if (var_a3 < 0x20000) {
        var_a3 = 0x1100;
    }
    func_00C20600(arg0, arg1, temp_s0, var_a3, arg2);
}
