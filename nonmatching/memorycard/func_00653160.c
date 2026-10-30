/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_0030C3B0(void);
M2C_UNK func_0064E380(void *);                      /* extern */

void func_00653160(s32 arg0, void *arg1) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = func_0030C3B0();
    if (arg0 != 0) {
        M2C_FIELD(arg1, f32 *, 4) = (f32) M2C_FIELD(temp_v0, f32 *, 8);
        M2C_FIELD(arg1, f32 *, 8) = (f32) M2C_FIELD(temp_v0, f32 *, 0xC);
        M2C_FIELD(arg1, f32 *, 0xC) = (f32) M2C_FIELD(temp_v0, f32 *, 0x10);
        M2C_FIELD(arg1, f32 *, 0x10) = (f32) M2C_FIELD(temp_v0, f32 *, 0x14);
        M2C_FIELD(arg1, f32 *, 0x14) = (f32) M2C_FIELD(temp_v0, f32 *, 0x18);
        M2C_FIELD(arg1, f32 *, 0x18) = (f32) M2C_FIELD(temp_v0, f32 *, 0x1C);
        M2C_FIELD(arg1, f32 *, 0x1C) = (f32) M2C_FIELD(temp_v0, f32 *, 0x20);
        M2C_FIELD(arg1, f32 *, 0x20) = (f32) M2C_FIELD(temp_v0, f32 *, 0x24);
        M2C_FIELD(arg1, f32 *, 0x24) = (f32) M2C_FIELD(temp_v0, f32 *, 0x28);
        M2C_FIELD(arg1, f32 *, 0x28) = (f32) M2C_FIELD(temp_v0, f32 *, 0x2C);
        M2C_FIELD(arg1, f32 *, 0x2C) = (f32) M2C_FIELD(temp_v0, f32 *, 0x30);
        M2C_FIELD(arg1, f32 *, 0x30) = (f32) M2C_FIELD(temp_v0, f32 *, 0x34);
        M2C_FIELD(arg1, f32 *, 0x44) = (f32) M2C_FIELD(temp_v0, f32 *, 0xA4);
        M2C_FIELD(arg1, f32 *, 0x48) = (f32) M2C_FIELD(temp_v0, f32 *, 0xA8);
        M2C_FIELD(arg1, f32 *, 0x4C) = (f32) M2C_FIELD(temp_v0, f32 *, 0xAC);
        M2C_FIELD(arg1, f32 *, 0x50) = (f32) M2C_FIELD(temp_v0, f32 *, 0xB0);
        M2C_FIELD(arg1, f32 *, 0x54) = (f32) M2C_FIELD(temp_v0, f32 *, 0xB4);
        M2C_FIELD(arg1, f32 *, 0x58) = (f32) M2C_FIELD(temp_v0, f32 *, 0xB8);
        M2C_FIELD(arg1, f32 *, 0x5C) = (f32) M2C_FIELD(temp_v0, f32 *, 0xBC);
        M2C_FIELD(arg1, f32 *, 0x60) = (f32) M2C_FIELD(temp_v0, f32 *, 0xC0);
        M2C_FIELD(arg1, f32 *, 0x64) = (f32) M2C_FIELD(temp_v0, f32 *, 0xC4);
        M2C_FIELD(arg1, f32 *, 0x68) = (f32) M2C_FIELD(temp_v0, f32 *, 0xC8);
        M2C_FIELD(arg1, f32 *, 0x6C) = (f32) M2C_FIELD(temp_v0, f32 *, 0xCC);
        M2C_FIELD(arg1, f32 *, 0x70) = (f32) M2C_FIELD(temp_v0, f32 *, 0x78);
        M2C_FIELD(arg1, f32 *, 0x74) = (f32) M2C_FIELD(temp_v0, f32 *, 0x7C);
        M2C_FIELD(arg1, f32 *, 0x78) = (f32) M2C_FIELD(temp_v0, f32 *, 0x80);
        M2C_FIELD(arg1, f32 *, 0x7C) = (f32) M2C_FIELD(temp_v0, f32 *, 0x84);
        M2C_FIELD(arg1, f32 *, 0x80) = (f32) M2C_FIELD(temp_v0, f32 *, 0x88);
        M2C_FIELD(arg1, f32 *, 0x84) = (f32) M2C_FIELD(temp_v0, f32 *, 0x8C);
        M2C_FIELD(arg1, f32 *, 0x88) = (f32) M2C_FIELD(temp_v0, f32 *, 0x90);
        M2C_FIELD(arg1, f32 *, 0x8C) = (f32) M2C_FIELD(temp_v0, f32 *, 0x94);
        M2C_FIELD(arg1, f32 *, 0x90) = (f32) M2C_FIELD(temp_v0, f32 *, 0x98);
        M2C_FIELD(arg1, f32 *, 0x94) = (f32) M2C_FIELD(temp_v0, f32 *, 0x9C);
        M2C_FIELD(arg1, f32 *, 0x98) = (f32) M2C_FIELD(temp_v0, f32 *, 0xA0);
        M2C_FIELD(arg1, s32 *, 0x34) = (s32) M2C_FIELD(temp_v0, s32 *, 0x6C);
        var_v1 = M2C_FIELD(temp_v0, s32 *, 0x68);
    } else {
        M2C_FIELD(arg1, f32 *, 4) = (f32) M2C_FIELD(temp_v0, f32 *, 0x38);
        M2C_FIELD(arg1, f32 *, 8) = (f32) M2C_FIELD(temp_v0, f32 *, 0x3C);
        M2C_FIELD(arg1, f32 *, 0xC) = (f32) M2C_FIELD(temp_v0, f32 *, 0x40);
        M2C_FIELD(arg1, f32 *, 0x10) = (f32) M2C_FIELD(temp_v0, f32 *, 0x44);
        M2C_FIELD(arg1, f32 *, 0x14) = (f32) M2C_FIELD(temp_v0, f32 *, 0x48);
        M2C_FIELD(arg1, f32 *, 0x18) = (f32) M2C_FIELD(temp_v0, f32 *, 0x4C);
        M2C_FIELD(arg1, f32 *, 0x1C) = (f32) M2C_FIELD(temp_v0, f32 *, 0x50);
        M2C_FIELD(arg1, f32 *, 0x20) = (f32) M2C_FIELD(temp_v0, f32 *, 0x54);
        M2C_FIELD(arg1, f32 *, 0x24) = (f32) M2C_FIELD(temp_v0, f32 *, 0x58);
        M2C_FIELD(arg1, f32 *, 0x28) = (f32) M2C_FIELD(temp_v0, f32 *, 0x5C);
        M2C_FIELD(arg1, f32 *, 0x2C) = (f32) M2C_FIELD(temp_v0, f32 *, 0x60);
        M2C_FIELD(arg1, f32 *, 0x30) = (f32) M2C_FIELD(temp_v0, f32 *, 0x64);
        M2C_FIELD(arg1, f32 *, 0x44) = (f32) M2C_FIELD(temp_v0, f32 *, 0x78);
        M2C_FIELD(arg1, f32 *, 0x48) = (f32) M2C_FIELD(temp_v0, f32 *, 0x7C);
        M2C_FIELD(arg1, f32 *, 0x4C) = (f32) M2C_FIELD(temp_v0, f32 *, 0x80);
        M2C_FIELD(arg1, f32 *, 0x50) = (f32) M2C_FIELD(temp_v0, f32 *, 0x84);
        M2C_FIELD(arg1, f32 *, 0x54) = (f32) M2C_FIELD(temp_v0, f32 *, 0x88);
        M2C_FIELD(arg1, f32 *, 0x58) = (f32) M2C_FIELD(temp_v0, f32 *, 0x8C);
        M2C_FIELD(arg1, f32 *, 0x5C) = (f32) M2C_FIELD(temp_v0, f32 *, 0x90);
        M2C_FIELD(arg1, f32 *, 0x60) = (f32) M2C_FIELD(temp_v0, f32 *, 0x94);
        M2C_FIELD(arg1, f32 *, 0x64) = (f32) M2C_FIELD(temp_v0, f32 *, 0x98);
        M2C_FIELD(arg1, f32 *, 0x68) = (f32) M2C_FIELD(temp_v0, f32 *, 0x9C);
        M2C_FIELD(arg1, f32 *, 0x6C) = (f32) M2C_FIELD(temp_v0, f32 *, 0xA0);
        M2C_FIELD(arg1, f32 *, 0x70) = (f32) M2C_FIELD(temp_v0, f32 *, 0xA4);
        M2C_FIELD(arg1, f32 *, 0x74) = (f32) M2C_FIELD(temp_v0, f32 *, 0xA8);
        M2C_FIELD(arg1, f32 *, 0x78) = (f32) M2C_FIELD(temp_v0, f32 *, 0xAC);
        M2C_FIELD(arg1, f32 *, 0x7C) = (f32) M2C_FIELD(temp_v0, f32 *, 0xB0);
        M2C_FIELD(arg1, f32 *, 0x80) = (f32) M2C_FIELD(temp_v0, f32 *, 0xB4);
        M2C_FIELD(arg1, f32 *, 0x84) = (f32) M2C_FIELD(temp_v0, f32 *, 0xB8);
        M2C_FIELD(arg1, f32 *, 0x88) = (f32) M2C_FIELD(temp_v0, f32 *, 0xBC);
        M2C_FIELD(arg1, f32 *, 0x8C) = (f32) M2C_FIELD(temp_v0, f32 *, 0xC0);
        M2C_FIELD(arg1, f32 *, 0x90) = (f32) M2C_FIELD(temp_v0, f32 *, 0xC4);
        M2C_FIELD(arg1, f32 *, 0x94) = (f32) M2C_FIELD(temp_v0, f32 *, 0xC8);
        M2C_FIELD(arg1, f32 *, 0x98) = (f32) M2C_FIELD(temp_v0, f32 *, 0xCC);
        M2C_FIELD(arg1, s32 *, 0x34) = (s32) M2C_FIELD(temp_v0, s32 *, 0x68);
        var_v1 = M2C_FIELD(temp_v0, s32 *, 0x6C);
    }
    M2C_FIELD(arg1, s32 *, 0x38) = var_v1;
    M2C_FIELD(arg1, s32 *, 0x3C) = (s32) M2C_FIELD(temp_v0, s32 *, 0x70);
    M2C_FIELD(arg1, s32 *, 0x40) = (s32) M2C_FIELD(temp_v0, s32 *, 0x74);
    func_0064E380(arg1);
}
