/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_0030D990(s32);
s32 func_0030EA70(void);
f32 func_0030EBB0(s32, s32, f32);
s32 func_0030EE80(f32 *);
f32 func_0030F590(s32);
s32 func_00333710(s32, s32);
s32 func_00340C80(f32);

s32 func_00347C90(u32 *out, char *a1) {
    s32 s4 = *(s32 *)(a1 + 0x40);
    s32 s0 = *(s32 *)(a1 + 0x44);
    u8 *s3 = *(u8 **)(a1 + 0x4c);
    u8 *s6 = *(u8 **)(a1 + 0x3c);
    f32 v[3];
    f32 f20, f21, f22, t;
    s32 s2, s1, a0, v1, v0;
    u8 *p;

    func_0030EE80(v);
    v[0] = func_0030EBB0(s3[0x15], 1, v[0]);
    v[2] = func_0030EBB0(s3[0x15], 1, v[2]);
    f20 = v[2] < 0 ? -v[2] : v[2];
    s2 = func_00340C80(5.0f);
    f22 = func_0030EBB0(s3[0x15], 1, func_0030F590(s3[0x15]));
    *out = 0;
    if (*(s32 *)(s3 + 0x28) == 5) {
        if (v[0] < -9497.0f || !(v[2] <= 4904.0f)) {
            if (func_0030D990(s3[0x15]) != 0) {
                *out |= 2;
            }
        }
    }
    if (*(s32 *)(s3 + 0x28) == 5) {
        f21 = v[0] < 0 ? -v[0] : v[0];
        t = func_0030F590(s3[0x15]);
        if (t < 0) t = -t;
        if (f21 < t) {
            *out |= 4;
        }
    }
    t = f22 - v[0];
    if (t < 0) t = -t;
    if (t < 1024.0f) {
        if (func_0030D990(s3[0x15]) != 0) {
            *out |= 8;
        }
    }
    if (s3[8] != 0) {
        *out |= 0x10;
    }
    if (f20 < 2344.0f) {
        if (*(s32 *)(s3 + 0x28) == 4) {
            *out |= 0x20;
        }
    }
    a0 = *out;
    v1 = a0 & 0x3f;
    if (v1 != 0) {
        *out = a0 | 0x80000000;
        return 1;
    }
    *out = 0;
    if (s3[0] < 16) {
        if (*(s32 *)(s3 + s3[0x13] * 8 + 0x18) == 4) {
            *out |= 2;
        }
    }
    s1 = s3[0x13];
    s0 = func_00333710(s0, s1);
    if (*(s32 *)(s4 + s1 * 60 + 0x54) >= 5) {
        if (!(s0 < 14)) {
            *out |= 4;
        }
    }
    if ((u32)(*(s32 *)(s3 + 0x28) - 4) < 2) {
        if (!(func_0030EA70() < 80)) {
            if (s0 == 16) {
                *out |= 8;
            }
        }
    }
    p = s6 + s3[0x13] * 12;
    a0 = *(s32 *)(p + 0x2fc);
    if (a0 != (s32)0xabababab) {
        v1 = *(s32 *)(p + 0x2f8);
        if (a0 - v1 < s2) {
            if (v1 - *(s32 *)(p + 0x2f4) < s2) {
                *out |= 0x10;
            }
        }
    }
    *out |= 0x20;
    return 1;
}
