/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_0052AB40[];
extern char D_0052AB38[];
extern char D_0052AB01[];
void func_001038E8(void *a0, s32 a1, s64 a2);
s32 func_001D2F90(s32 a0, void *a1, void *a2, void *a3);
s32 func_001D4B30(void *a0, s32 a1);

void func_001D2030(u8 *a0, void *a1) {
    u16 *idx = *(u16 **)(a0 + 0xC);
    s32 k, base, flags, m1, m2, fl;
    s32 i;
    u8 *ptrs[4];
    f32 fv[4];
    s32 out[16];
    struct { u8 c[4]; u32 f; } col;
    union { f32 f; u32 u; } t;
    u64 pk;

    func_001038E8(a1, 8, 5);
    func_001038E8(a1, 0x14, *(s64 *)D_0052AB40);
    func_001038E8(a1, 6, *(s64 *)D_0052AB38);
    base = 0;
    for (i = 0; i < *(u16 *)(a0 + 2); i++, base += 4) {
        if (idx != 0) {
            ptrs[0] = *(u8 **)(a0 + 8) + idx[0] * 24;
            ptrs[1] = *(u8 **)(a0 + 8) + idx[1] * 24;
            ptrs[2] = *(u8 **)(a0 + 8) + idx[2] * 24;
            ptrs[3] = *(u8 **)(a0 + 8) + idx[3] * 24;
            idx += 4;
        } else {
            ptrs[0] = *(u8 **)(a0 + 8) + base * 24;
            ptrs[1] = *(u8 **)(a0 + 8) + (base + 1) * 24;
            ptrs[2] = *(u8 **)(a0 + 8) + (base + 2) * 24;
            ptrs[3] = *(u8 **)(a0 + 8) + (base + 3) * 24;
        }
        if (func_001D2F90(4, ptrs, out, fv) == 0) {
            flags = 0;
        } else if (*(u8 *)D_0052AB01 == 1) {
            flags = 0;
            if (func_001D4B30(out, 0) == 1) flags |= 1;
            if (func_001D4B30(out + 4, 1) == 1) flags |= 2;
        } else {
            flags = 3;
        }
        if (flags != 0) {
            m1 = flags & 1;
            m2 = flags & 2;
            for (k = 0; k < 4; k++) {
                f32 a = *(f32 *)(ptrs[k] + 0x14) * fv[k];
                f32 b = *(f32 *)(ptrs[k] + 0x10) * fv[k];
                u32 ab = *(u32 *)&a;
                u32 bb = *(u32 *)&b;
                func_001038E8(a1, 2, ((u64)ab << 32) | bb);
                if ((k == 2 && m1 != 0) || (k == 3 && m2 != 0)) fl = 4;
                else fl = 12;
                col.c[0] = a0[4] == 0xFF ? 0x80 : a0[4] >> 1;
                col.c[1] = a0[5] == 0xFF ? 0x80 : a0[5] >> 1;
                col.c[2] = a0[6] == 0xFF ? 0x80 : a0[6] >> 1;
                col.c[3] = a0[7] == 0xFF ? 0x80 : a0[7] >> 1;
                t.f = fv[k];
                col.f = t.u;
                func_001038E8(a1, 1, *(u64 *)&col);
                pk = (s64)out[k * 4] | ((s64)out[k * 4 + 1] << 16) | ((s64)out[k * 4 + 2] << 32) | ((s64)out[k * 4 + 3] << 56);
                func_001038E8(a1, fl, pk);
            }
        }
    }
}
