/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern unsigned long func_00110F00(unsigned int, unsigned int);
extern int func_001112D0(int);
extern int func_001063D8(unsigned int);
M2C_UNK WaitSema(s32);                         /* extern */
s32 sceSifDmaStat(s32);                             /* extern */
M2C_UNK printf(M2C_UNK *);                   /* extern */
s32 sceSifSendCmd(M2C_UNK, void *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_001110B0(u32, M2C_UNK, s32);               /* extern */
extern char D_003DCBA0[];
extern char D_005E9940[];
extern char D_005E99C0[];

s32 func_002FADF8(s32 arg0) {
    s32 temp_s0;
    s32 temp_v0;
    s32 var_s1;
    u32 temp_s4;

    M2C_FIELD(((void *)D_005E99C0), s32 *, 0xC) = arg0;
    var_s1 = 0x3B;
    M2C_FIELD(((void *)D_005E9940), s32 *, 0x64) = 0;
    temp_s4 = func_00110F00(0U, 0x7A120U);
loop_3:
    temp_v0 = sceSifSendCmd(0x80000017, ((void *)D_005E99C0) - 0x6640, 0x10, 0, 0, 0);
    if (temp_v0 == 0) {
        func_001063D8(0x64U);
        goto loop_3;
    }
loop_7:
    if (sceSifDmaStat(temp_v0) >= 0) {
        func_001063D8(0x64U);
        goto loop_7;
    }
    temp_s0 = func_001110B0(temp_s4, 0x2FAFB0, M2C_FIELD(((void *)D_005E9940), s32 *, 0x60));
    WaitSema(M2C_FIELD(((void *)D_005E9940), s32 *, 0x60));
    if (M2C_FIELD(((void *)D_005E9940), s32 *, 0x64) == 3) {
        printf((M2C_UNK *)0x3DCB68);
        func_001112D0(temp_s0);
        return 0x16;
    }
    var_s1 -= 1;
    if (M2C_FIELD(((void *)D_005E9940), s32 *, 0x64) != 0) {
        func_001112D0(temp_s0);
        return 0;
    }
    if (var_s1 == -1) {
        printf(((void *)D_003DCBA0));
        return 0x8001;
    }
    goto loop_3;
}
