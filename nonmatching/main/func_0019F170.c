/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001864E0(s32);
extern void func_001CE800(int);
extern void func_001901A0(void);
extern void func_00181FE0(int, int);
extern void func_00181F20(s32);
M2C_UNK func_001867C0(M2C_UNK);                     /* extern */
M2C_UNK func_0018C1B0(M2C_UNK);                     /* extern */
M2C_UNK func_00194DD0(M2C_UNK);                     /* extern */
M2C_UNK func_001974E0(M2C_UNK);                     /* extern */
M2C_UNK func_001CE810();                            /* extern */
extern char D_00520343[];

s32 *func_0019F170(void *arg0) {
    s32 *var_s0;
    s32 temp_a0;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s1_3;
    s32 temp_s3;
    s32 var_s2;
    s32 var_s2_2;

    func_001CE810();
    temp_a0 = M2C_FIELD(arg0, s32 *, 0);
    var_s0 = arg0 + 4;
    switch (temp_a0) {                              /* irregular */
    case 0xFF000004:
        temp_s1 = M2C_FIELD(arg0, s32 *, 4);
        if (temp_s1 & 3) {
            func_001867C0(2);
            if (!(temp_s1 & 1)) {
                func_001974E0(1);
            } else {
                func_001974E0(0);
            }
            func_001864E0(2);
        }
        if (temp_s1 & 0xC) {
            func_001867C0(4);
            if (!(temp_s1 & 4)) {
                func_00194DD0(1);
            } else {
                func_00194DD0(0);
            }
            func_001864E0(4);
        }
        if (((*(s8 *)D_00520343) == 0) && (temp_s1 & 0x10)) {
            func_001867C0(8);
            func_001864E0(8);
        }
        if (temp_s1 & 0x40) {
            func_001867C0(0x40);
            func_001864E0(0x40);
        }
        if (temp_s1 & 0x80) {
            func_001867C0(0x80);
            func_0018C1B0(4);
            func_001864E0(0x80);
        }
        if (temp_s1 & 0x100) {
            func_001867C0(0x400);
            func_001864E0(0x400);
        }
        if (temp_s1 & 0x20) {
            func_001867C0(0x10);
            func_001901A0();
            func_001864E0(0x10);
        }
        if (temp_s1 & 0x200) {
            func_001867C0(0x800);
            func_001864E0(0x800);
        }
        if (temp_s1 & 0x400) {
            func_001867C0(0x1000);
            func_001864E0(0x1000);
        }
        if (temp_s1 & 0x800) {
            func_001867C0(0x20000);
            func_001864E0(0x20000);
        }
block_51:
        var_s0 += 4;
        break;
    case 0xFF000002:
        temp_s1_2 = M2C_FIELD(arg0, s32 *, 4);
        var_s2 = 0;
        do {
            if (temp_s1_2 & (1 << var_s2)) {
                func_00181FE0(var_s2, 0);
            }
            var_s2 += 1;
        } while (var_s2 < 0x1B);
        goto block_51;
        do {
        case 0xFF000003:
            temp_s3 = M2C_FIELD(var_s0, s32 *, 0);
            var_s2_2 = 0;
            temp_s1_3 = M2C_FIELD(var_s0, s32 *, 4);
loop_16:
            if (!(temp_s1_3 & (1 << var_s2_2))) {

            } else {
                func_00181F20(temp_s3);
            }
            var_s2_2 += 1;
            if (var_s2_2 < 0xA) {
                goto loop_16;
            }
            var_s0 += 8;
        } while ((*var_s0 & 0xFF000000) != 0xFF000000);
        break;
    case 0xFF000005:
        if (M2C_FIELD(arg0, s32 *, 4) & 1) {
            func_001CE800(temp_a0);
        }
        goto block_51;
    }
    return var_s0;
}
