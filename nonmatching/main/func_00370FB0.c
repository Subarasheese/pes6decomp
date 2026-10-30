/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00309420(void);
extern void * func_00221280(s32);
extern int func_002DCA30(void);
void *func_00850350(s32);                           /* extern */
extern char D_00591970[];

void *func_00370FB0(s32 arg0, s32 arg1) {
    s32 temp_s0;
    void *temp_v0;
    void *temp_v0_2;
    void *var_v0;

    temp_s0 = arg0 & 0xFF;
    if ((temp_s0 >= 0) && (temp_s0 < 8)) {
        if (func_00309420() != 0) {
            if (func_002DCA30() != 0) {
                temp_v0_2 = func_00850350(arg0);
                if (temp_v0_2 != NULL) {
                    temp_v0 = M2C_FIELD(temp_v0_2, void **, 0x24);
                    if (temp_v0 != NULL) {
                        return temp_v0;
                    }
                }
            }
            goto block_13;
        }
        if (arg1 == 0) {
            var_v0 = ((void *)D_00591970) + (temp_s0 * 0x24);
        } else {
            var_v0 = func_00221280(temp_s0);
        }
        return var_v0;
    }
block_13:
    return func_00221280(0);
}
