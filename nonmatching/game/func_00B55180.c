/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"
extern s32 func_00BF6270(void);
extern s32 func_00BF6260(void);
extern void func_00BD3CF0(void *a, s32 a1, s32 a2, f32 b, f32 c);
extern s32 func_009B33F0(void *a, void *b);
extern s32 func_009B3070(s32 a, s32 b);
extern u32 func_009B33A0(void *a, s32 b, s32 c);
extern s32 func_00BA87B0(void *a, s32 b, s32 c);
extern char D_0058E5B0[];

void func_00B55180(void **s0, s32 a1, s32 a2) {
    u8 *s1, *s2, *s3, *p, *q;
    s32 i, v, dx, dz, a2v;

    v = func_00BF6270();
    if (v != 0xFF) {
        v = func_00BF6270();
        i = v % 0x17;
    } else {
        i = 1;
    }
    s3 = (u8 *)D_0058E5B0 + i * 0x240;
    v = func_00BF6260();
    if (v != 0xFF) {
        v = func_00BF6260();
        i = v % 0x17;
    } else {
        i = 1;
    }
    s1 = (u8 *)D_0058E5B0;
    s2 = s1 + i * 0x240;
    p = (u8 *)s0[0];
    func_00BD3CF0(s0, a1, a2, *(f32 *)(p + 0x6C), *(f32 *)(p + 0x70));

    p = (u8 *)s0[0];
    if (p[0] != s2[0]) {
        dx = (s32)(*(f32 *)(p + 0xE0) - *(f32 *)(s3 + 0xE0));
        dz = (s32)(*(f32 *)(p + 0xE8) - *(f32 *)(s3 + 0xE8));
        if (dx * dx + dz * dz < 0x640001) {
            v = func_009B33F0(p, s3);
            if ((u16)func_009B3070(*(u16 *)((u8 *)s0[0] + 0x26), v) <= 0x3000) goto act1;
            p = (u8 *)s0[0];
        }
        dx = (s32)(*(f32 *)(p + 0xE0) - *(f32 *)(s2 + 0xE0));
        dz = (s32)(*(f32 *)(p + 0xE8) - *(f32 *)(s2 + 0xE8));
        if (dx * dx + dz * dz < 0x640001) {
            v = func_009B33F0(p, s2);
            if ((u16)func_009B3070(*(u16 *)((u8 *)s0[0] + 0x26), v) <= 0x3000) goto act1;
            p = (u8 *)s0[0];
        }
        dx = (s32)(*(f32 *)(p + 0xE0) - *(f32 *)(s1 + 0xE0));
        dz = (s32)(*(f32 *)(p + 0xE8) - *(f32 *)(s1 + 0xE8));
        if (dx * dx + dz * dz < 0x640001) {
            v = func_009B33F0(p, s1);
            if ((u16)func_009B3070(*(u16 *)((u8 *)s0[0] + 0x26), v) <= 0x3000) {
act1:
                if (func_00BA87B0(s0, 0x38, a2) != 0) {
                    p = (u8 *)s0[0];
                    *(u16 *)(p + 0x2C) = *(u16 *)(p + 0x26);
                    q = (u8 *)s0[1];
                    q[0x4C] = 0x38;
                    v = ((u8 *)s0[1])[0x4C];
                    if (v == 0x13) {
                        *(u16 *)((u8 *)s0[0] + 0x18) = 0x14;
                    } else if (v == 0x3A || v == 0x39 || v == 0x30 || v == 0x12 || v == 7 || v == 5 || v == 4) {
                        *(u16 *)((u8 *)s0[0] + 0x18) = 0x11;
                    } else if (v == 0x2D || v == 0x55 || v == 0x56 || v == 0x51 || v == 0x52 || v == 0x42 || v == 0x41 || v == 0x36 || v == 0x31 || v == 0x1B || v == 0x2C || v == 0x2B || v == 0x2A || v == 0x18 || v == 0x38 || v == 0xF || v == 0x1C) {
                        *(u16 *)((u8 *)s0[0] + 0x18) = 0xF;
                    }
                }
            }
        }
    }

    p = (u8 *)s0[0];
    if (p[0] == s2[0]) {
        dx = (s32)(*(f32 *)(p + 0xE0) - *(f32 *)(s3 + 0xE0));
        dz = (s32)(*(f32 *)(p + 0xE8) - *(f32 *)(s3 + 0xE8));
        if (dx * dx + dz * dz < 0x640001) {
            v = func_009B33F0(p, s3);
            if ((u16)func_009B3070(*(u16 *)((u8 *)s0[0] + 0x26), v) <= 0x3000) goto act2;
            p = (u8 *)s0[0];
        }
        dx = (s32)(*(f32 *)(p + 0xE0) - *(f32 *)(s1 + 0xE0));
        dz = (s32)(*(f32 *)(p + 0xE8) - *(f32 *)(s1 + 0xE8));
        if (dx * dx + dz * dz < 0x640001) {
            v = func_009B33F0(p, s1);
            if ((u16)func_009B3070(*(u16 *)((u8 *)s0[0] + 0x26), v) <= 0x3000) {
act2:
                if (func_00BA87B0(s0, 0x38, a2) != 0) {
                    p = (u8 *)s0[0];
                    *(u16 *)(p + 0x2C) = *(u16 *)(p + 0x26);
                    q = (u8 *)s0[1];
                    q[0x4C] = 0x38;
                    v = ((u8 *)s0[1])[0x4C];
                    if (v == 0x13) {
                        *(u16 *)((u8 *)s0[0] + 0x18) = 0x14;
                    } else if (v == 0x3A || v == 0x39 || v == 0x30 || v == 0x12 || v == 7 || v == 5 || v == 4) {
                        *(u16 *)((u8 *)s0[0] + 0x18) = 0x11;
                    } else if (v == 0x2D || v == 0x55 || v == 0x56 || v == 0x51 || v == 0x52 || v == 0x42 || v == 0x41 || v == 0x36 || v == 0x31 || v == 0x1B || v == 0x2C || v == 0x2B || v == 0x2A || v == 0x18 || v == 0x38 || v == 0xF || v == 0x1C) {
                        *(u16 *)((u8 *)s0[0] + 0x18) = 0xF;
                    }
                }
            }
        }
    }

    p = (u8 *)s0[0];
    a2v = (s32)*(f32 *)(p + 0x70);
    if (func_009B33A0(p, (s32)*(f32 *)(p + 0x6C), a2v) < 0x90001) {
        if (func_00BA87B0(s0, 0x38, a2v) != 0) {
            p = (u8 *)s0[0];
            *(u16 *)(p + 0x2C) = *(u16 *)(p + 0x26);
            q = (u8 *)s0[1];
            q[0x4C] = 0x38;
            v = ((u8 *)s0[1])[0x4C];
            if (v == 0x13) {
                *(u16 *)((u8 *)s0[0] + 0x18) = 0x14;
            } else if (v == 0x3A || v == 0x39 || v == 0x30 || v == 0x12 || v == 7 || v == 5 || v == 4) {
                *(u16 *)((u8 *)s0[0] + 0x18) = 0x11;
            } else if (v == 0x2D || v == 0x55 || v == 0x56 || v == 0x51 || v == 0x52 || v == 0x42 || v == 0x41 || v == 0x36 || v == 0x31 || v == 0x1B || v == 0x2C || v == 0x2B || v == 0x2A || v == 0x18 || v == 0x38 || v == 0xF || v == 0x1C) {
                *(u16 *)((u8 *)s0[0] + 0x18) = 0xF;
            }
        }
    }
}
