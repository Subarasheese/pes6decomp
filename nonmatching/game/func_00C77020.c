/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(u32 *, M2C_UNK, M2C_UNK);     /* extern */
extern char Pes6MatchPlayers[];
extern char D_00CCBE00[];
extern M2C_UNK *D_00CCBE04;
extern s32 *D_00CCBE08;
extern char D_00CCBE0C[];

s32 func_00C77020(u32 arg0) {
    M2C_UNK *temp_v1;
    s32 *var_v1;
    s32 var_a0;
    s32 var_a0_2;

    if (arg0 < 0x17U) {
        (*(u32 *)D_00CCBE00) = arg0;
        if (arg0 != 0xFF) {
            var_a0 = (s32) arg0 % 23;
        } else {
            var_a0 = 1;
        }
        temp_v1 = ((void *)Pes6MatchPlayers) + (var_a0 * 0x240);
        D_00CCBE04 = temp_v1;
        if (temp_v1 != NULL) {
            var_v1 = M2C_FIELD(temp_v1, s32 **, 4);
        } else {
            var_v1 = NULL;
        }
        D_00CCBE08 = var_v1;
        if (var_v1 != NULL) {
            var_a0_2 = *var_v1;
        } else {
            var_a0_2 = 0;
        }
        (*(s32 *)D_00CCBE0C) = var_a0_2;
        return 1;
    }
    func_001C48E8(((void *)D_00CCBE00), 0, 0x10);
    (*(u32 *)D_00CCBE00) = -1U;
    D_00CCBE04 = ((void *)Pes6MatchPlayers);
    return 0;
}
