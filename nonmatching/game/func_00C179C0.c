/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern char D_0058E7F0[];
extern char D_00591A90[];
extern char D_00CCAE40[];

void func_00C179C0(void) {
    u8 *var_v1;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_a3;
    s32 var_a5;
    s32 var_a6;
    s32 var_a7;
    s32 var_t0;
    u8 temp_a4;

    var_a6 = 0;
    var_v1 = (u8 *)D_0058E7F0;
    do {
        temp_a3 = var_a6 & 0xFF;
        var_a5 = 0;
        do {
            if (temp_a3 < 2) {
                temp_a0 = var_a5 & 0xFF;
                if (temp_a0 < 0x20) {
                    *(u8 *)(D_00CCAE40 + (temp_a3 << 5) + temp_a0 + 0x80) = 0xFF;
                }
            }
            var_a5 += 1;
        } while (var_a5 < 0x20);
        var_a6 += 1;
    } while (var_a6 < 2);
    var_t0 = 0;
    do {
        var_a7 = 0;
        do {
            temp_a4 = var_v1[0x12];
            if ((s32) temp_a4 < 2) {
                temp_a1 = *(u8 *)(D_00591A90 + temp_a4 * 0x8B + var_a7 + 7) & 0xFF;
                if (temp_a1 < 0x20) {
                    *(u8 *)(D_00CCAE40 + (temp_a4 << 5) + temp_a1 + 0x80) = var_v1[0];
                }
            }
            var_a7 += 1;
            var_v1 += 0x240;
        } while (var_a7 < 0xB);
        var_t0 += 1;
    } while (var_t0 < 2);
}
