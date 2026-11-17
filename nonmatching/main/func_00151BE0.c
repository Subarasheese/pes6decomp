/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern char D_00376910[];
extern char D_00376960[];
extern char D_003769B0[];
extern char D_00376A00[];

s32 func_00151BE0(s32 arg0, s32 arg1, s32 arg2, char *arg3) {
    char *var_a3 = arg3;
    char *var_v1;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a0;

    if (arg0 == 20) {
        var_a3 = D_00376A00;
    } else if (arg0 == 19) {
        var_a3 = D_003769B0;
    } else if (arg0 == 10 || arg0 == 2) {
        var_a3 = D_00376960;
    } else if (arg0 == 1 || arg0 == 0) {
        var_a3 = D_00376910;
    }
    var_a0 = 0;
    var_v1 = var_a3;
    do {
        if (*(s32 *)(var_v1) >= arg1 && *(s32 *)(var_v1 + 4) >= arg2) {
            break;
        }
        var_a0 += 1;
        var_v1 += 0xC;
    } while (var_a0 < 6);
    if (var_a0 >= 6) {
        temp_v1 = *(s32 *)(var_a3 + 0x3C);
        temp_v1_2 = *(s32 *)(var_a3 + 0x40);
        return (((arg1 + temp_v1 - 1) / temp_v1) * ((arg2 + temp_v1_2 - 1) / temp_v1_2)) << 5;
    }
    return *(s32 *)(var_a3 + var_a0 * 0xC + 8);
}
