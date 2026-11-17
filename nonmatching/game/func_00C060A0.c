/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_00952420(char *, u16, s32, s32);
extern s32 func_009909D0(char *, s32);
extern s32 func_009B32D0(u16, u16, s32);
extern s32 func_00952A50(u16);
extern s32 func_00952910(char *, u16);
extern s32 func_009B3070(u16, u16);
extern s32 func_00288670(s32, s32, s32);
extern void func_0096D0A0(char *, u16, s32);
extern s32 func_0098F290(char *);
extern char D_00CB5397[];
extern char D_005926E0[];
extern char D_00592980[];

s32 func_00C060A0(char *arg0, s32 arg1, char *arg2) {
    s32 s2 = 0x1800;
    u16 s4 = *(u16 *)(arg0 + 0x26);
    s32 s3;
    s32 t;
    u16 a0;

    if (*(u8 *)D_00CB5397 != 0) {
        s2 = 0x2800;
        if (func_00952420(arg0, *(u16 *)(arg0 + 0x2A), 0x2000, 0x640000) != 0
            && func_00952420(arg0, *(u16 *)(arg0 + 0x2A), 0x3000, 0x100000) != 0) {
            if ((u8)func_009909D0(arg0, 0x24000) == 0
                && func_00952420(arg0, *(u16 *)(arg0 + 0x120), 0x2000, 0x900000) != 0
                && func_00952420(arg0, *(u16 *)(arg0 + 0x120), 0x3000, 0x240000) != 0) {
                s4 = (u16)func_009B32D0(*(u16 *)(arg0 + 0x120), *(u16 *)(arg0 + 0x26), 0x2000);
            } else {
                s4 = (u16)func_009B32D0(*(u16 *)(arg0 + 0x2A), *(u16 *)(arg0 + 0x26), 0x2000);
            }
        }
    } else {
        if ((u8)func_00952A50(s4) >= 0x3C) {
            s4 = (u16)func_00952910(arg0, s4);
        }
    }
    a0 = *(u16 *)(arg2 + 0x28);
    if (a0 != 0xFFFF && (*(u32 *)(arg2 + 0x10) % *(u8 *)D_005926E0) != 0) {
        s4 = a0;
    } else {
        *(u16 *)(arg2 + 0x28) = s4;
    }
    s3 = (u16)s2 >= (u16)func_009B3070(*(u16 *)(arg0 + 0x26), s4);
    if (func_00952420(arg0, s4, 0x1000, 0x1000000) == 0) {
        s3 = 0;
    }
    if ((u8)func_00952A50(s4) >= 0x63) {
        s3 = 0;
    } else if ((u8)func_00952A50(*(u16 *)(arg0 + 0x26)) >= 0x63) {
        s3 = 0;
    }
    t = func_00288670(*(u8 *)(D_00592980 + *(u8 *)(arg0 + 0x12) * 105 * 256 + *(u8 *)(arg0 + 0x11) * 840 + 0x81) & 0x7F,
                      0x28, *(u8 *)(arg0 + 0x12) * 105);
    s2 = t * 4 + 0x400;
    if ((s2 - 0x100) * (s2 - 0x100) < arg1) {
        s3 = 0;
    }
    func_0096D0A0(arg0, s4, s3);
    if (arg1 >= 0x40001) {
        if (func_0098F290(arg0) != 0) {
            return 1;
        }
        if ((u16)func_009B3070(*(u16 *)(arg0 + 0x120), *(u16 *)(arg0 + 0x2A)) > 0x2000) {
            return 1;
        }
    }
    if (s2 * s2 < arg1) {
        return 1;
    }
    return 2;
}
