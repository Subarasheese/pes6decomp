/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

void *func_00C13280(s32);                           /* extern */
s32 func_00C595D0(s32, void *);                     /* extern */
extern char D_00370120[];

s32 func_00368980(s32 *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 t;
    s32 kind;

    t = arg1 & 0xFF;
    if (t == 19 || t == 20) {
        if (func_00C595D0(arg2, D_00370120) == -1) {
            *arg0 = 4;
        } else {
            *arg0 = 1;
        }
    } else if (t == 13 || t == 12) {
        *arg0 = 2;
    } else if (t == 11 || t == 10 || t == 9) {
        *arg0 = 3;
    } else {
        temp_v0 = func_00C595D0(arg2, (void *)0x3700D0);
        if (temp_v0 == -1) {
            *arg0 = 4;
        } else {
            kind = M2C_FIELD(func_00C13280(temp_v0), u8 *, 5) & 3;
            if (kind == 2) {
                if (func_00C595D0(arg2, D_00370120) == -1) {
                    *arg0 = 4;
                } else {
                    *arg0 = 1;
                }
            } else if (kind == 3) {
                *arg0 = 2;
            }
        }
    }
    return 1;
}
