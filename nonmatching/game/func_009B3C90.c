/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00208310(s32);
extern void func_0027A550(void *, s16, s16);
extern void func_0027A520(int, int);
extern void func_0027A5B0(void *, s8);
extern void func_0027A4A0(int, int);
M2C_UNK func_0027A600(M2C_UNK *, u8);               /* extern */
extern void **Pes6Ball_Current;
extern char Pes6MatchPlayers[];
extern char D_00591F38[];
extern char D_00CBAA00[];
extern char D_00CBAA10[];
extern char D_00CBAA30[];
extern char D_00CBAA34[];
extern char D_00CBAA38[];
extern char D_00CBAA3C[];

void func_009B3C90(void) {
    M2C_UNK *var_s2;
    s32 var_s3;
    void *temp_s0;
    void *temp_s1;
    void *temp_v0;
    void *temp_v1;

    var_s3 = 0;
    var_s2 = ((void *)Pes6MatchPlayers);
    (*(s32 *)D_00591F38) = (*(s32 *)D_00CBAA10);
    temp_v0 = *Pes6Ball_Current;
    M2C_FIELD(temp_v0, f32 *, 0x40) = (f32) (*(f32 *)D_00CBAA30);
    M2C_FIELD(temp_v0, f32 *, 0x44) = (f32) (*(f32 *)D_00CBAA34);
    M2C_FIELD(temp_v0, f32 *, 0x48) = (f32) (*(f32 *)D_00CBAA38);
    M2C_FIELD(temp_v0, f32 *, 0x4C) = (f32) (*(f32 *)D_00CBAA3C);
    do {
        temp_s0 = M2C_FIELD(var_s2, void **, 4);
        temp_v1 = ((void *)D_00CBAA00) + ((var_s3 & 0xFFFF) * 0x30);
        M2C_FIELD(temp_s0, u16 *, 0x30) = (u16) M2C_FIELD(temp_v1, u16 *, 0x54);
        M2C_FIELD(temp_s0, u8 *, 0x2C) = (u8) M2C_FIELD(temp_v1, u8 *, 0x56);
        M2C_FIELD(temp_s0, f32 *, 0x38) = (f32) M2C_FIELD(temp_v1, f32 *, 0x5C);
        M2C_FIELD(temp_s0, u8 *, 0x2D) = (u8) M2C_FIELD(temp_v1, u8 *, 0x57);
        M2C_FIELD(temp_s0, u8 *, 0x4D) = (u8) M2C_FIELD(temp_v1, u8 *, 0x59);
        M2C_FIELD(temp_s0, u8 *, 0x5B) = (u8) M2C_FIELD(temp_v1, u8 *, 0x58);
        temp_s1 = temp_v1 + 0x40;
        M2C_FIELD(temp_s0, u32 *, 4) = func_00208310((s32) M2C_FIELD(temp_v1, u16 *, 0x54));
        M2C_FIELD(M2C_FIELD(temp_s0, void **, 0), s32 *, 0x1C) = (s32) M2C_FIELD(temp_s1, u8 *, 0x28);
        M2C_FIELD(M2C_FIELD(temp_s0, void **, 0), u8 *, 0x20) = (u8) M2C_FIELD(temp_s1, u8 *, 0x29);
        M2C_FIELD(M2C_FIELD(temp_s0, void **, 0), u8 *, 0x21) = (u8) M2C_FIELD(temp_s1, u8 *, 0x2A);
        M2C_FIELD(M2C_FIELD(temp_s0, void **, 0), u8 *, 0x22) = (u8) M2C_FIELD(temp_s1, u8 *, 0x2B);
        func_0027A5B0(var_s2, (s8) M2C_FIELD(temp_s1, u8 *, 0x21));
        func_0027A550(var_s2, (s16) M2C_FIELD(temp_s1, u16 *, 0x24), (s16) M2C_FIELD(temp_s1, u16 *, 0x26));
        func_0027A600(var_s2, M2C_FIELD(temp_s1, u8 *, 0x20));
        func_0027A520((s32) var_s2, (s32) M2C_FIELD(temp_s1, u8 *, 0x22));
        func_0027A4A0((s32) var_s2, 0);
        var_s3 = (var_s3 + 1) & 0xFFFF;
        var_s2 += 0x240;
    } while (var_s3 < 0x17);
}
