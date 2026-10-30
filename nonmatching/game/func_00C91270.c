/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00C820A0(u8 **, u8, u8 *, u8 *, u8 *, u8, u8, u8); /* extern */
extern char D_00591DCC[];
extern char D_00CCD8A0[];
extern char D_00CCD8AC[];
extern char D_00CCD8C0[];
extern char D_00CCD8C1[];
extern char D_00CCD8C2[];
extern char D_00CCD8C3[];
extern char D_00CCD8C4[];
extern char D_00CCD8C5[];
extern char D_00CCD8C6[];
extern char D_00CCD8C7[];
extern u8 *D_00CCD8C8;
extern u8 *D_00CCD8CC;

void func_00C91270(u8 *arg0, u8 *arg1) {
    u8 sp18;
    u8 sp19;
    u8 sp1A;
    u8 sp1B;
    u8 sp1C;
    u8 sp1D;
    u8 sp1E;
    u8 sp1F;
    u8 *var_a0;
    u8 *var_a1;
    u8 temp_a1;
    u8 temp_a5;
    u8 temp_a6;
    u8 temp_a7;

    var_a0 = arg0;
    var_a1 = arg1;
    if (((u64) ((s64) (*(u8 *)D_00CCD8AC) << 0x3C) >> 0x3F) != 0) {
        if (var_a0 == NULL) {
            var_a0 = &sp1C;
            sp1C = (*(u8 *)D_00CCD8C0);
            sp1D = (*(u8 *)D_00CCD8C1);
            sp1E = (*(u8 *)D_00CCD8C2);
            sp1F = (*(u8 *)D_00CCD8C3);
        }
        if (var_a1 == NULL) {
            var_a1 = &sp18;
            sp18 = (*(u8 *)D_00CCD8C4);
            sp19 = (*(u8 *)D_00CCD8C5);
            sp1A = (*(u8 *)D_00CCD8C6);
            sp1B = (*(u8 *)D_00CCD8C7);
        }
        (*(u8 *)D_00CCD8C0) = M2C_FIELD(var_a0, u8 *, 0);
        (*(u8 *)D_00CCD8C2) = M2C_FIELD(var_a0, u8 *, 2);
        (*(u8 *)D_00CCD8C1) = M2C_FIELD(var_a0, u8 *, 1);
        (*(u8 *)D_00CCD8C3) = M2C_FIELD(var_a0, u8 *, 3);
        temp_a7 = M2C_FIELD(var_a1, u8 *, 0);
        temp_a6 = M2C_FIELD(var_a1, u8 *, 1);
        temp_a5 = M2C_FIELD(var_a1, u8 *, 2);
        temp_a1 = M2C_FIELD(var_a1, u8 *, 3);
        (*(u8 *)D_00CCD8C4) = temp_a7;
        (*(u8 *)D_00CCD8C5) = temp_a6;
        (*(u8 *)D_00CCD8C6) = temp_a5;
        (*(u8 *)D_00CCD8C7) = temp_a1;
        if ((*(u8 *)D_00591DCC) == 0) {
            D_00CCD8C8 = ((void *)D_00CCD8C0);
            D_00CCD8CC = ((void *)D_00CCD8C4);
        } else {
            D_00CCD8C8 = ((void *)D_00CCD8C4);
            D_00CCD8CC = ((void *)D_00CCD8C0);
        }
        (*(s32 *)D_00CCD8A0) |= 8;
        func_00C820A0(&D_00CCD8C8, temp_a1, ((void *)D_00CCD8C6), ((void *)D_00CCD8C5), ((void *)D_00CCD8C4), temp_a5, temp_a6, temp_a7);
    }
}
