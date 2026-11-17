/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_00C03C50(void *);

void func_00C03B90(void *arg0) {
    s32 kind;
    u8 *p;
    u16 h;
    u8 b;

    func_00C03C50(arg0);
    kind = M2C_FIELD(arg0, s32 *, 8);
    if (kind == 1) {
        p = M2C_FIELD(arg0, u8 **, 0xC);
        M2C_FIELD(p, f32 *, 0x1C) = M2C_FIELD(arg0, f32 *, 0x10);
        M2C_FIELD(p, f32 *, 0x24) = M2C_FIELD(arg0, f32 *, 0x14);
        M2C_FIELD(p, s32 *, 0x20) = 0;
        M2C_FIELD(p, s32 *, 0x30) = 0;
        M2C_FIELD(p, s32 *, 0x2C) = 0;
        M2C_FIELD(p, s32 *, 0x28) = 0;
        h = M2C_FIELD(arg0, u16 *, 0x18);
        M2C_FIELD(p, u16 *, 0x16) = h;
        M2C_FIELD(p, u16 *, 0x14) = h;
        p[0x12] = M2C_FIELD(arg0, u8 *, 0x1A);
    } else if (kind == 0) {
        p = M2C_FIELD(arg0, u8 **, 0xC);
        M2C_FIELD(p, f32 *, 0xE0) = M2C_FIELD(arg0, f32 *, 0x10);
        M2C_FIELD(p, f32 *, 0xE8) = M2C_FIELD(arg0, f32 *, 0x14);
        M2C_FIELD(p, s32 *, 0xE4) = 0;
        h = M2C_FIELD(arg0, u16 *, 0x18);
        M2C_FIELD(p, u16 *, 0x2C) = h;
        M2C_FIELD(p, u16 *, 0x28) = h;
        M2C_FIELD(p, u16 *, 0x26) = h;
        b = M2C_FIELD(arg0, u8 *, 0x1A);
        M2C_FIELD(M2C_FIELD(p, u8 **, 4), u8 *, 0x2E) = b;
        M2C_FIELD(M2C_FIELD(p, u8 **, 4), u8 *, 0x2D) = b;
    }
}
