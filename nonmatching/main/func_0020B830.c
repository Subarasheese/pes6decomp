/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

M2C_UNK func_00209ED0(s32, s32, s32, M2C_UNK **, s32); /* extern */
M2C_UNK func_0020A120(s32, s32, s32, M2C_UNK **, s32); /* extern */
M2C_UNK func_00265280(s32, s32, M2C_UNK *, s32, s32); /* extern */
extern u8 D_003D41D0[];
extern u8 D_00537A00[];
extern s32 D_00537A40;
extern u8 D_00537A44[];
extern u8 D_00537A48[];

void func_0020B830(s32 arg0, M2C_UNK **arg1, s32 arg2) {
    u32 i;
    s32 var_a1;
    s32 off;

    var_a1 = 0;
    for (i = 0; i < 2; i++) {
        if (arg0 == *(s32 *)(D_003D41D0 + i * 8)) {
            var_a1 = *(s32 *)(D_003D41D0 + i * 8 + 4);
            break;
        }
    }
    if (var_a1 != 0) {
        func_00265280(D_00537A40, var_a1, (M2C_UNK *)D_00537A00, arg2, arg2);
        if (arg1 != NULL) {
            *arg1 = (M2C_UNK *)D_00537A00;
        }
    } else {
        off = arg0 * 0xC;
        if (arg0 == 0xA) {
            func_00209ED0(D_00537A40, *(s32 *)(D_00537A48 + off), *(s32 *)(D_00537A44 + off), arg1, arg2);
            return;
        }
        func_0020A120(D_00537A40, *(s32 *)(D_00537A48 + off), *(s32 *)(D_00537A44 + off), arg1, arg2);
    }
}
