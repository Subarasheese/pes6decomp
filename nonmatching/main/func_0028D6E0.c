/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_002CA180(s32);
extern void func_002CA0F0(void *);
extern u8 func_002B8C00(s32);
extern u8 func_002B8CB0(s32);
M2C_UNK func_0028D140(u8 *, s8 *, s32, s32, s32);   /* extern */
s32 func_002B8DB0(s32, s32, s8 *);                  /* extern */

void func_0028D6E0(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s8 sp50;
    s8 sp51;
    s32 var_a1;
    s8 *var_a2;
    s8 temp_v1;
    u8 temp_v0;
    u8 temp_v0_2;
    void *var_v0;

    if (*arg0 != 0) {
        var_v0 = func_002CA180(arg2);
        var_a2 = &sp50;
        var_a1 = 8;
        do {
            var_a1 -= 1;
            temp_v1 = M2C_FIELD(var_v0, s8 *, 1);
            M2C_FIELD(var_a2, s8 *, 0) = M2C_FIELD(var_v0, s8 *, 0);
            var_v0 += 2;
            M2C_FIELD(var_a2, s8 *, 1) = temp_v1;
            var_a2 += 2;
        } while (var_a1 > 0);
        if (func_002B8DB0(arg2, var_a1, var_a2) != 0) {
            temp_v0 = func_002B8CB0(arg2);
            switch (temp_v0) {                      /* switch 1; irregular */
            case 2:                                 /* switch 1 */
                sp50 = 0;
                break;
            case 0:                                 /* switch 1 */
                sp50 = 4;
                break;
            default:                                /* switch 1 */
                sp50 = 2;
                break;
            }
            temp_v0_2 = func_002B8C00(arg2);
            switch (temp_v0_2) {                    /* switch 2; irregular */
            case 2:                                 /* switch 2 */
                sp51 = 0;
                break;
            case 0:                                 /* switch 2 */
                sp51 = 4;
                break;
            default:                                /* switch 2 */
                sp51 = 2;
                break;
            }
        }
    } else {
        func_002CA0F0(&sp50);
    }
    func_0028D140(arg0, &sp50, arg1, arg2, arg3);
}
