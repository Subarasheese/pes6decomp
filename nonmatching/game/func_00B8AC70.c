/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_00207D80(void *, s32);
M2C_UNK func_00207390(s32, M2C_UNK);                /* extern */
M2C_UNK func_00209A00(void *, u16, s32);            /* extern */
void **func_00B2A420(s32);                          /* extern */
M2C_UNK func_00B2ACF0(void *);                      /* extern */
s32 func_00B8B4F0(void *);                          /* extern */
s32 func_00C36F20(u8, M2C_UNK);                     /* extern */
M2C_UNK func_00C36F50(u8, M2C_UNK, s32);            /* extern */
void *func_00C375E0(u8);                            /* extern */
s32 func_00C376A0(u8);                              /* extern */
M2C_UNK func_00C376D0(u8);                          /* extern */
s32 func_00C37700(u8);                              /* extern */
s32 func_00C37760(u8, s32);                         /* extern */

void func_00B8AC70(void *arg0) {
    void *s0;
    s32 s4;
    s32 s7;
    s32 fp;
    s32 cnt;
    s32 i;
    s32 off;
    s32 diff;
    s32 s3;
    s32 s1;
    s32 s2;
    s32 s6;
    void **r;
    void *a0;
    u8 *e;

    s0 = func_00C375E0(M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x54));
    s3 = 0;
    s1 = 0;
    s2 = 0;
    s6 = 0;
    func_00B2ACF0(arg0);
    cnt = M2C_FIELD(s0, u8 *, 8);
    s4 = func_00C37700(M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x54)) - 3;
    if (s4 < cnt) {
        e = M2C_FIELD(s0, u8 **, 4) + s4 * 10;
        s3 = *(u16 *)e;
        s1 = *(u16 *)(e + 2);
        s2 = *(u16 *)(e + 4);
        s6 = *(u16 *)(e + 6);
    }
    if (((s4 + 1) < cnt) && (s4 == (func_00C36F20(M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x54), 0) & 0xFF))) {
        fp = s4 * 20;
        s7 = *(u16 *)(M2C_FIELD(s0, u8 **, 0) + fp + 0x22);
        if (s7 >= s3) {
            if (func_00C36F20(M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x54), 2) == 0) {
                s7 = s3;
            }
        }
        if (!(M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), f32 *, 0x38) < (f32) s7)) {
            r = func_00B2A420(func_00C37760(M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x54), s4) & 0xFF);
            if ((s4 != 0) && (M2C_FIELD(M2C_FIELD(s0, u8 **, 4) + s4 * 10, u8 *, 8) != 0)) {
                if (M2C_FIELD(M2C_FIELD(*r, void **, 4), f32 *, 0x38) < (f32) (s3 - *(u16 *)(M2C_FIELD(s0, u8 **, 0) + fp + 0xE))) {
                    goto join;
                }
            }
            func_00C36F50(M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x54), 0, (s4 + 1) & 0xFF);
        }
    }
join:
    if (func_00C376A0(M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x54)) != 0) {
        if (s2 == 0) {
            if (func_00B8B4F0(arg0) != 0) {
                M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 0xD2;
            }
            return;
        }
        if (func_00207D80(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), (s32) s2) == 0) {
            return;
        }
        func_00209A00(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), *M2C_FIELD(s0, u16 **, 0), s6 & 0xFFFF);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 0xD2;
        i = 1;
        if (s4 <= 0) {
            return;
        }
        off = 0x14;
        do {
            r = func_00B2A420(func_00C37760(M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x54), i) & 0xFF);
            a0 = M2C_FIELD(*r, void **, 4);
            func_00209A00(a0, M2C_FIELD(a0, u16 *, 0x30), (s6 - *(u16 *)(M2C_FIELD(s0, u8 **, 0) + off + 0xE)) & 0xFFFF);
            func_00207390(M2C_FIELD(*r, s32 *, 4), 0xA);
            i += 1;
            off += 0x14;
        } while (s4 >= i);
        return;
    }
    if (!((s4 + 1) < (s32) M2C_FIELD(s0, u8 *, 8))) {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 0xD2;
        return;
    }
    if (s3 != 0) {
        if (func_00207D80(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), (s32) s3) != 0) {
            goto go;
        }
    }
    if (s1 == 0) {
        return;
    }
    if (func_00207D80(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), (s32) s1) == 0) {
        return;
    }
go:
    s7 = func_00C36F20(M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x54), 1) & 0xFF;
    a0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4);
    func_00209A00(a0, M2C_FIELD(a0, u16 *, 0x30), s3 & 0xFFFF);
    i = 1;
    if (s4 > 0) {
        off = 0x14;
        do {
            r = func_00B2A420(func_00C37760(M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x54), i) & 0xFF);
            a0 = M2C_FIELD(*r, void **, 4);
            diff = s3 - *(u16 *)(M2C_FIELD(s0, u8 **, 0) + off + 0xE);
            if (!(M2C_FIELD(a0, f32 *, 0x38) <= (f32) diff)) {
                func_00209A00(a0, M2C_FIELD(a0, u16 *, 0x30), diff & 0xFFFF);
                func_00207390(M2C_FIELD(*r, s32 *, 4), 0xA);
            }
            i += 1;
            off += 0x14;
        } while (s4 >= i);
    }
    s7 += 1;
    if (s7 >= 3) {
        func_00C376D0(M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x54));
    }
    func_00C36F50(M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x54), 1, s7 & 0xFF);
}
