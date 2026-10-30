/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
extern void func_001D7CE0(void *, void *);
extern void func_001D7D80(void *, s16);
extern void func_001D7C20(void *, s32);
s32 func_00814FC0(M2C_UNK *, s8);                   /* extern */
M2C_UNK func_008157A0(M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_00815B70(M2C_UNK);                     /* extern */
s16 *func_008472D0();                               /* extern */
s32 func_00858FA0(void *);                          /* extern */
void *func_00858FD0(M2C_UNK *, s16);                /* extern */
M2C_UNK func_00884E20();                            /* extern */
M2C_UNK func_00D10140(M2C_UNK);                     /* extern */
extern char D_0088A870[];
extern char D_008B21C0[];
extern void *D_008B2534;
extern char D_008B2550[];
extern char D_008B2554[];
extern M2C_UNK func_00885C20;
extern M2C_UNK func_00885C50;
extern M2C_UNK func_00885C80;
extern M2C_UNK func_00885C90;

s32 func_00885940(s32 arg0, s8 arg1) {
    s32 var_s1;
    s8 var_a1;
    void *temp_s0;
    void *var_s0;

    var_a1 = arg1;
    if (arg0 != 0) {
        temp_s0 = func_00858FD0(((void *)D_008B21C0), *func_008472D0());
        if ((*(u8 *)D_008B2554) == 0) {
            func_00815B70(0);
            if (M2C_FIELD(temp_s0, s8 *, 8) != 3) {
                func_00D10140(0xF);
                func_008157A0(&func_00885C90, &func_00885C80, ((void *)D_0088A870));
            } else {
                func_00D10140(0x12);
                func_008157A0(&func_00885C50, &func_00885C20, ((void *)D_0088A870));
                if (func_00858FA0(func_00858FD0(((void *)D_008B21C0), *func_008472D0())) == 1) {
                    func_00884E20();
                }
            }
            (*(u8 *)D_008B2554) = 1;
        }
        goto block_22;
    }
    if ((*(u8 *)D_008B2554) != 0) {
        var_s0 = D_008B2534;
        var_s1 = 0;
loop_14:
        if ((*(u16 *)D_008B2550) != 0) {
            if (var_s1 < 0xE) {
                if (((s32) ((*(u16 *)D_008B2550) & 0xFFFF) >> var_s1) & 1) {
                    func_001D7CE0(M2C_FIELD(var_s0, void **, 0), var_s0 + 0x40);
                    func_001D7D80(M2C_FIELD(var_s0, void **, 0), 0);
                    func_001D7C20(M2C_FIELD(var_s0, void **, 0), 0);
                    func_001D7D60(M2C_FIELD(var_s0, void **, 0), 0);
                    M2C_FIELD(var_s0, s8 *, 0x55) = 0;
                    M2C_FIELD(var_s0, s8 *, 0x56) = 0;
                    var_a1 = M2C_FIELD(var_s0, s8 *, 0x54);
                    (*(u16 *)D_008B2550) &= ~(1 << var_a1) & 0xFFFF;
                }
                var_s1 += 1;
                var_s0 += 0x60;
                goto loop_14;
            }
        }
        if (func_00814FC0(((void *)D_0088A870), var_a1) == 0) {
            return 0;
        }
        (*(u8 *)D_008B2554) = 0;
        goto block_22;
    }
block_22:
    return 1;
}
