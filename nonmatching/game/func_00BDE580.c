/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00BDC580(void);
extern void func_001A58E0(void *, signed char);
extern u8 func_00BF6270(void);
M2C_UNK func_00209A00(void **, s32, M2C_UNK);       /* extern */
void **func_00B2A420(u8);                           /* extern */
M2C_UNK func_00B347F0(void **, void **, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_00BB1310(M2C_UNK);                         /* extern */
s32 func_00BBB7F0(M2C_UNK);                         /* extern */

void func_00BDE580(void) {
    s16 var_v1;
    void **temp_s0;
    void **temp_s1;
    void *temp_a0;

    temp_s1 = func_00B2A420(func_00BDC580());
    temp_s0 = func_00B2A420(func_00BF6270());
    M2C_FIELD(M2C_FIELD(*temp_s1, void ***, 4), s8 *, 0x2C) = 1;
    func_001A58E0(*M2C_FIELD(*temp_s1, void ***, 4), 1);
    func_00209A00(M2C_FIELD(*temp_s1, void ***, 4), func_00BB1310(0x9C) & 0xFFFF, 0);
    M2C_FIELD(*temp_s1, s8 *, 0x66) = 0xFF;
    if (!(M2C_FIELD(M2C_FIELD(temp_s0, void **, 0), f32 *, 0xE0) < 0.0f)) {
        M2C_FIELD(M2C_FIELD(*temp_s1, void ***, 4), s8 *, 0x2D) = 0;
    } else {
        M2C_FIELD(M2C_FIELD(*temp_s1, void ***, 4), s8 *, 0x2D) = 1;
    }
    if (M2C_FIELD(M2C_FIELD(*temp_s1, void ***, 4), u8 *, 0x2D) != 0) {
        var_v1 = func_00BBB7F0(0x800) + 0x7FFF + 0x2713;
    } else {
        var_v1 = func_00BBB7F0(0x800) + 0x7FFF + 0x5FF3;
    }
    M2C_FIELD(*temp_s1, s16 *, 0x26) = var_v1;
    temp_a0 = *temp_s1;
    M2C_FIELD(temp_a0, u16 *, 0x28) = (u16) M2C_FIELD(temp_a0, u16 *, 0x26);
    M2C_FIELD(*temp_s1, f32 *, 0xE0) = (f32) M2C_FIELD(M2C_FIELD(temp_s0, void **, 0), f32 *, 0xE0);
    M2C_FIELD(*temp_s1, f32 *, 0xE8) = (f32) M2C_FIELD(M2C_FIELD(temp_s0, void **, 0), f32 *, 0xE8);
    M2C_FIELD(M2C_FIELD(M2C_FIELD(temp_s0, void **, 0), void **, 4), u8 *, 0x2D) = (u8) M2C_FIELD(M2C_FIELD(*temp_s1, void ***, 4), u8 *, 0x2D);
    if (M2C_FIELD(M2C_FIELD(temp_s0, void **, 4), u8 *, 0x4C) != 0x49) {
        func_00B347F0(temp_s0, temp_s1, 0x32, 0, 0x3FAF5C29, 0x40B09375);
    } else {
        func_00B347F0(temp_s0, temp_s1, 0x1E, 0, 0x3FA70A3D, 0x40A61CAC);
    }
    M2C_FIELD(*temp_s1, s8 *, 0x16) = 0x4E;
    M2C_FIELD(*temp_s1, s16 *, 0x18) = 0;
}
