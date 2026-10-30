/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0058D30C[];
extern char D_0058D30D[];
extern char D_0058D30E[];

void func_0025F860(void *arg0) {
    u8 temp_a1;
    u8 temp_v1;

    if (arg0 != NULL) {
        temp_a1 = M2C_FIELD(arg0, u8 *, 1);
        temp_v1 = M2C_FIELD(arg0, u8 *, 0);
        if ((s32) temp_a1 < (s32) temp_v1) {
            M2C_FIELD(arg0, u8 *, 0) = temp_a1;
            M2C_FIELD(arg0, u8 *, 1) = temp_v1;
        }
        (*(u8 *)D_0058D30C) = M2C_FIELD(arg0, u8 *, 0);
        (*(u8 *)D_0058D30D) = M2C_FIELD(arg0, u8 *, 1);
        (*(s16 *)D_0058D30E) = (M2C_FIELD(arg0, u8 *, 1) - M2C_FIELD(arg0, u8 *, 0)) + 1;
    }
}
