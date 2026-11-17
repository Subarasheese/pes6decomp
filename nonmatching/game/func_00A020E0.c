/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern void func_00A70990(void *);
extern void func_00A7BF90(void *);
extern char D_00591E19[];

void func_00A020E0(char *arg0) {
    u16 temp_a1;

    *(u8 *)(arg0 + 0x220) = 0;
    *(u8 *)(arg0 + 0x221) = 0;
    *(u8 *)(arg0 + 0x222) = 0;
    *(u8 *)(arg0 + 0x223) = 0;
    temp_a1 = *(u16 *)(arg0 + 0x1A);
    if (temp_a1 == 6 || temp_a1 == 5 || temp_a1 == 40 || temp_a1 == 38 || temp_a1 == 37 || temp_a1 == 36) {
        func_00A7BF90(arg0);
    } else if (temp_a1 == 8) {
        *(u8 *)(arg0 + 0x4D) = 0x10;
        func_00A70990(arg0);
    } else if (temp_a1 == 4) {
        *(u8 *)(arg0 + 0x4D) = 0x10;
        if ((*(u8 *)(arg0 + 0x24) == 0) || (*(u8 *)(arg0 + 0x4C) >= 4)) {
            *(u8 *)(arg0 + 0x4C) = 0;
        }
        if (*(u8 *)arg0 != *(u8 *)D_00591E19) {
            *(u8 *)(arg0 + 0x221) = *(u8 *)(arg0 + 0x221) | 8;
        }
    }
}
