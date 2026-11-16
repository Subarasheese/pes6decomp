/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

M2C_UNK func_00C131A0(s32, s32, s32);               /* extern */
void *func_00C13280(s32, s32);                      /* extern */
s32 func_00C132C0(s32);                             /* extern */
s32 func_00C136E0(s32, M2C_UNK);                    /* extern */
s32 func_00C13740(s32, M2C_UNK);                    /* extern */
s32 func_00C13840();                                /* extern */
extern char D_003DA450[];
extern s8 D_003E9D51;
extern u8 D_003E9D52;
extern s8 D_003E9D53;

void func_002C1BF0(s32 arg0, s32 arg1, s8 arg2, s32 arg3) {
    s32 var_s0;
    u8 var_v1;

    var_v1 = 0;
    D_003E9D51 = arg2;
    if (arg0 != -1) {
        if ((arg3 != 0x16) && (arg3 != 0x15)) {

        } else {
            var_s0 = arg0;
            if ((func_00C132C0(arg0) & 0xFF) != 1) {
                var_s0 = func_00C136E0(arg0, 1);
                if (var_s0 == -1) {
                    var_s0 = func_00C13840();
                    if ((func_00C132C0(var_s0) & 0xFF) != 1) {
                        var_s0 = func_00C13740(var_s0, 1);
                    }
                }
            }
            if (var_s0 == -1) {
                var_v1 = 0;
            } else {
                var_v1 = M2C_FIELD(func_00C13280(var_s0, 1), u8 *, 1);
            }
        }
    }
    D_003E9D52 = var_v1;
    D_003E9D53 = 0xFF;
    func_00C131A0(arg0, arg1, *(s32 *)(D_003DA450 + (arg3 * 4)));
}
