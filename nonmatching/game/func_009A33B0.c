/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

void func_009A5E50(void *, s32, u32);
s32 func_00B29DE0(u32);
extern void *D_003EA710;
extern char D_00591DD6[];

void func_009A33B0(void) {
    s32 var_v1;
    u32 a0;
    void *s0;
    void *s1;

    if ((*(u8 *)D_00591DD6) != 0) {
        s0 = D_003EA710;
        var_v1 = 1;
        if (M2C_FIELD(s0, s32 *, 0) != 1) {
            a0 = M2C_FIELD(s0, u32 *, 0x10);
            if (a0 != 0) {
                var_v1 = ((u32) M2C_FIELD(s0, u32 *, 0x14) % a0) == 0;
            }
            if (((var_v1 != 0) || (M2C_FIELD(s0, s32 *, 0x28) != 0)) && (M2C_FIELD(s0, s32 *, 0x24) == 0) && (func_00B29DE0(a0) != 0)) {
                u32 idx = M2C_FIELD(s0, u32 *, 0x18);
                u32 lim;
                s1 = M2C_FIELD(s0, u8 **, 8) + idx * 0x10DA0;
                func_009A5E50(s1, M2C_FIELD(s0, s32 *, 0), idx);
                M2C_FIELD(s1, s32 *, 8) = M2C_FIELD(s0, s32 *, 0x30);
                M2C_FIELD(s0, u32 *, 0x18) = M2C_FIELD(s0, u32 *, 0x18) + 1;
                lim = M2C_FIELD(s0, u32 *, 0xC);
                if (M2C_FIELD(s0, u32 *, 0x18) >= lim) {
                    M2C_FIELD(s0, u32 *, 0x18) = M2C_FIELD(s0, u32 *, 0x18) - lim;
                }
                if (M2C_FIELD(s0, u32 *, 0x1C) == M2C_FIELD(s0, u32 *, 0x18)) {
                    M2C_FIELD(s0, u32 *, 0x1C) = M2C_FIELD(s0, u32 *, 0x1C) + 1;
                    lim = M2C_FIELD(s0, u32 *, 0xC);
                    if (M2C_FIELD(s0, u32 *, 0x1C) >= lim) {
                        M2C_FIELD(s0, u32 *, 0x1C) = M2C_FIELD(s0, u32 *, 0x1C) - lim;
                    }
                }
                M2C_FIELD(s0, s32 *, 0x14) = 0;
                M2C_FIELD(s0, s32 *, 0x28) = 0;
            }
        }
        M2C_FIELD(s0, s32 *, 0x78) = 1;
    }
}
