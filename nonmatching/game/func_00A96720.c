/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern char D_005926E6[];
extern u8 *D_003E7574;
extern u8 *D_003E74CC;
extern u32 func_009B3480(f32 a, f32 b);
extern u32 func_009B30B0(u32 a, u32 b);
extern u32 func_009B3070(u32 a, u32 b);
extern void func_00209A00(void *p, s32 a, s32 b);
extern s32 func_009F4DC0(s32 a, f32 b);

void func_00A96720(u8 *arg0) {
    u8 *base = D_003E7574;
    u32 idx = *(u8 *)D_005926E6;
    u32 s0;
    u32 v;
    s32 s2;
    u8 *p;
    s0 = func_009B3480(*(f32 *)(base + idx * 4 + 0x47C), *(f32 *)(base + idx * 4 + 0xB7C)) & 0xFFFF;
    if ((func_009B30B0(s0, *(u16 *)(arg0 + 0x10C)) & 0xFFFF) >= 0x60) {
        if ((func_009B30B0(s0, *(u16 *)(arg0 + 0x26)) & 0xFFFF) >= 0x60) {
            s0 = *(u16 *)(arg0 + 0x10C);
        }
    }
    v = func_009B3070(s0, *(u16 *)(arg0 + 0x26)) & 0xFFFF;
    if (v < 0x3001) {
        if (v < 0x1601) {
            func_00209A00(*(void **)(arg0 + 4), 0x6A, 0);
            *(u16 *)(arg0 + 0x28) = s0;
            *(u16 *)(arg0 + 0x34) = s0;
            return;
        }
        {
            u32 a4 = *(u16 *)(arg0 + 0x26);
            p = *(u8 **)(arg0 + 4);
            p[0x2D] = ((((s0 & 0xFFFF) - a4 + 0x10000) & 0xFFFF) < 0x8001) ^ 1;
        }
        func_00209A00(*(void **)(arg0 + 4), 0x6D, 0);
        p = *(u8 **)(arg0 + 4);
        if (func_009F4DC0(*(s32 *)(D_003E74CC + *(u16 *)(p + 0x30) * 4 + 0x2FD8) - (s32)*(f32 *)(p + 0x38), *(f32 *)(p + 0x28))) {
            p = *(u8 **)(arg0 + 4);
            s2 = func_009F4DC0(*(s32 *)(D_003E74CC + *(u16 *)(p + 0x30) * 4 + 0x2FD8) - (s32)*(f32 *)(p + 0x38), *(f32 *)(p + 0x28));
            v = func_009B3070(*(u16 *)(arg0 + 0x26), s0) & 0xFFFF;
            *(u16 *)(arg0 + 0x38) = (s32)v / s2;
        } else {
            *(u16 *)(arg0 + 0x38) = func_009B3070(*(u16 *)(arg0 + 0x26), s0) & 0xFFFF;
        }
        *(u16 *)(arg0 + 0x28) = s0;
        *(u16 *)(arg0 + 0x34) = s0;
        return;
    }
    {
        u32 a4 = *(u16 *)(arg0 + 0x26);
        p = *(u8 **)(arg0 + 4);
        p[0x2D] = ((((s0 & 0xFFFF) - a4 + 0x10000) & 0xFFFF) < 0x8001) ^ 1;
    }
    func_00209A00(*(void **)(arg0 + 4), 0x6E, 0);
    p = *(u8 **)(arg0 + 4);
    if (func_009F4DC0(*(s32 *)(D_003E74CC + *(u16 *)(p + 0x30) * 4 + 0x2FD8) - (s32)*(f32 *)(p + 0x38), *(f32 *)(p + 0x28))) {
        p = *(u8 **)(arg0 + 4);
        s2 = func_009F4DC0(*(s32 *)(D_003E74CC + *(u16 *)(p + 0x30) * 4 + 0x2FD8) - (s32)*(f32 *)(p + 0x38), *(f32 *)(p + 0x28));
        v = func_009B3070(*(u16 *)(arg0 + 0x26), s0) & 0xFFFF;
        *(u16 *)(arg0 + 0x38) = (s32)v / s2;
    } else {
        *(u16 *)(arg0 + 0x38) = func_009B3070(*(u16 *)(arg0 + 0x26), s0) & 0xFFFF;
    }
    *(u16 *)(arg0 + 0x28) = s0;
    *(u16 *)(arg0 + 0x34) = s0;
}
