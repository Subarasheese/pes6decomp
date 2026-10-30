/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001DF460(void *, void *);
M2C_UNK func_00C74D60();                            /* extern */
extern char D_003AB520[];

void func_008FD6A0(void **arg0, s32 arg1) {
    s32 var_v0;

    func_00C74D60();
    if (arg1 >= 0x4B) {
        if (arg1 >= 0x50) {
            if (arg1 >= 0x5A) {
                if (arg1 >= 0x5F) {
                    var_v0 = 0xC;
                } else {
                    var_v0 = 0xB;
                }
            } else {
                var_v0 = 0xA;
            }
        } else {
            var_v0 = 9;
        }
    } else {
        var_v0 = 8;
    }
    func_001DF460(M2C_FIELD(*arg0, void **, 0xC), ((void *)D_003AB520) + (var_v0 * 4));
}
