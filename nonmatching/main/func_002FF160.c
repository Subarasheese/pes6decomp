/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00256140(void);
s32 func_00B78B60();                                /* extern */
s32 func_00BD9AF0();                                /* extern */
extern char D_00591DCD[];

s32 func_002FF160(s32 *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_a0;
    void *temp_s0;

    temp_v0 = func_00BD9AF0();
    *arg0 = temp_v0;
    switch (temp_v0) {                              /* switch 1; irregular */
    case 1:                                         /* switch 1 */
        return 0;
    case 2:                                         /* switch 1 */
        if ((s32) (*(u8 *)D_00591DCD) >= 4) {
        default:                                    /* switch 1 */
            return 0xFF;
        }
        temp_s0 = func_00256140() + 0x620;
        temp_v0_2 = func_00B78B60();
        var_a0 = 2;
        switch (temp_v0_2) {                        /* switch 2; irregular */
        case 2:                                     /* switch 2 */
            return 3;
        case 1:                                     /* switch 2 */
            if (M2C_FIELD(temp_s0, u8 *, 1) == 0) {
                var_a0 = 3;
            }
            return var_a0;
        case 0:                                     /* switch 2 */
            if (M2C_FIELD(temp_s0, u8 *, 0) == 0) {
                var_a0 = 3;
            }
            return var_a0;
        }
        break;
    }
}
