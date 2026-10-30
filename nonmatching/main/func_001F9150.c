/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_001CDAA0(void);
extern void func_0027B5E0(int);
extern void func_00208270(int);
extern void func_00288560(void);
extern void func_002CA690(u32, s32);
extern void func_0027CF30(int);
extern void func_002CA6B0(u8, s32);
M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_003624F0(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_003710E0(M2C_UNK, s32, M2C_UNK *, M2C_UNK *, void *, void *, void *, void *); /* extern */
extern char D_003AA440[];
extern char D_003AA980[];
extern char D_003C54C0[];
extern M2C_UNK *D_003E758C;
extern char D_00591A90[];
extern char D_00591BB4[];
extern char D_00591BB6[];
extern char D_00591BB7[];
extern char D_00591BE0[];
extern char D_00591BE4[];
extern char D_00591E00[];
extern char D_00592743[];
extern char D_00592800[];
extern char D_00592803[];
extern char D_00592828[];
extern char D_0059282B[];
extern char D_00592850[];
extern char D_00592853[];
extern char D_00592878[];
extern char D_0059287B[];
extern char D_005928A0[];
extern char D_005928A3[];
extern char D_005928C8[];
extern char D_005928CB[];
extern char D_005928F0[];
extern char D_005928F3[];
extern char D_00592918[];
extern char D_0059291B[];
extern char D_005A2020[];
extern char D_005A3040[];
extern char D_0061CC10[];
extern char D_00CB52A0[];
extern char D_00CBD370[];
extern char D_00CBD374[];
extern char D_00CBD378[];
extern char D_00CBD37C[];
extern char D_00CBD380[];
extern char D_00CBD384[];
extern char D_00CBD390[];
extern char D_00CBD394[];
extern char D_00CBD398[];
extern char D_00CBD39C[];
extern char D_00CBD3A0[];
extern char D_00CBD3A4[];

void func_001F9150(void) {
    M2C_UNK *var_a0_2;
    M2C_UNK *var_a2;
    M2C_UNK *var_a3;
    M2C_UNK *var_s1;
    M2C_UNK *var_s2;
    s32 var_a0;
    s32 var_a1;
    s32 var_s0;
    s32 var_s3;
    s32 var_v1;
    u8 *temp_a1;
    void *temp_a4;
    void *temp_a5;
    void *temp_a6;
    void *temp_a7;
    void *temp_t0;

    func_001C48E8(((void *)D_00591E00), 0, 0x90C);
    func_001C48E8(((void *)D_00591BE0), 0, 0x214);
    func_001C48E8(((void *)D_00CB52A0), 0, 0xC3C);
    func_00208270((s32) ((void *)D_003AA440));
    func_0027B5E0((s32) ((void *)D_003AA980));
    func_00288560();
    var_s0 = 0;
    var_s2 = ((void *)D_0061CC10);
    do {
        var_s3 = 0;
        var_s1 = var_s2;
loop_2:
        func_003624F0(var_s1, 0xFFFF);
        var_s3 += 1;
        var_s1 += 0x19A;
        if (var_s3 < 0xA) {
            goto loop_2;
        }
        var_s0 += 1;
        var_s2 += 0x1004;
    } while (var_s0 < 2);
    var_a1 = 0;
    var_a3 = ((void *)D_00591A90);
    var_a2 = ((void *)D_005A2020);
    do {
        M2C_FIELD(var_a3, s8 *, 0) = 0xFF;
        var_a0 = 0;
        M2C_FIELD(var_a3, s8 *, 1) = 0xFF;
        M2C_FIELD(var_a3, s8 *, 2) = 0xFF;
        M2C_FIELD(var_a3, s8 *, 3) = 0xFF;
        M2C_FIELD(var_a3, s8 *, 4) = 0xFF;
loop_6:
        M2C_FIELD((var_a2 + (M2C_FIELD(var_a2, u8 *, 1) * 0x52) + var_a0), s8 *, 0x27) = 0;
        temp_t0 = var_a2 + (M2C_FIELD(var_a2, u8 *, 1) * 0x52);
        temp_a7 = temp_t0 + var_a0;
        M2C_FIELD(temp_a7, s8 *, 0x32) = 1;
        temp_a6 = var_a2 + (M2C_FIELD(var_a2, u8 *, 1) * 0x52);
        temp_a5 = temp_a6 + var_a0;
        M2C_FIELD(temp_a5, s8 *, 0x28) = 0;
        var_a0 += 5;
        M2C_FIELD(temp_a7, s8 *, 0x33) = 1;
        M2C_FIELD(temp_a5, s8 *, 0x29) = 0;
        M2C_FIELD(temp_a7, s8 *, 0x34) = 1;
        M2C_FIELD(temp_a5, s8 *, 0x2A) = 0;
        M2C_FIELD(temp_a7, s8 *, 0x35) = 1;
        M2C_FIELD(temp_a5, s8 *, 0x2B) = 0;
        M2C_FIELD(temp_a7, s8 *, 0x36) = 1;
        if (var_a0 < 6) {
            goto loop_6;
        }
        temp_a4 = temp_a6 + var_a0;
        var_a1 += 1;
        M2C_FIELD(temp_a4, s8 *, 0x27) = 0;
        M2C_FIELD((temp_t0 + var_a0), s8 *, 0x32) = 1;
        var_a3 += 0x8B;
        var_a2 += 0x168;
    } while (var_a1 < 2);
    (*(s8 *)D_00592743) = 2;
    (*(s8 *)D_00591BB7) = 0;
    (*(s8 *)D_00591BB6) = 0;
    func_003710E0(2, var_a1, var_a2, var_a3, temp_a4, temp_a5, temp_a6, temp_a7);
    var_v1 = 0;
    var_a0_2 = ((void *)D_005A2020);
    do {
        M2C_FIELD(var_a0_2, s8 *, 0x150) = 0;
        var_v1 += 1;
        M2C_FIELD(var_a0_2, s8 *, 0x151) = 0;
        var_a0_2 += 0x168;
    } while (var_v1 < 2);
    (*(s8 *)D_00592803) = 4;
    (*(s8 *)D_0059282B) = 4;
    (*(s8 *)D_00592800) = 0xFF;
    (*(s8 *)D_00592853) = 4;
    (*(s8 *)D_00592828) = 0xFF;
    (*(s8 *)D_0059287B) = 4;
    (*(s8 *)D_00592850) = 0xFF;
    (*(s8 *)D_005928A3) = 4;
    (*(s8 *)D_00592878) = 0xFF;
    (*(s8 *)D_005928CB) = 4;
    (*(s8 *)D_005928A0) = 0xFF;
    (*(s8 *)D_005928F3) = 4;
    (*(s8 *)D_005928C8) = 0xFF;
    (*(s8 *)D_0059291B) = 4;
    (*(s8 *)D_00592918) = 0xFF;
    (*(s8 *)D_00591BB4) = 0;
    (*(s8 *)D_005928F0) = 0xFF;
    (*(s32 *)D_00CBD390) = 0;
    (*(s32 *)D_00CBD370) = 0;
    (*(s32 *)D_00CBD394) = 0;
    (*(s32 *)D_00CBD374) = 0;
    (*(s32 *)D_00CBD398) = 0;
    (*(s32 *)D_00CBD378) = 0;
    (*(s32 *)D_00CBD39C) = 0;
    (*(s32 *)D_00CBD37C) = 0;
    (*(s32 *)D_00CBD3A0) = 0;
    (*(s32 *)D_00CBD380) = 0;
    (*(s32 *)D_00CBD3A4) = 0;
    (*(s32 *)D_00CBD384) = 0;
    func_002CA6B0(0U, 1);
    func_002CA690(1U, 1);
    if (func_001CDAA0() != 0) {
        func_0027CF30(1);
    } else {
        func_0027CF30(0);
    }
    temp_a1 = ((void *)D_003C54C0) + func_001CDAA0();
    D_003E758C = ((void *)D_005A3040);
    (*(u8 *)D_00591BE4) = *temp_a1;
}
