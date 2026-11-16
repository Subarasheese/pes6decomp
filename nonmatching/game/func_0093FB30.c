/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad00[0xC];
    s32 f0C;
    u8 pad10[0x31 - 0x10];
    s8 f31;
    u8 pad32;
    s8 f33;
    s16 f34;
    u8 pad36[0x40 - 0x36];
    s16 f40;
    u8 pad42[2];
    s8 f44;
    s8 f45;
    u8 f46;
    u8 f47;
    s8 f48;
    s8 f49;
    u8 pad4A[0x1F5 - 0x4A];
    s8 f1F5;
    u8 pad1F6[0x220 - 0x1F6];
} Req;

M2C_UNK func_001A6E20(Req *);
M2C_UNK func_001A92C0(Req *, u8 *, u64, u8 *, s16, u64, u64, void *);
extern char Pes6MatchSquads[];

void func_0093FB30(s32 arg0, u8 arg1, u8 arg2) {
    Req req;
    u8 sp241;
    u8 sp242;
    s16 temp_a4;
    s32 n;
    s8 *p;
    u64 temp_a2;
    u64 temp_a5;
    u64 temp_a6;
    u8 var_v0_2;
    u8 *temp_a7;

    n = 0x220;
    p = (s8 *)&req;
    if (p != NULL) {
        do {
            *p = 0;
            n -= 1;
            p += 1;
        } while (n != 0);
    }
    sp242 = arg1;
    sp241 = arg2;
    req.f0C = arg0;
    temp_a7 = (u8 *)Pes6MatchSquads + (sp242 * 0x6900) + (sp241 * 0x348);
    req.f33 = M2C_FIELD(temp_a7, u8 *, 0x2A) & 3;
    req.f44 = M2C_FIELD(temp_a7, u8 *, 0x38) & 0x1F;
    req.f40 = (s16) ((u64) ((s64) M2C_FIELD(temp_a7, u16 *, 0x28) << 0x30) >> 0x35);
    temp_a6 = (u64) ((s64) M2C_FIELD(temp_a7, u8 *, 0x23) << 0x38) >> 0x3F;
    temp_a5 = (u64) ((s64) M2C_FIELD(temp_a7, u8 *, 0x1C) << 0x38) >> 0x3E;
    req.f45 = (s8) ((u64) ((s64) M2C_FIELD(temp_a7, u8 *, 0x37) << 0x38) >> 0x3B);
    temp_a4 = M2C_FIELD(temp_a7, u16 *, 0x20) & 0x7FF;
    req.f48 = M2C_FIELD(temp_a7, u8 *, 0x3C) & 0x1F;
    req.f47 = (u8) ((u64) ((s64) M2C_FIELD(temp_a7, u8 *, 0x3B) << 0x3B) >> 0x3D);
    temp_a2 = (u64) ((s64) M2C_FIELD(temp_a7, u8 *, 0x3D) << 0x3A) >> 0x3D;
    req.f1F5 = (s8) temp_a6;
    req.f31 = (s8) temp_a5;
    req.f34 = temp_a4;
    req.f46 = (u8) temp_a2;
    req.f49 = (s8) ((u64) ((s64) M2C_FIELD(temp_a7, u8 *, 0x3E) << 0x39) >> 0x3D);
    if ((s32) req.f47 < 5) {
        var_v0_2 = req.f46 * 2;
    } else {
        var_v0_2 = (req.f46 * 2) + 1;
    }
    req.f46 = var_v0_2;
    func_001A92C0(&req, &req.f47, temp_a2, &req.f46, temp_a4, temp_a5, temp_a6, temp_a7);
    func_001A6E20(&req);
}
