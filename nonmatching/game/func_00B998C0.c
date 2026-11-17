/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern u32 func_009B33A0(void *, s32, s32);
extern char *Pes6Ball_Current;
extern char D_00591BE4[];
extern char D_00591E19[];
extern char D_00591E24[];
extern char D_00591E4C[];
extern char D_00591E4F[];

s32 func_00B998C0(char *arg0, u8 *arg1) {
    s32 own;
    s32 a2;
    s32 s0;
    s32 s3;
    s32 v1;
    s32 a0;
    u32 st;
    u32 m;
    u32 k;
    u8 id;
    u8 a5;

    id = M2C_FIELD(arg0, u8 *, 0x13);
    own = 0;
    if (M2C_FIELD(arg0, u8 *, 0) == *(u8 *)(D_00591E4F + id * 2)) {
        if (M2C_FIELD(arg0, u32 *, 0x110) < 0x01900000U) {
            own = 1;
        }
    }
    a5 = *arg1;
    s0 = 1;
    a2 = 1;
    if (*(u8 *)D_00591E4C != a5) {
        v1 = 1;
        a0 = 0;
        st = M2C_FIELD(Pes6Ball_Current, u16 *, 0x84);
        if (st != 0) {
            m = 0;
            k = 0;
            st -= 1;
            if (st < 0xB) {
                if (((1 << st) & 0x49F) != 0) {
                    k = 1;
                }
            }
            if (k != 0) {
                if (*(u32 *)D_00591E24 < ((*(u8 *)D_00591BE4) >> 1)) {
                    m = 1;
                }
            }
            if (m == 0) {
                v1 = 0;
            }
        }
        if (v1 != 0) {
            if (*(u8 *)D_00591E19 == a5) {
                a0 = 1;
            }
        }
        if (a0 == 0) {
            a2 = 0;
        }
    }
    if (a2 == 0) {
        s3 = 0;
        if (a5 == *(u8 *)(D_00591E4F + (id ^ 1) * 2)) {
            if (func_009B33A0(arg1, (s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x10), (s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x18)) < 0x40000U) {
                s3 = 1;
            }
        }
        if (s3 == 0) {
            s0 = 0;
        }
    }
    {
        u8 st2 = M2C_FIELD(arg0, u8 *, 0x16);
        u32 t = st2 - 1;
        s32 ok;
        s32 x;
        if (!(own == 0 && s0 == 0)) {
            return 0;
        }
        ok = 0;
        if (t < 0x1B && ((1 << t) & 0x06E00045)) ok = 1;
        if (!ok && st2 == 0x45) ok = 1;
        if (!ok) {
            t = st2 - 0xFD;
            if (t < 3U && ((1 << t) & 5)) ok = 1;
        }
        if (!ok) {
            x = (st2 == 0xA || st2 == 0x41) && M2C_FIELD(arg0, u16 *, 0x18) == 1;
            ok = x;
        }
        if (!ok) {
            x = (st2 == 0x24 || st2 == 0x25) && M2C_FIELD(arg0, u16 *, 0x18) == 1;
            ok = x;
        }
        if (!ok && (u32)(st2 - 0x26) < 3U) ok = 1;
        if (!ok) {
            ok = st2 == 0x2A && M2C_FIELD(arg0, u16 *, 0x18) == 1;
        }
        return ok != 0;
    }
}
