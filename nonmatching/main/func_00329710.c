/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_00333600(s32);
extern void func_0030EE30(f32 *);
extern f32 func_0030EBB0(s32, s32, f32);
extern s32 func_00340880(f32, f32);
extern void func_00351CF0(void *);
extern s32 func_00341910(s32, s32, s32);
extern s32 func_00338AD0(s32, void *, s32, void *);
extern void func_00338A60(s32, void *);
extern void func_00338930(void *);
extern void func_003387D0(void *, void *, void *);
extern void func_003389F0(void *, s32, s32);
extern s32 func_003411D0(void *);
extern void func_0030DCC0(void *, void *, s32);
extern void func_00328E00(void);
extern void func_00328A70(void);
extern void func_00329560(void);
extern char D_003E17B0[];

s32 func_00329710(u8 *job) {
    u8 *p;
    s32 flags;
    f32 pos[3];
    f32 x;
    f32 z;
    s32 id;

    p = *(u8 **)(job + 0x3C);
    flags = 0;
    flags |= func_00333600(4);
    flags |= func_00333600(6);
    flags |= func_00333600(5);
    func_0030EE30(pos);
    x = func_0030EBB0(p[0x78], 1, pos[0]);
    z = func_0030EBB0(p[0x78], 1, pos[2]);
    if (func_00340880(x, z) != 0) {
        func_00351CF0(p);
    }
    if (p[8] == 0 && flags == 0) {
        return 0;
    }
    if (flags == 0) {
        if ((s32)(p[0x78] - 1) / 11 == (s32)(p[0xB8] - 1) / 11) {
            s32 *cnt = (s32 *)(p + p[0xE] * 4 + 0x314);
            *cnt = *cnt + 1;
            id = func_00338AD0(0x8000000E, func_00328E00, 5, D_003E17B0);
            func_00338A60(id, job);
            func_00338930(job);
            return 1;
        }
    }
    if (func_00341910(1, 5, 10) != 0) {
        id = func_00338AD0(0x8000000E, func_00328A70, 5, D_003E17B0);
        func_00338A60(id, job);
        func_00338930(job);
        return 1;
    }
    func_003387D0(job, func_00329560, D_003E17B0);
    func_003389F0(job, 0, *(s32 *)(job + 0x28));
    func_003389F0(job, 1, p[0xB8]);
    func_003389F0(job, 2, func_003411D0(p + 0xB4));
    func_0030DCC0(p + 0x6C, p + 0x70, p[0xB8]);
    return 0;
}
