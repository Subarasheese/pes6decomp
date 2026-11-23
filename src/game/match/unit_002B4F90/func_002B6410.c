/* compiler: mwcc-3.0.1b151 */
#include "types.h"
extern void func_002B7490(s32, s32, s32);
extern void func_002B7080(s32, s32);
extern s32 func_002B6D10(void);
extern void func_002B6700(void);
extern s32 func_002B64B0(void);
extern u8 D_00592742[];
void func_002B6410(void) {
    switch (D_00592742[0]) {
    case 0xe:
        func_002B7490(0, 0, 0);
        break;

    case 0xf:
        func_002B7080(0, 0);
        break;

    case 0x10:
        func_002B6D10();
        break;

    case 0x11:
    case 0x12:
        func_002B6700();
        break;

    case 0x13:
        func_002B64B0();
    }
}
