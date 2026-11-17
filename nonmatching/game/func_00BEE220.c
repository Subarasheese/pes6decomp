/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_009E1C90(s32);
extern void func_009E1CB0(s32);
extern void func_00BEDFD0(void);
extern s32 func_002DCA30(void);
extern void func_00BBB960(s32);
extern void func_00B27010(s32);
extern void func_00B25C50(s32);
extern s32 func_00208250(s32);
extern void func_001A5F50(s32, s32);
extern void func_001A5E00(s32);
extern s32 func_001A5BB0(s32);
extern void func_00AD0A20(void);
extern s32 func_00152130(s32, s32);
extern s32 func_00BF6270(void);
extern void func_00BA92A0(s32);
extern s32 func_00BA91C0(void);
extern void func_00BEC560(s32);
extern void func_00BF6240(s32);
extern u8 D_003EA7B0;
extern char D_00591E14[];
extern char D_00591BE4[];
extern char D_008B145C[];
extern char D_0058E5B0[];
extern char D_00592980[];

void func_00BEE220(void) {
    u8 c = func_009E1C90(3);
    s32 i;
    u8 *p;
    if (c == 4) {
        func_00AD0A20();
        if (func_00152130(1, (60 / *(u8 *)D_00591BE4 << 5) & 0xFF) == 0) return;
        p = (u8 *)D_0058E5B0;
        for (i = 0; i < 0x17; i++) {
            if (*(u8 *)(D_00592980 + p[0x12] * 26880 + p[0x11] * 840 + 0xD4) != 0) {
                if (p[0] == func_00BF6270()) {
                    p[0x16] = 0xFD;
                    *(s16 *)(p + 0x18) = 0;
                }
            }
            p += 0x240;
        }
        func_00BEC560(0xFF);
        func_00BF6240(1);
    } else if (c == 3) {
        func_00AD0A20();
        if (func_00152130(0, (60 / *(u8 *)D_00591BE4 << 5) & 0xFF) == 0) return;
        func_00BA92A0(func_00BF6270());
        if (func_00BA91C0() & 0x1008) {
            *(u32 *)D_00591E14 = *(u8 *)D_00591BE4 << 2;
        }
        *(u32 *)D_00591E14 = *(u32 *)D_00591E14 + 1;
        if (*(u32 *)D_00591E14 < (u32)(*(u8 *)D_00591BE4 << 2)) return;
        func_009E1CB0(3);
    } else if (c == 2) {
        func_00BEDFD0();
    } else if (c == 1) {
        if (D_003EA7B0 == 1) {
            if (func_001A5BB0(5) != 0) func_009E1CB0(3);
        } else if (D_003EA7B0 == 0) {
            func_001A5F50(5, func_00208250(0x5E));
            func_001A5E00(5);
            D_003EA7B0 = 1;
        }
    } else if (c == 0) {
        D_003EA7B0 = 0;
        *(u32 *)D_00591E14 = 0;
        if (func_002DCA30() != 0) func_00BBB960(*(s32 *)D_008B145C);
        func_00B27010(0);
        func_00B25C50(0);
        func_009E1CB0(3);
    }
}
