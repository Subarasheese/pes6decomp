/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u32 func_00BD45B0(u32 a);
extern void func_00209A00(void *a, s32 b, s32 c);
extern void func_00B35E10(void *a, void *b, void *c);
extern void func_009B3480(void *a0, f32 a, f32 b);
extern s32 func_00BBB8C0(s32 a);
extern void func_00BD4040(void *a, s32 b);
extern void func_00BD3BA0(void *a, s32 b, s32 c);
extern void func_00B9EA10(void *a);
extern void func_00B382F0(void *a);
extern char D_00591BE4[];
extern char D_00CBCAD2[];

void func_00B9E5D0(u8 **s1) {
    s32 s0;
    s32 v0;
    u32 t;
    u8 *p;

    t = func_00BD45B0(*(u16 *)(*(u8 **)(s1[0] + 4) + 0x30)) & 0xFF;
    if (t < 8) {
        if (t == 0) {
            *(s32 *)(s1[0] + 0x1C) = 0;
            s0 = 1;
        } else if (t == 1) {
            s0 = 1;
        } else if (t == 2) {
            s0 = 2;
        } else if (t < 7) {
            s0 = 3;
        } else {
            p = s1[0];
            if (*(u16 *)(*(u8 **)(p + 4) + 0x30) == 0x489) {
                *(s32 *)(p + 0x1C) = 0;
                func_00209A00(*(void **)(s1[0] + 4), 0x442, 0);
                s0 = 1;
            } else {
                func_00BD4040(s1, 2);
                *(s16 *)(s1[0] + 0x18) = 0xBD;
                return;
            }
        }
    }
    func_00B35E10(s1, s1[0] + 0x6C, s1[0] + 0x70);
    p = s1[0];
    func_009B3480(p, *(f32 *)(p + 0x6C), *(f32 *)(p + 0x70));
    if ((s0 & 0xFFFF) == 1) {
        v0 = func_00BBB8C0((*(u8 *)D_00591BE4) * 3);
    } else if ((s0 & 0xFFFF) == 2) {
        v0 = 0;
    } else {
        v0 = func_00BBB8C0((*(u8 *)D_00591BE4) * 5);
    }
    p = s1[0];
    p[0x4F] = v0 / (*(u8 *)D_00591BE4);
    s1[0][0x50] = v0 % (*(u8 *)D_00591BE4);
    func_00BD4040(s1, s0 & 0xFF);
    func_00BD3BA0(s1, 5, 1);
    *(u8 *)D_00CBCAD2 = 0;
    func_00B9EA10(s1);
    if (*(u16 *)(s1[0] + 0x18) != 0xBE) {
        func_00B382F0(s1);
    }
    s1[1][0x50] = 0;
    s1[1][0x52] = 0;
}
