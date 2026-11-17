/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern char D_00591F14[];
extern char D_00591E4F[];
extern char D_00591E50[];
extern char D_00591E67[];
extern char D_005926F2[];
extern char D_00591DC4[];
extern s32 func_00A07B40(void);
extern s32 func_00A0D0F0(void *p);
extern s32 func_00A17240(void *p);
extern s32 func_00A1A5C0(void *p);
extern s32 func_00C5EAB0(void);
extern s32 func_009142F0(void *p, s32 a1);
extern s32 func_00914390(void *p, s32 a1);
extern s32 func_00915EA0(void *p);
extern s32 func_009832C0(void *p, s32 a1);
extern s32 func_00916620(void *p);
extern s32 func_00983260(void *p, s32 a1, s32 a2);
extern s32 func_0090BA30(void *p);
extern s32 func_00967560(void *p);

s32 func_0096B070(u8 *p, s32 a1, s32 a2)
{
    s32 v0;
    s32 v1;
    s32 idx;

    if (*(u8 *)D_00591F14 != 0) {
        func_00983260(p, 7, a2);
        func_0090BA30(p);
        return 1;
    }
    if (func_00A07B40() != 0) {
        idx = p[0x13] << 1;
        if (p[0] == (u8)D_00591E4F[idx]) {
            if ((u8)D_00591E67[p[0x12]] != 0) {
                if (func_00967560(p) != 0) {
                    func_00983260(p, 0xC, a2);
                } else {
                    func_00983260(p, 0x25, a2);
                }
            } else {
                if (func_00967560(p) != 0) {
                    func_00983260(p, 0xC, a2);
                    return 1;
                }
                func_00983260(p, 0xE, a2);
            }
            return 1;
        }
        if (p[0] == (u8)D_00591E50[idx] || func_00A0D0F0(p) != 0) {
            if (func_00A17240(p) != 0 || func_00A1A5C0(p) != 0) {
                func_00983260(p, 0, a2);
                func_0090BA30(p);
                p[0x201] = 4;
                return 1;
            }
            if ((u8)D_00591E67[p[0x12]] == 1 && func_00C5EAB0() != 0) {
                func_00983260(p, 0x29, a2);
                func_0090BA30(p);
                p[0x201] = 4;
                return 1;
            }
            if ((s32)p[0] % (s32)*(u8 *)D_005926F2 != (s32)(*(u32 *)D_00591DC4 % (u32)*(u8 *)D_005926F2)) {
                v0 = func_009142F0(p, a1) != 0;
            } else {
                v0 = 1;
            }
            if (v0 == 0) {
                if (*(s32 *)(p + 0xB0) != *(s32 *)(p + 0xB8))
                    *(s32 *)(p + 0xB0) = *(s32 *)(p + 0xB8);
                return 2;
            }
        } else {
            if ((s32)p[0] % (s32)*(u8 *)D_005926F2 != (s32)(*(u32 *)D_00591DC4 % (u32)*(u8 *)D_005926F2)) {
                v0 = func_009142F0(p, a1) != 0;
            } else {
                v0 = 1;
            }
            if (v0 == 0 && func_00914390(p, 0) == 0 && func_00914390(p, 2) == 0
                && func_00914390(p, 3) == 0) {
                if (*(s32 *)(p + 0xB0) != *(s32 *)(p + 0xB8))
                    *(s32 *)(p + 0xB0) = *(s32 *)(p + 0xB8);
                return 2;
            }
        }
    }
    v1 = p[0x1DD];
    if (v1 >= 8 && v1 < 0x24) {
        func_00915EA0(p);
        v1 = p[0x1DD];
    }
    if (v1 == 0x28) return 0;
    if (v1 == 2 || v1 == 1 || v1 == 3) {
        if (p[0x1D5] != 0) {
            func_009832C0(p, 0x27);
            *(s32 *)(p + 0x1E8) = p[0x1D5];
        }
        return 0;
    }
    if (v1 >= 0x24 && v1 < 0x37)
        func_00916620(p);
    return 0;
}
