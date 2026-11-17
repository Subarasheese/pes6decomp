/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_00292D50();
u32 func_009A00D0(s32, s32);
extern char D_00591A90[];
extern char Pes6MatchSquads[];

void func_00277D50(s32 arg0) {
    char *var_s2;
    char *var_s3;
    s32 temp_s1;
    s32 temp_s7;
    s32 var_s4;
    s32 var_s5;
    char *temp_v1;

    temp_s7 = arg0 & 0xFF;
    temp_s1 = func_00292D50() & 0xFF;
    var_s5 = 0;
    var_s3 = D_00591A90;
    var_s2 = Pes6MatchSquads;
    do {
        var_s4 = 0;
        if (temp_s1 > 0) {
            do {
                temp_v1 = var_s2 + (*(u8 *)(var_s3 + var_s4 + 7) * 0x348) + 0xF0;
                if ((temp_s7 > 0) && (*(u32 *)(temp_v1 + 0x24) < *(u32 *)(temp_v1 + 0x20))) {
                    *(u32 *)(temp_v1 + 0x24) = func_009A00D0((temp_s7 - 1) & 0xFF, 0);
                }
                var_s4 += 1;
            } while (var_s4 < temp_s1);
        }
        var_s5 += 1;
        var_s3 += 0x8B;
        var_s2 += 0x6900;
    } while (var_s5 < 2);
}
