/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"
extern void func_001038E8(s32 a, s32 b, s64 c);
extern s32 func_001D2F90(s32 n, void *p, void *q, void *r);
extern s32 func_001D4B30(void *p, s32 n);
extern char D_0052AB01[];

void func_001D1080(void *arg0, s32 arg1) {
    s32 ptrs[4];
    s32 q[16];
    s32 r[4];
    u8 col[8];
    u16 *idx = *(u16 **)((u8 *)arg0 + 0xC);
    s32 i, k, flags, lo;
    u8 a;
    s32 base;

    for (i = 0; i < *(u16 *)((u8 *)arg0 + 2); i++) {
        if (idx != 0) {
            base = *(s32 *)((u8 *)arg0 + 8);
            ptrs[0] = base + idx[0] * 24;
            ptrs[1] = *(s32 *)((u8 *)arg0 + 8) + idx[1] * 24;
            ptrs[2] = *(s32 *)((u8 *)arg0 + 8) + idx[2] * 24;
            ptrs[3] = *(s32 *)((u8 *)arg0 + 8) + idx[3] * 24;
            idx += 4;
        } else {
            ptrs[0] = *(s32 *)((u8 *)arg0 + 8) + (i * 4) * 24;
            ptrs[1] = *(s32 *)((u8 *)arg0 + 8) + (i * 4 + 1) * 24;
            ptrs[2] = *(s32 *)((u8 *)arg0 + 8) + (i * 4 + 2) * 24;
            ptrs[3] = *(s32 *)((u8 *)arg0 + 8) + (i * 4 + 3) * 24;
        }
        if (func_001D2F90(4, ptrs, q, r) == 0) {
            flags = 0;
        } else if (*(u8 *)D_0052AB01 != 1) {
            flags = 3;
        } else {
            flags = 0;
            if (func_001D4B30(q, 0) == 1) flags |= 1;
            if (func_001D4B30(q + 4, 1) == 1) flags |= 2;
        }
        if (flags != 0) {
            lo = flags & 1;
            flags &= 2;
            for (k = 0; k < 4; k++) {
                u8 *p = (u8 *)ptrs[k];
                col[0] = p[0xC];
                col[1] = p[0xD];
                col[2] = p[0xE];
                a = p[0xF];
                col[3] = (a == 0xFF) ? 0x80 : (a >> 1);
                *(s32 *)(col + 4) = 0;
                func_001038E8(arg1, 1, *(s64 *)col);
                if ((k == 2 && lo != 0) || (k == 3 && flags != 0))
                    base = 4;
                else
                    base = 0xC;
                func_001038E8(arg1, base,
                    (s64)q[k * 4] | ((s64)q[k * 4 + 1] << 16) |
                    ((s64)q[k * 4 + 2] << 32) | ((s64)q[k * 4 + 3] << 56));
            }
        }
    }
}
