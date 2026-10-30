/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F08B0(s32);
M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK sprintf(M2C_UNK *, s32, M2C_UNK);     /* extern */
M2C_UNK func_0099C660(s32, s32);                    /* extern */
extern char D_009FF8A0[];
extern char D_009FF8C0[];
extern char D_00A7DC40[];

void func_009C0DD0(s32 arg0, s32 arg1) {
    M2C_UNK *var_v1;
    s32 var_a1;

    func_001C48E8(((void *)D_00A7DC40), 0, 0x100);
    if (arg1 >= 0) {
        if (arg1 >= 5) {
            return;
        }
        if (arg0 == 0) {
            var_v1 = ((void *)D_009FF8A0);
        } else {
            var_v1 = ((void *)D_009FF8C0);
        }
        var_a1 = func_001F08B0(*(var_v1 + (arg1 * 4)));
        if (var_a1 != 0) {
            if (arg1 == 0) {
                sprintf(((void *)D_00A7DC40), var_a1, 8);
                goto block_11;
            }
            if (arg1 == 1) {
                sprintf(((void *)D_00A7DC40), var_a1, 8);
block_11:
                var_a1 = (s32) ((void *)D_00A7DC40);
            }
            func_0099C660(var_a1, var_a1);
        }
    }
}
