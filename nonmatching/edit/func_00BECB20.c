/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00BECB20(void *arg0) {
    s32 var_t1;
    void *var_t0;

    var_t1 = 0;
    var_t0 = arg0;
    do {
        switch (var_t1) {                           /* irregular */
        case 29:
            M2C_FIELD(var_t0, s8 *, 0x6C) = 2;
            M2C_FIELD(var_t0, s8 *, 0x6D) = 2;
            break;
        case 28:
        case 27:
        case 26:
            M2C_FIELD(var_t0, s8 *, 0x6C) = 4;
            M2C_FIELD(var_t0, s8 *, 0x6D) = 4;
            break;
        default:
            M2C_FIELD(var_t0, s8 *, 0x6C) = 0x46;
            M2C_FIELD(var_t0, s8 *, 0x6D) = 0x46;
            break;
        }
        var_t1 += 1;
        var_t0 += 4;
    } while (var_t1 < 0x1E);
    M2C_FIELD(arg0, s32 *, 0xF0) = 0;
}
