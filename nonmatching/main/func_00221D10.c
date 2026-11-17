/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern u16 D_003E74DC[2];
s32 func_00210DF0();
s32 func_00221500(s32);
s32 func_00222EB0(u16, u8, s32);
s32 func_00223520(u16 *, u8 *);
s32 func_00223960(u16);
s32 func_00223A20();
s32 func_00223A30();
s32 func_00223B60();
s32 func_00223B70();
s32 func_00224860(u16, u8);
s32 D_00221D10(u16, u8, s32);

u8 func_00221D10(u16 arg0, u8 arg1, s32 arg2) {
    struct { u16 id; u8 pad; u8 slot; } A, B;
    s32 s0, s2, r, i, j;
    u16 o68;
    u8 s4;
    u16 *p;

    s0 = arg2;
    A.id = arg0;
    A.slot = arg1;
    if (s0 != 0 && s0 != 1 && s0 != 2) {
        s0 = 0;
    }
    if (func_00221500(func_00222EB0(arg0, arg1, s0) & 0xFFFF) == 1) {
        return 0xFF;
    }
    if (s0 != 0 && (A.id == 0x35 || A.id == 0x37)) {
        B.id = 0xFFFF;
        B.slot = A.slot;
        s2 = func_00222EB0(A.id, A.slot, s0) & 0xFFFF;
        j = 0;
        do {
            s4 = 0;
            do {
                p = &D_003E74DC[j];
                if (s2 == (func_00222EB0(*p, s4, 2) & 0xFFFF)) {
                    j = 2;
                    B.slot = s4;
                    s4 = 0x17;
                    B.id = *p;
                }
                s4++;
            } while ((s32)s4 < 0x17);
            j++;
        } while ((u32)j < 2);
        if (B.id == 0x35 || B.id == 0x37) {
            func_00223520(&B.id, &B.slot);
            return *(u8 *)(func_00223A30() + B.slot + B.id * 0x17);
        }
    }
    if (A.id == 0x11C) {
        return 0;
    }
    if ((u32)(A.id - 0x126) < 2) {
        if (A.slot >= 0x20) {
            return 0xFF;
        }
        r = func_00223960(A.id);
        if (r == 0) {
            return 0;
        }
        return *(u8 *)(r + A.slot + 0x1174);
    }
    s2 = A.slot;
    o68 = A.id;
    r = func_00223520(&A.id, &A.slot);
    if (r == 3) {
        return 0;
    }
    if (r == 1) {
        if (A.slot >= 0x20) {
            return 0xFF;
        }
        if ((u32)(o68 - 0x110) < 2) {
            r = func_00223B60();
            if (r == 0) return 0xFF;
            return *(u8 *)(r + A.slot + (A.id << 5));
        }
        if (s0 == 0) {
            if (func_00210DF0() == 2) {
                return func_00224860(o68, s2) & 0xFF;
            }
            return D_00221D10(o68, s2, 1) & 0xFF;
        }
        if (s0 == 1) {
            r = func_00223B60();
        } else {
            r = func_00223A20();
        }
        if (r == 0) return 0xFF;
        return *(u8 *)(r + A.slot + (A.id << 5));
    }
    if (r == 0) {
        if (A.slot >= 0x17) {
            return 0xFF;
        }
        if (s0 == 0) {
            r = func_00223B70();
        } else {
            r = func_00223A30();
        }
        if (r == 0) return 0xFF;
        return *(u8 *)(r + A.slot + A.id * 0x17);
    }
    return 0;
}
