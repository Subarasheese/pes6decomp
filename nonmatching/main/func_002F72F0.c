/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002873B0(void);
extern s32 func_0017F900(void);
extern void func_001ABA10(void);
extern void func_002CD320(s32);
M2C_UNK func_001FAF40(M2C_UNK, u16);                /* extern */
s32 func_0021FBC0(u16);                             /* extern */
M2C_UNK func_00256330(s32);                         /* extern */
M2C_UNK func_0026EDE0();                            /* extern */
M2C_UNK func_00361EF0(M2C_UNK, s32, M2C_UNK);       /* extern */
extern char D_00510FD0[];
extern char Pes6MatchPlayers[];
extern char D_00591A90[];
extern char D_00591BB0[];
extern char D_00591BB2[];
extern char D_005E92C8[];
extern char D_005E92CC[];
extern char D_005E92CE[];

s32 func_002F72F0(void) {
    s32 temp_a3;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_a2;
    s32 var_a4;
    void *temp_t3;

    if (func_0017F900() == 0) {
        return 0;
    }
    func_001FAF40(0, (*(u16 *)D_00591BB0));
    func_001FAF40(1, (*(u16 *)D_00591BB2));
    temp_v0 = func_0021FBC0((*(u16 *)D_00591BB0));
    if (temp_v0 != 0) {
        func_00361EF0(0, temp_v0, 3);
    }
    temp_v0_2 = func_0021FBC0((*(u16 *)D_00591BB2));
    if (temp_v0_2 != 0) {
        func_00361EF0(1, temp_v0_2, 3);
    }
    var_a2 = 1;
    do {
        if (var_a2 == 0xFF) {
            var_a4 = 1;
        } else {
            var_a4 = var_a2 % 23;
        }
        temp_t3 = ((void *)Pes6MatchPlayers) + (var_a4 * 0x240);
        M2C_FIELD(M2C_FIELD(temp_t3, void **, 4), s8 *, 0x2C) = 1;
        M2C_FIELD(temp_t3, u8 *, 0x12) = (u8) ((var_a2 / 12) + ((u32) var_a2 >> 0x1F));
        temp_a3 = var_a2 % 12;
        var_a2 += 1;
        M2C_FIELD(temp_t3, u8 *, 0x11) = (u8) M2C_FIELD((temp_a3 + (((void *)D_00591A90) + (M2C_FIELD(temp_t3, u8 *, 0x12) * 0x8B))), u8 *, 7);
    } while (var_a2 < 0x17);
    func_002CD320(0);
    func_002CD320(1);
    if (((*(s32 *)D_00510FD0) == 4) || ((*(s32 *)D_00510FD0) == 0xF)) {
        func_00256330((*(s32 *)D_00510FD0));
    }
    func_002873B0();
    func_0026EDE0();
    func_001ABA10();
    (*(s16 *)D_005E92CC) = 1;
    (*(s16 *)D_005E92CE) = 0;
    (*(s32 *)D_005E92C8) = 1;
    return 1;
}
