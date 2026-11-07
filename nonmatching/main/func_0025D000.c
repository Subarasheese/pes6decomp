/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_00153FA0(s32);                         /* extern */
M2C_UNK func_001C48E8(s32 *, M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_001E5F20(s32);                         /* extern */
M2C_UNK func_001EDD90(s32);                         /* extern */
extern char D_0058CFE0[];
extern char D_0058D12C[];
extern char D_0058D130[];

void func_0025D000(void) {
    s32 *var_s0;
    s32 *var_s1_2;
    s32 var_s0_2;
    s32 var_s1;

    var_s1 = 0;
    var_s0 = ((void *)D_0058CFE0);
    do {
        func_001E5F20(*var_s0);
        var_s1 += 1;
        var_s0 += 4;
    } while (var_s1 < 4);
    var_s0_2 = 0;
    var_s1_2 = ((void *)D_0058CFE0);
    do {
        func_001EDD90(M2C_FIELD(var_s1_2, s32 *, 0x10));
        var_s0_2 += 1;
        var_s1_2 += 4;
    } while (var_s0_2 < 3);
    func_00153FA0((*(s32 *)D_0058D12C));
    func_00153FA0((*(s32 *)D_0058D130));
    func_001C48E8(((void *)D_0058CFE0), 0, 0x16C);
}
