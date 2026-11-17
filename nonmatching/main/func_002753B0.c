/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_003AB6D0[];
extern char D_003AB720[];
extern char D_005927E0[];
extern char D_003D9C70[];
extern u32 func_00151EA0(s32 a);
extern void func_00274CE0(u8 *p, s32 mode);

void func_002753B0(u8 *p, s32 mode, s32 a2, s32 a3) {
    s16 ts3[36];
    f32 tf3[31];
    s16 ts2[36];
    f32 tf2[31];
    s16 ts1[36];
    f32 tf1[31];
    s16 ts0[36];
    f32 tf0[31];
    s32 i;
    s32 a5;
    u32 r;
    u32 r2;
    u32 t;
    s32 count;
    s32 s2;
    s32 found;
    u8 s1;
    u8 s0;
    u32 *s6;
    u8 s7;
    f32 f;

    for (i = 0; i < 36; i++) ts0[i] = ((s16 *)D_003AB6D0)[i];
    for (i = 0; i < 31; i++) tf0[i] = ((f32 *)D_003AB720)[i];
    for (i = 0; i < 36; i++) ts1[i] = ts0[i];
    for (i = 0; i < 31; i++) tf1[i] = tf0[i];

    f = tf1[p[0]] * (f32)(u16)ts1[p[1] * 6 + p[2]];
    if (f >= 2147483648.0f) r = (u32)(s32)(f - 2147483648.0f) | 0x80000000;
    else r = (u32)(s32)f;
    r = r & 0xFFFF;
    if (r == 0) {
        a5 = 0;
    } else if ((s32)r < 0x15) {
        a5 = 1;
    } else {
        a5 = 2;
    }
    if (a5 == 2) return;

    s1 = p[0];
    s0 = p[1];
    for (i = 0; i < 36; i++) ts3[i] = ts0[i];
    for (i = 0; i < 31; i++) tf3[i] = tf0[i];
    f = tf3[p[0]] * (f32)(u16)ts3[p[1] * 6 + p[2]];
    if (f >= 2147483648.0f) r2 = (u32)(s32)(f - 2147483648.0f) | 0x80000000;
    else r2 = (u32)(s32)f;
    r2 = r2 & 0xFFFF;
    if (p[2] != 0) {
        if (a2 == 1) {
        } else if (a2 != 2) {
            return;
        } else if (p[2] != 5) {
            return;
        }
    }

    count = 0;
    s6 = (u32 *)(D_005927E0 + a3 * 4 + 8);
    s7 = *(u32 *)D_003D9C70;
    s2 = 0;
    do {
        if (mode == 1) {
            s2 = func_00151EA0(0xE) & 0xFFFF;
        } else if (mode == 0) {
            u32 v = *s6;
            for (i = 0; i < 0xE; i++) {
                if (v == ((u32 *)D_003D9C70)[i]) {
                    s2 = i;
                    break;
                }
            }
        } else {
            s2 = func_00151EA0(0xE) & 0xFFFF;
        }
        p[0] = ((u32 *)D_003D9C70)[s2];
        found = 0;
        for (i = 0; i < 0xE; i++) {
            if (p[0] == ((u32 *)D_003D9C70)[i]) {
                found = 1;
                break;
            }
        }
        if (found == 0) {
            p[0] = s7;
        }
        func_00274CE0(p, mode);
        for (i = 0; i < 36; i++) ts2[i] = ((s16 *)D_003AB6D0)[i];
        for (i = 0; i < 31; i++) tf2[i] = ((f32 *)D_003AB720)[i];
        f = tf2[p[0]] * (f32)(u16)ts2[p[1] * 6 + p[2]];
        if (f >= 2147483648.0f) t = (u32)(s32)(f - 2147483648.0f) | 0x80000000;
        else t = (u32)(s32)f;
        if ((s32)(t & 0xFFFF) < (s32)r2) {
            count++;
            p[0] = s1;
            p[1] = s0;
            if (count >= 100) break;
        } else {
            break;
        }
    } while (1);
}
