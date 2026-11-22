/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern u8 func_0094C730(void);
extern void func_00B16030(void);
extern s32 func_00B24B10(void);
extern void func_00B16080(s32);
extern u16 func_00225720(void);
extern s32 func_00B24BE0(s32);
extern void func_00B5B910(void);
extern void func_00B62520(void);
extern s32 func_00B22CD0(void);
extern s32 D_003EADE4;

void func_00B06570(void) {
    int value;
    u8 value2;
    u32 value3;

    value = D_003EADE4;
    if (D_003EADE4 != 0) {
        value2 = func_0094C730();
        switch (value2) {
        case 0x1b:
            *(u32 *)(value + 0x1c) = 0;
            break;
        case 0x1c:
            *(u32 *)(value + 0x20) = 1;
            *(u32 *)(value + 0x1c) = 0x16;
            func_00B16030();
            func_00B24B10();
            func_00B16080(4);
            break;
        case 0x1d:
            *(u32 *)(value + 0x20) = 2;
            *(u32 *)(value + 0x1c) = 0x16;
            func_00B16030();
            value3 = func_00225720();
            func_00B24BE0(value3 & 0xffff);
            func_00B16080(3);
            break;
        case 0x1e:
            *(u32 *)(value + 0x20) = 3;
            *(u32 *)(value + 0x1c) = 0x16;
            func_00B5B910();
            break;
        case 0x1f:
            *(u32 *)(value + 0x20) = 4;
            *(u32 *)(value + 0x1c) = 0x16;
            func_00B62520();
            break;
        case 0x20:
            *(u32 *)(value + 0x20) = 5;
            *(u32 *)(value + 0x1c) = 0x16;
            func_00B16030();
            func_00B22CD0();
            func_00B16080(8);
        }
    }
}
