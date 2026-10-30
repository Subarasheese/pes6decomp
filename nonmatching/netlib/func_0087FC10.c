/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00110E58(unsigned long long, void *, void *);
u64 func_001105C8();                                /* extern */
s16 *func_008472D0(s32, M2C_UNK, s32);              /* extern */
s64 func_00858B60(M2C_UNK *, M2C_UNK);              /* extern */
s32 func_00858FA0(s32);                             /* extern */
s32 func_00858FD0(M2C_UNK *, s16);                  /* extern */
s32 func_0085EC80(s32, M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
extern s32 D_003EA388;
extern char D_0058D7A0[];
extern char D_0058D7C0[];
extern char D_0058D7C4[];
extern char D_0058D7C8[];
extern char D_0058D7CC[];
extern char D_0058D7D0[];
extern char D_0058D7D4[];
extern char D_0058D7D8[];
extern char D_0058D7DC[];
extern char D_0058D7E4[];
extern char D_0058D7E8[];
extern char D_0058D7EC[];
extern char D_0058D7F0[];
extern char D_0058D7F4[];
extern char D_0058D808[];
extern char D_008B21C0[];
extern M2C_UNK func_0087FF80;
extern M2C_UNK func_008802D0;

void func_0087FC10(s32 arg0) {
    s32 sp48;
    s32 sp4C;
    M2C_UNK *var_s0;
    s32 temp_a0;
    s32 var_s1;

    (*(M2C_UNK32 *)D_0058D7E4) = 0;
    var_s1 = 0;
    if ((((s64) (func_00858B60(((void *)D_008B21C0), 1) << 0x38) >> 0x38) - 1) >= 0) {
        var_s0 = ((void *)D_0058D7A0);
        do {
            M2C_FIELD(var_s0, s8 *, 0x40) = -1;
            M2C_FIELD(var_s0, s8 *, 0x48) = -1;
            M2C_FIELD(var_s0, s8 *, 0x50) = -1;
            var_s1 += 1;
            M2C_FIELD(var_s0, s8 *, 0x4C) = 0;
            var_s0 += 1;
        } while ((((s64) (func_00858B60(((void *)D_008B21C0), 1) << 0x38) >> 0x38) - 1) >= var_s1);
    }
    (*(M2C_UNK32 *)D_0058D7D0) = (*(M2C_UNK32 *)D_0058D7E4);
    (*(f32 *)D_0058D7D4) = (*(f32 *)D_0058D7E8);
    (*(f32 *)D_0058D7D8) = (*(f32 *)D_0058D7EC);
    (*(f32 *)D_0058D7DC) = (*(f32 *)D_0058D7F0);
    (*(M2C_UNK32 *)D_0058D7C0) = (*(M2C_UNK32 *)D_0058D7E4);
    (*(f32 *)D_0058D7C4) = (*(f32 *)D_0058D7E8);
    (*(f32 *)D_0058D7C8) = (*(f32 *)D_0058D7EC);
    (*(f32 *)D_0058D7CC) = (*(f32 *)D_0058D7F0);
    func_00110E58(func_001105C8(), &sp4C, &sp48);
    (*(s32 *)D_0058D808) = 0;
    temp_a0 = sp48 / 1000;
    (*(s32 *)D_0058D7F4) = temp_a0 + (sp4C * 0x3E8);
    if (func_00858FA0(func_00858FD0(((void *)D_008B21C0), *func_008472D0(temp_a0, 0x10624DD3, sp48))) != 1) {
        D_003EA388 = func_0085EC80(arg0, 1, &func_0087FF80, &func_008802D0) == arg0;
    }
}
