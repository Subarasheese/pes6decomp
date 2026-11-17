/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_00510FD0[];
extern char D_0092F0DC[];
extern u8 D_003E9FD4;
extern char D_00591BE4[];
extern char D_00591E64[];
extern char D_00591E4D[];
extern char D_0058E5B0[];
extern char D_00CBBDFD[];
extern char D_005924B0[];

extern s32 func_00305E60(void *a, void *b);
extern void func_00304A00(void);
extern void func_00304CF0(void);
extern void func_00304F80(void);
extern void func_00303F30(void);
extern void func_00303E50(void);
extern void func_00303D60(void);
extern void func_00303F90(void *a);
extern s32 func_009E1C90(s32 a);
extern s32 func_00BF6280(void);
extern s32 func_002D33C0(s32 a);
extern void func_002D33D0(s32 a, s32 b);
extern void func_002D33E0(s32 a, s32 b, s32 c, s32 d);
extern s32 func_00BDA0E0(void);
extern s32 func_00BDA160(void);
extern s32 func_00151EA0(s32 a);
extern s32 func_009B45F0(void);
extern s32 func_009B4650(void);
extern s32 func_002D4BA0(void);


s32 func_003052D0(void *arg) {
    u8 *p;
    s32 s3;
    s32 s1;
    s32 r;
    s32 mode;

    p = *(u8 **)((u8 *)arg + 0x18);
    mode = *(s32 *)D_00510FD0;
    s3 = -1;
    if (mode == 12 || mode == 9) {
        if (*(s32 *)D_0092F0DC != 0) {
            goto loop;
        }
        if (D_003E9FD4 != 1) {
            p[0x54] = 1;
            func_00305E60(arg, (void *)func_00304A00);
            return 0;
        }
    }
    s3 = func_009E1C90(1) & 0xFF;
    if (s3 == 12) {
        r = func_00BF6280();
        if (r == 16 || r == 0) {
            if (func_002D33C0(3) != 0) {
                func_002D33D0(3, 40000 / *(u8 *)D_00591BE4);
            }
            func_00305E60(arg, (void *)func_00304CF0);
            return 0;
        }
    }
loop:
    r = 0;
    for (s1 = 0; s1 < 8; s1++) {
        s32 (*fn)(void *) = *(s32 (**)(void *))(p + 8 + s1 * 4);
        if (fn != 0) {
            if (fn(p) != 0) {
                r = 1;
                break;
            }
        }
    }
    if (r == 0) {
        return 1;
    }
    if (*(s32 *)(p + 0x38) + *(s32 *)(p + 0x3C) != 0) {
        if (s3 == -1) {
            p[0x56] = 0;
        } else if (s3 == 12 && func_00BF6280() == 0) {
            p[0x56] = *(u8 *)D_005924B0;
        } else if (s3 == 5) {
            p[0x56] = *(u8 *)D_00CBBDFD & 1;
        } else if (s3 == 14) {
            if (func_00BDA0E0() != 0) {
                s32 a = *(u8 *)D_00591E64;
                if (a != 0xFF) {
                    a = a % 23;
                } else {
                    a = 1;
                }
                p[0x56] = *(u8 *)(D_0058E5B0 + a * 576 + 0x12) ^ 1;
            } else if (func_00BDA160() != 0) {
                s32 a = *(u8 *)D_00591E4D;
                if (a != 0xFF) {
                    a = a % 23;
                } else {
                    a = 1;
                }
                p[0x56] = *(u8 *)(D_0058E5B0 + a * 576 + 0x12);
            }
        } else {
            s32 v = *(u8 *)(D_00591BE4 - 0x22);
            if (v == 0) {
                p[0x56] = p[0x56] == 0;
            } else if (v == 1) {
                s32 x = func_00151EA0(100) & 0xFFFF;
                s32 y = func_00151EA0(100) & 0xFFFF;
                p[0x56] = ((x * y) % 3) != 0;
            } else {
                s32 m = *(u8 *)(D_00591BE4 + 0x348);
                if (m == 2) {
                    s32 x = func_00151EA0(100) & 0xFFFF;
                    s32 y = func_00151EA0(100) & 0xFFFF;
                    p[0x56] = ((x * y) % 3) == 0;
                } else if (m == 1) {
                    s32 x = func_00151EA0(100) & 0xFFFF;
                    s32 y = func_00151EA0(100) & 0xFFFF;
                    p[0x56] = ((x * y) % 3) != 0;
                } else if (m == 0 || m == 3) {
                    p[0x56] = p[0x56] == 0;
                }
            }
        }
        if (func_009B45F0() != 0) {
            s32 t = func_009B4650() & 0xFF;
            if (t == 7 || t == 6 || t == 0) {
                p[0x56] = *(u8 *)D_005924B0;
            }
        }
    }
    if (func_002D4BA0() == 0) {
        s32 i = p[0x56];
        func_002D33E0(*(s32 *)(p + i * 4 + 0x2C) + p[i + 0x34], 3, 2, 0);
    }
    p[p[0x56] + 0x34] = p[p[0x56] + 0x34] + 1;
    p[p[0x56] + 0x34] = p[p[0x56] + 0x34] % p[p[0x56] + 0x36];
    *(s32 *)(p + p[0x56] * 4 + 0x38) = *(s32 *)(p + p[0x56] * 4 + 0x38) + 1;
    *(s32 *)(p + 0x28) = 0;
    p[0x57] = 0;
    *(s32 *)(p + 0x8) = 0;
    *(s32 *)(p + 0xC) = 0;
    *(s32 *)(p + 0x10) = 0;
    *(s32 *)(p + 0x14) = 0;
    *(s32 *)(p + 0x18) = 0;
    *(s32 *)(p + 0x1C) = 0;
    *(s32 *)(p + 0x20) = 0;
    *(s32 *)(p + 0x24) = 0;
    *(s32 *)p = 0;
    if (*(s32 *)D_00510FD0 == 9) {
        if (*(s32 *)p < 8) {
            for (s1 = 0; s1 < 8; s1++) {
                if (*(s32 *)(p + 8 + s1 * 4) == 0) {
                    *(void **)(p + 8 + s1 * 4) = (void *)func_00303F30;
                    *(s32 *)p = *(s32 *)p + 1;
                    break;
                }
            }
        }
    } else if (s3 == 5) {
        if (*(s32 *)p < 8) {
            for (s1 = 0; s1 < 8; s1++) {
                if (*(s32 *)(p + 8 + s1 * 4) == 0) {
                    *(void **)(p + 8 + s1 * 4) = (void *)func_00303E50;
                    *(s32 *)p = *(s32 *)p + 1;
                    break;
                }
            }
        }
        if (*(s32 *)p < 8) {
            for (s1 = 0; s1 < 8; s1++) {
                if (*(s32 *)(p + 8 + s1 * 4) == 0) {
                    *(void **)(p + 8 + s1 * 4) = (void *)func_00303D60;
                    *(s32 *)p = *(s32 *)p + 1;
                    break;
                }
            }
        }
    } else {
        func_00303F90(p);
    }
    func_00305E60(arg, (void *)func_00304F80);
    return 1;
}
