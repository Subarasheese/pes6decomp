/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern int func_002DCA30(void);
extern int Pes6SaveData_GetUnavailableFlag(void);
M2C_UNK func_002E4400(s32, M2C_UNK);                /* extern */
s32 func_008B3410(s32);                             /* extern */
extern s32 D_003EA438;

void func_008B79F0(void) {
    s32 var_s0;
    s32 var_s1;

    var_s1 = 0;
    var_s0 = 0;
    do {
        if ((Pes6SaveData_GetUnavailableFlag() != 0) && (var_s0 != 0)) {
            if (var_s0 == 1) {
                goto block_5;
            }
        } else {
block_5:
            if (func_008B3410(var_s0) == 1) {
                if (func_002DCA30() != 0) {
                    if (var_s0 < 2) {
                        var_s1 = (s8)(var_s1 + 1);
                    }
                } else {
                    var_s1 = (s8)(var_s1 + 1);
                }
            }
        }
        var_s0 += 1;
    } while (var_s0 < 8);
    if ((s8)var_s1 <= 1) {
        func_002E4400(D_003EA438, 0);
        return;
    }
    func_002E4400(D_003EA438, 1);
}
