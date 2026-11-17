/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern int func_00288580(void);
extern s32 func_00288670(u32, u32);
s32 func_00A09950(void *, u32, s32);
extern char D_00591DF0[];
extern char D_005926D8[];
extern char D_005926FC[];
extern char Pes6MatchSquads[];

void func_00AFB7C0(void *arg0, s32 arg1, s32 arg2) {
    s32 prod;
    s32 var_s0;
    s32 var_a0;
    s32 ret;
    s32 cur;
    u16 id;

    prod = arg2 * (*(u8 *)D_00591DF0);
    var_s0 = prod / 60;
    if (arg1 >= M2C_FIELD(arg0, s32 *, 0x1C)) {
        if (func_00A09950(arg0, (u32)prod >> 0x1F, prod) == 1) {
            ret = func_00288670(M2C_FIELD(((u8 *)Pes6MatchSquads + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900) + (M2C_FIELD(arg0, u8 *, 0x11) * 0x348)), u8 *, 0x70) & 0x7F, 0x32U);
            if (((*(f32 *)D_005926D8) <= (f32) ((*(u8 *)D_005926FC) - (ret / 20))) && (cur = M2C_FIELD(arg0, s32 *, 0x1C), cur >= 0xC00)) {
                M2C_FIELD(arg0, s32 *, 0x1C) = cur + (0x1900 / (var_s0 * 2));
            } else {
                M2C_FIELD(arg0, s32 *, 0x1C) = M2C_FIELD(arg0, s32 *, 0x1C) + (0x1900 / var_s0);
            }
        } else {
            M2C_FIELD(arg0, s32 *, 0x1C) = M2C_FIELD(arg0, s32 *, 0x1C) + (0x1900 / var_s0);
        }
        if (arg1 < M2C_FIELD(arg0, s32 *, 0x1C)) {
            M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
        }
    } else {
        if (func_00288580() != 0) {
            var_s0 = (var_s0 * 0xB) / 10;
        }
        id = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x30);
        if (id == 0x114) {
            var_s0 = (var_s0 * 6) / 10;
            var_a0 = 0x1900 / var_s0;
        } else if (id == 0xB7 || id == 1) {
            var_a0 = 0x1900 / var_s0;
        } else {
            var_a0 = 0x1900 / var_s0;
        }
        if (var_a0 < M2C_FIELD(arg0, s32 *, 0x1C)) {
            M2C_FIELD(arg0, s32 *, 0x1C) = M2C_FIELD(arg0, s32 *, 0x1C) - var_a0;
            if (M2C_FIELD(arg0, s32 *, 0x1C) < arg1) {
                M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
            }
        } else {
            M2C_FIELD(arg0, s32 *, 0x1C) = 0;
        }
    }
}
