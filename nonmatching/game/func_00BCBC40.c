/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u32 D_003EA794;
extern s32 D_003EA7A0;
extern s32 D_003EA780;
extern char D_00CBD311[];
extern char D_00CBD390[];

s32 func_00BA1420(void);
void func_00B27430(s32);
s32 func_00A1C780(void);
s32 func_00152130(s32, s32);
void func_002727C0(s32);
void func_00186220(void);
void func_00B25F80(s32);
void func_0017E120(s32);
void func_00182B30(s32);
void func_00182B20(s32);
s32 func_00208250(s32);
s32 func_001A5F20(s32);
void func_00B79620(s32);

void func_00BCBC40(void) {
    u8 *base;
    s32 i, j;
    u32 s1;
    s32 s0;
    s32 v;

    if (D_003EA794 < 0x28) {
        D_003EA794 = D_003EA794 + 1;
    } else {
        func_00B27430(1);
    }
    v = func_00BA1420();
    if (D_003EA7A0 != 0) {
        if (v != 0) {
            D_003EA7A0 = 0;
        } else if (func_00A1C780() != 0) {
            D_003EA7A0 = 0;
        }
    }
    if (D_003EA7A0 != 0) {
        return;
    }
    if (func_00152130(1, 0x10) == 0) {
        return;
    }
    func_002727C0(9);
    func_00186220();
    func_00B25F80(1);
    D_003EA794 = 0;
    func_0017E120(0);
    func_00182B30(0);
    func_00182B20(0);
    base = *(u8 **)(D_00CBD390 + *(u8 *)D_00CBD311 * 4);
    s1 = 0xFFFF;
    for (i = 0; i < 0x96; i++) {
        u8 *p = base + i * 0x270;
        for (j = 0; j < 0x17; j++) {
            s32 k = (u16)(*(u16 *)(p + j * 0x18 + 0x40) >> 5);
            if (k >= 0x5CA && k < 0x5E2) {
                s1 = *(u16 *)(base + i * 0x270 + 0x26C);
                goto found;
            }
        }
    }
found:
    if (s1 == 0xFFFF) {
        D_003EA780 = 5;
        return;
    }
    s0 = func_00208250(s1);
    if (s0 == func_001A5F20(4)) {
        D_003EA780 = 5;
        return;
    }
    func_00B79620(func_00208250(s1));
    D_003EA780 = 4;
}
