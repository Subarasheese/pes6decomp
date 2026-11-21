/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_00226710(void);
extern s32 D_003EAD78;

void func_00B16900(void) {
    int value;
    u8 value2;

    value = D_003EAD78;
    if (D_003EAD78 != 0) {
        value2 = func_00226710();
        switch (value2) {
        case 0x2f:
            *(u32 *)(value + 0xe04) = 0x66008a;
            *(u32 *)(value + 0xe00) = 0;
            break;
        case 0x30:
            *(u32 *)(value + 0xe04) = 0x1900d9;
            *(u32 *)(value + 0xe00) = 1;
            break;
        case 0x31:
            *(u32 *)(value + 0xe04) = 0x1900da;
            *(u32 *)(value + 0xe00) = 2;
            break;
        case 0x32:
            *(u32 *)(value + 0xe04) = 0x66009c;
            *(u32 *)(value + 0xe00) = 3;
            break;
        case 0x33:
            *(u32 *)(value + 0xe04) = 0x1900e9;
            *(u32 *)(value + 0xe00) = 4;
            break;
        case 0x34:
            *(u32 *)(value + 0xe04) = 0x66009d;
            *(u32 *)(value + 0xe00) = 5;
            break;
        case 0x35:
            *(u32 *)(value + 0xe04) = 0x1900da;
            *(u32 *)(value + 0xe00) = 6;
            break;
        case 0x36:
            *(u32 *)(value + 0xe04) = 0x66009e;
            *(u32 *)(value + 0xe00) = 7;
            break;
        case 0x37:
            *(u32 *)(value + 0xe04) = 0x1900da;
            *(u32 *)(value + 0xe00) = 8;
            break;
        case 0x38:
            *(u32 *)(value + 0xe04) = 0x12;
            *(u32 *)(value + 0xe00) = 9;
            break;
        case 0x39:
            *(u32 *)(value + 0xe04) = 0x12;
            *(u32 *)(value + 0xe00) = 10;
            break;
        default:
            *(u32 *)(value + 0xe04) = 0x66008a;
            *(u32 *)(value + 0xe00) = 0;
        }
    }
}
