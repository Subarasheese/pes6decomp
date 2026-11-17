/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_002D33D0(s32, s32);
extern void func_00303F90(void *);
extern void func_003044E0(void *);
extern void func_00305E60(void *, void *);
extern s32 func_009E1C90(s32);
extern s32 func_00BF6280(void);
extern char D_00510FD0[];
extern char D_00591BE4[];
extern char D_0092F0DC[];
extern char D_00CB5F24[];
extern char D_00CB5F45[];
extern void func_00304660(void);
extern void func_003046F0(void);
extern void func_00304CF0(void);

s32 func_00304F80(void *arg0) {
    s32 *s0;
    s32 i;
    s32 r;
    s32 a1;
    s32 (*fn)(void *);
    s32 found;

    s0 = *(s32 **)((char *)arg0 + 0x18);
    s0[0x28 / 4] = s0[0x28 / 4] + 1;
    if (*(s32 *)D_00510FD0 == 0xC || *(s32 *)D_00510FD0 == 9) {
        if (*(s32 *)D_0092F0DC == 0) {
            s0[2] = 0; s0[3] = 0; s0[4] = 0; s0[5] = 0;
            s0[6] = 0; s0[7] = 0; s0[8] = 0; s0[9] = 0;
            s0[0] = 0;
            *(u8 *)((char *)s0 + 0x54) = 1;
            func_00303F90(s0);
            return 0;
        }
    }
    if (s0[0x28 / 4] < s0[0x40 / 4] * 5) {
        r = func_009E1C90(1) & 0xFF;
        if (r == 0xC) {
            r = func_00BF6280();
            if (r != 0x10 && r != 1 && r != 0) {
                return 0;
            }
        } else if (r != 5) {
            return 0;
        }
    }
    found = 0;
    for (i = 0; i < 8; i++) {
        fn = *(s32 (**)(void *))&s0[2 + i];
        if (fn != 0 && fn(s0) != 0) {
            found = 1;
            break;
        }
    }
    if (found == 0) {
        return 1;
    }
    if (*(s32 *)D_00CB5F24 == 1) {
        if (*(u8 *)D_00CB5F45 == 6) return 0;
        if (*(u8 *)D_00CB5F45 == 0x10) return 0;
    }
    a1 = (s0[0x28 / 4] < s0[0x44 / 4]) ? 0x50 : 0xF0;
    func_002D33D0(3, (a1 * 1000) / *(u8 *)D_00591BE4);
    s0[2] = 0; s0[3] = 0; s0[4] = 0; s0[5] = 0;
    s0[6] = 0; s0[7] = 0; s0[8] = 0; s0[9] = 0;
    s0[0] = 0;
    if (*(s32 *)D_00510FD0 == 0xC || *(s32 *)D_00510FD0 == 9) {
        if (s0[0] < 8) {
            for (i = 0; i < 8; i++) {
                if (s0[2 + i] == 0) {
                    *(void **)&s0[2 + i] = (void *)func_00304660;
                    s0[0] = s0[0] + 1;
                    break;
                }
            }
        }
    } else {
        if ((func_009E1C90(1) & 0xFF) == 5) {
            if (s0[0] < 8) {
                for (i = 0; i < 8; i++) {
                    if (s0[2 + i] == 0) {
                        *(void **)&s0[2 + i] = (void *)func_003046F0;
                        s0[0] = s0[0] + 1;
                        break;
                    }
                }
            }
        } else {
            func_003044E0(s0);
        }
    }
    s0[0x28 / 4] = 0;
    func_00305E60(arg0, (void *)func_00304CF0);
    return 1;
}
