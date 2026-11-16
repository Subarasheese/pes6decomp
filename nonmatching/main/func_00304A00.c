/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern void func_00305E60(void *, int);
extern s32 func_00BDA360(u8);
extern char D_00510FD0[];
extern char D_00591C09[];
extern char D_00591DCD[];
extern char D_00591E19[];
extern char D_00591F12[];

s32 func_00304A00(void *arg0) {
    s32 *p;
    s32 i;
    u8 mode;

    mode = *(u8 *)D_00591DCD;
    if (mode == 3 || mode == 2 || mode == 1) {
        if (func_00BDA360(mode) == 0) {
            return 0;
        }
        p = *(s32 **)((u8 *)arg0 + 0x18);
        func_00305E60(arg0, 0x3052D0);
        p[0x12] = 0;
        p[2] = 0;
        p[3] = 0;
        p[4] = 0;
        p[5] = 0;
        p[6] = 0;
        p[7] = 0;
        p[8] = 0;
        p[9] = 0;
        p[0] = 0;
        for (i = 0; i < 8; i++) {
            if (p[2 + i] == 0) {
                p[2 + i] = 0x304650;
                p[0] = p[0] + 1;
                break;
            }
        }
        return 1;
    }
    if (mode == 0) {
        if (*(u8 *)D_00591C09 != 5) {
            if (*(s32 *)D_00510FD0 == 0xC) {
                if (*(u8 *)D_00591E19 == 0xFF) {
                    return 0;
                }
            } else if (*(u8 *)D_00591F12 == 0) {
                return 0;
            }
        }
        p = *(s32 **)((u8 *)arg0 + 0x18);
        func_00305E60(arg0, 0x3052D0);
        p[0x12] = 0;
        p[2] = 0;
        p[3] = 0;
        p[4] = 0;
        p[5] = 0;
        p[6] = 0;
        p[7] = 0;
        p[8] = 0;
        p[9] = 0;
        p[0] = 0;
        for (i = 0; i < 8; i++) {
            if (p[2 + i] == 0) {
                p[2 + i] = 0x304310;
                p[0] = p[0] + 1;
                break;
            }
        }
    }
    return 1;
}
