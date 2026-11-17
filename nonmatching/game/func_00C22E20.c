/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

void func_001C48E8(void *, s32, s32);
extern char D_00CB52A0[];

void func_00C22E20(void) {
    char *var_s0;
    s32 temp_v1;
    s32 var_s1;
    char *temp_a0;

    var_s1 = 0;
    var_s0 = D_00CB52A0;
    do {
        temp_a0 = var_s0 + 0x6BC;
        if (*(s32 *)temp_a0 != 0) {
            temp_v1 = *(s32 *)(temp_a0 + 8);
            if (temp_v1 != 0) {
                *(s32 *)(temp_a0 + 8) = temp_v1 - 1;
            }
            *(s32 *)(temp_a0 + 4) = *(s32 *)(temp_a0 + 4) + 1;
            if (*(s32 *)(temp_a0 + 8) == 0) {
                func_001C48E8(temp_a0, 0, 0x40);
            }
        }
        var_s1 += 1;
        var_s0 += 0x40;
    } while (var_s1 < 0x16);
}
