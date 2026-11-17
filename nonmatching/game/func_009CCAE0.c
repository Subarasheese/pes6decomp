/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern u8 *D_003E7574;
extern char D_00591E18[];
extern char D_00591E19[];
extern char D_00591E4C[];
extern char D_005926E4[];

extern s32 func_00207D10(void *a0);
extern s32 func_00207E20(void *a0);
extern void func_002084C0(void *a0);
extern void func_00209540(void *a0, s32 a1, s32 a2);
extern void func_0027A600(void *a0, s32 a1);
extern void func_0027D0B0(void *a0, s32 a1);
extern void func_0027D650(s32 a0);
extern s32 func_0027E780(void *a0);
extern void func_00284AB0(void *a0, u16 a1, s32 a2, s32 a3, s32 a4);
extern void func_00930240();
extern s32 func_009B30B0(u16 a0, u16 a1);
extern u16 func_009B3220(u16 a0, u16 a1, s32 a2);
extern u32 func_009B33A0(void *a0, s32 a1, s32 a2);
extern u16 func_009B3480(void *a0, f32 a1, f32 a2);
extern s32 func_009B9CE0(void *a0, s32 a1, s32 a2);
extern void func_009BD890(void *a0);
extern void func_009BDE40(void *a0);
extern s32 func_009BE1F0(void *a0, s32 a1);
extern void func_009BF460(void *a0);
extern s32 func_009C1230(void *a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6);
extern void func_009C3A40(void *a0);
extern s32 func_009CA5A0(void *a0, u16 a1, s32 a2, s32 a3);
extern void func_00A008A0(void *a0, u16 a1, s32 a2);
extern void func_00A0C040(void *a0);
extern void func_00A0D140(void *a0);
extern void func_00A99360(void *a0, s32 a1);
extern u16 func_00A9DFF0(void *a0, s32 a1);
extern void func_00B7C7F0(void *a0);
extern s32 func_00BBB8C0(s32 a0);
extern void func_00BC2BF0(void);
extern void func_00C1EE80(void *a0);

void func_009CCAE0(u8 *p) {
    u16 s0;
    u16 s2;
    u16 st;
    u8 *q;
    s32 a1;

    if (*p != *(u8 *)D_00591E18) {
        func_0027A600(p, 1);
    }
    func_009B33A0(p, (s32)*(f32 *)(D_003E7574 + 0x1454), (s32)*(f32 *)(D_003E7574 + 0x145C));
    func_00A99360(p, -0x190);
    *(u16 *)(p + 0x42) = *(u16 *)(p + 0x28);
    st = *(u16 *)(p + 0x18);

    if (st == 0x90) {
        *(u16 *)(p + 0x38) = func_00A9DFF0(p, 0x3C);
        a1 = *(u8 *)(*(u8 **)(p + 4) + 0x2D);
        *(u16 *)(p + 0x26) = *(u16 *)(p + 0x26) + (u16)(*(u16 *)(p + 0x38) * (a1 ? -1 : 1));
        func_00930240(p, a1);
        *(f32 *)(p + 0xE4) = (9.0f * *(f32 *)(p + 0xE4)) / 10.0f;
        if (func_00207D10(*(void **)(p + 4)) != 0) {
            func_00C1EE80(p);
        }
        q = *(u8 **)(p + 4);
        if (!(*(f32 *)(q + 0x38) < (f32)(*(u8 *)(*(u8 **)(q + 4) + 3) * 2))) {
            func_00A0C040(p);
        }
    } else if (st == 0x81) {
        *(u16 *)(p + 0x38) = func_00A9DFF0(p, 0x5A);
        a1 = *(u8 *)(*(u8 **)(p + 4) + 0x2D);
        *(u16 *)(p + 0x26) = *(u16 *)(p + 0x26) - (u16)(*(u16 *)(p + 0x38) * (a1 ? -1 : 1));
        func_00930240(p, a1);
        if (func_00207D10(*(void **)(p + 4)) != 0) {
            func_00C1EE80(p);
        }
        if (func_009B9CE0(p, 0x14, *(u8 *)(*(u8 **)(*(u8 **)(p + 4) + 4) + 3) * 2) != 0) {
            return;
        }
        if (func_009CA5A0(p, *(u16 *)(p + 0x26), 0xA, 0xA) == 0) {
            q = *(u8 **)(p + 4);
            if (!(*(f32 *)(q + 0x38) < (f32)(*(u8 *)(*(u8 **)(q + 4) + 3) * 2))) {
                func_00A0C040(p);
            }
        }
    } else if (st == 0x80) {
        func_00930240(p);
        if (func_00207D10(*(void **)(p + 4)) != 0) {
            func_00C1EE80(p);
        }
        if (func_009B9CE0(p, 0x14, *(u8 *)(*(u8 **)(*(u8 **)(p + 4) + 4) + 3) * 2) == 0) {
            if (func_009CA5A0(p, *(u16 *)(p + 0x26), 0x12, 0x12) == 0) {
                q = *(u8 **)(p + 4);
                if (!(*(f32 *)(q + 0x38) < (f32)(*(u8 *)(*(u8 **)(q + 4) + 3) * 2))) {
                    func_00A0C040(p);
                }
            }
        }
    } else if (st == 0x71) {
        a1 = *(u8 *)(*(u8 **)(p + 4) + 0x2D);
        *(u16 *)(p + 0x26) = *(u16 *)(p + 0x26) - (u16)(*(u16 *)(p + 0x38) * (a1 ? -1 : 1));
        func_00930240(p, a1);
        if (func_00207D10(*(void **)(p + 4)) != 0) {
            if (*p != *(u8 *)D_00591E18) {
                func_00C1EE80(p);
            } else {
                func_002084C0(*(void **)(p + 4));
                *(u8 *)(p + 0x16) = 0x81;
                *(u16 *)(p + 0x18) = 0;
            }
        }
    } else if (st == 0x70) {
        *(u16 *)(p + 0x38) = func_00A9DFF0(p, 0xB4);
        a1 = *(u8 *)(*(u8 **)(p + 4) + 0x2D);
        *(u16 *)(p + 0x26) = *(u16 *)(p + 0x26) - (u16)(*(u16 *)(p + 0x38) * (a1 ? -1 : 1));
        func_00930240(p, a1);
        if (func_00207D10(*(void **)(p + 4)) != 0) {
            if (*p != *(u8 *)D_00591E18) {
                func_00C1EE80(p);
            } else {
                func_002084C0(*(void **)(p + 4));
                *(u8 *)(p + 0x16) = 0x81;
                *(u16 *)(p + 0x18) = 0;
            }
        }
    } else if (st == 0x60) {
        if (func_00207E20(*(void **)(p + 4)) != 0) {
            if (func_009BE1F0(p, 0x80) != 0) {
                func_009BDE40(p);
            }
        }
        q = *(u8 **)(p + 4);
        if (!(*(f32 *)(q + 0x38) <= (f32)(*(u16 *)(*(u8 **)(q + 4) + 8) * 2))) {
            func_00930240(p);
        }
        if (func_009B9CE0(p, 0x1E, 0x2E) != 0) {
            return;
        }
        if (func_00207D10(*(void **)(p + 4)) != 0) {
            if (*p != *(u8 *)D_00591E18) {
                func_00C1EE80(p);
            } else {
                func_002084C0(*(void **)(p + 4));
                *(u8 *)(p + 0x16) = 0x81;
                *(u16 *)(p + 0x18) = 0;
            }
        }
        if (*p == *(u8 *)D_00591E18) {
            func_009BF460(p);
        }
    } else if (st == 0x50) {
        s0 = func_009B3480(p, *(f32 *)(D_003E7574 + 0x1454), *(f32 *)(D_003E7574 + 0x145C));
        if (*(s32 *)(p + 0xB0) & 0x10000) {
            *(u16 *)(p + 0x2C) = func_009B3480(p, *(f32 *)(p + 0x88), *(f32 *)(p + 0x8C));
            *(s16 *)(p + 0x1CE) = (s32)*(f32 *)(D_003E7574 + 0x1454);
            *(s16 *)(p + 0x1D0) = (s32)*(f32 *)(D_003E7574 + 0x145C);
        }
        func_00A008A0(p, *(u16 *)(p + 0x38), 1);
        *(u16 *)(p + 0x42) = *(u16 *)(p + 0x28);
        func_00930240(p);
        if (func_009B9CE0(p, 0xC, 0xC) != 0) {
            return;
        }
        func_0027D0B0(p, 0xC);
        func_00A0D140(p);
        q = *(u8 **)(p + 4);
        if ((*(u16 *)(q + 0x30) == 0x278 && !(*(f32 *)(q + 0x38) < 25.0f)
             && (u16)func_009B30B0(s0, *(u16 *)(p + 0x2C)) >= 0x20)
            || func_00207D10(*(void **)(p + 4)) != 0) {
            func_002084C0(*(void **)(p + 4));
            if (*(s32 *)(p + 0xB0) & 0x10000) {
                *(u8 *)(p + 0x16) = 0x9D;
                *(u16 *)(p + 0x18) = 0;
            } else {
                *(u8 *)(p + 0x45) = 0;
                *(u8 *)(p + 0x16) = 0x82;
                *(u16 *)(p + 0x18) = 0;
                if ((u16)func_009B30B0(*(u16 *)(p + 0x26), *(u16 *)(p + 0x2C)) < 0x21) {
                    if (!(func_009B33A0(p, *(s16 *)(p + 0x1CE), *(s16 *)(p + 0x1D0)) < 0x40000)) {
                        *(u8 *)(p + 0x45) = 3;
                    }
                }
            }
        }
    } else if (st == 0x40) {
        *(u8 *)(p + 0x66) = 2;
        if (!(*(s32 *)(p + 0xB0) & 0x10000)) {
            s2 = *(u16 *)(p + 0x34);
            s0 = s2;
        } else {
            s2 = func_009B3480(p, *(f32 *)(D_003E7574 + 0x1454), *(f32 *)(D_003E7574 + 0x145C));
            s0 = s2;
            if ((u16)func_009B30B0(*(u16 *)(p + 0xA8), s2) >= 0x18) {
                s2 = *(u16 *)(p + 0xA8);
            }
        }
        *(u16 *)(p + 0x26) = func_009B3220(s2, *(u16 *)(p + 0x26), 0x200);
        *(u16 *)(p + 0x42) = *(u16 *)(p + 0x28);
        func_00930240(p);
        if (func_009B9CE0(p, 8, 8) != 0) {
            return;
        }
        if (*p == *(u8 *)D_00591E18) {
            s32 t = *(s32 *)(p + 0x1C);
            func_00284AB0(p, *(u16 *)(p + 0x26), (t * 12) / 10 + 0x200,
                          (s32)(4.0f + (-*(f32 *)(D_003E7574 + 0x30) / 188.0f)), 0);
            func_00BC2BF0();
            *(s32 *)(D_003E7574 + 0x74) = -0xC00 - func_00BBB8C0(0x400);
            func_0027D650(0xB);
            *(u8 *)(D_003E7574 + 0x65) = *(u8 *)D_005926E4;
        }
        q = *(u8 **)(p + 4);
        if (!(*(f32 *)(q + 0x38) < 20.0f) && (u16)func_009B30B0(*(u16 *)(p + 0x26), s0) >= 0x28) {
            func_00C1EE80(p);
        } else if (func_00207D10(*(void **)(p + 4)) != 0) {
            func_00C1EE80(p);
            func_00209540(*(void **)(p + 4), 0x11, 0);
            *(u8 *)(p + 0x16) = 0x9D;
            *(u16 *)(p + 0x18) = 0;
        }
    } else if (st == 0) {
        func_00B7C7F0(p);
    }

    {
        s32 a2 = (u16)func_0027E780(p);
        if (*p != *(u8 *)D_00591E4C) {
            if (*p != *(u8 *)D_00591E19 || *(s32 *)(D_003E7574 + 0x50) > 0x300) {
                if (func_009C1230(p, 0x18, a2, 0, 0, 0, 0) != 0) {
                    func_009C3A40(p);
                }
            }
        }
        func_009BD890(p);
    }
}
