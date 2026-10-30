/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00850A20(M2C_UNK);                         /* extern */
M2C_UNK func_008B2E50(s32, M2C_UNK);                /* extern */
M2C_UNK func_008B2E90(s32 *, M2C_UNK);              /* extern */
M2C_UNK func_008B2EE0(s32, s32);                    /* extern */
M2C_UNK func_008B2F10(s32, M2C_UNK);                /* extern */
M2C_UNK func_008B2F30(s32, void *);                 /* extern */
extern void *D_003E9B14;
extern char D_00510FD0[];
extern char D_008E76B0[];

void func_008C3A30(void) {
    s32 sp48;
    s32 sp4C;
    M2C_UNK *var_s0;
    s32 temp_a0;
    s32 var_s1;
    s32 var_s2;
    s8 temp_v1;

    var_s2 = 0;
    var_s1 = 0;
    var_s0 = ((void *)D_008E76B0);
    do {
        temp_a0 = M2C_FIELD((D_003E9B14 + var_s1), s32 *, 0x38);
        if (temp_a0 != 0) {
            temp_v1 = M2C_FIELD(var_s0, s8 *, 3);
            switch (temp_v1) {                      /* irregular */
            case 0:
                func_008B2F10(temp_a0, 0x6C0038);
                break;
            case 1:
                func_008B2F30(temp_a0, var_s0 + 4);
                break;
            case 2:
                func_008B2F10(temp_a0, 0x1000B);
                break;
            default:
                func_008B2F10(temp_a0, 0x1000C);
                break;
            }
        }
        if (M2C_FIELD(var_s0, s8 *, 0) == 0) {
            func_008B2E90(&sp4C, 2);
            func_008B2EE0(M2C_FIELD((D_003E9B14 + var_s1), s32 *, 0x38), sp4C);
        } else {
            func_008B2E90(&sp48, 3);
            func_008B2EE0(M2C_FIELD((D_003E9B14 + var_s1), s32 *, 0x38), sp48);
        }
        var_s2 += 1;
        var_s1 += 4;
        var_s0 += 0x34;
    } while (var_s2 < 2);
    if ((*(s32 *)D_00510FD0) != 8) {
        func_008B2E50(M2C_FIELD(D_003E9B14, s32 *, 0x3C), 1);
        return;
    }
    if ((func_00850A20(1) & 0xFF) != 0xFF) {
        func_008B2E50(M2C_FIELD(D_003E9B14, s32 *, 0x3C), 1);
        return;
    }
    func_008B2E50(M2C_FIELD(D_003E9B14, s32 *, 0x3C), 0);
}
