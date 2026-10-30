/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002DB830(void *);
M2C_UNK func_008D0340(void *);                      /* extern */
M2C_UNK func_008D0E70(void *, M2C_UNK);             /* extern */
M2C_UNK func_008D10D0(void *);                      /* extern */
M2C_UNK func_008D15E0();                            /* extern */

void func_008D2460(void *arg0, s8 arg1) {
    s32 var_s2;

    M2C_FIELD(arg0, s8 *, 8) = arg1;
    func_008D15E0();
    func_008D10D0(arg0);
    func_008D0E70(arg0, 0);
    func_008D0340(arg0);
    var_s2 = -1;
loop_1:
    if ((arg1 & 0xFF) != (var_s2 + func_002DB830(M2C_FIELD(arg0, void **, 0x1D4)))) {
        var_s2 += 1;
        if (var_s2 >= 0xC) {
            return;
        }
        goto loop_1;
    }
    M2C_FIELD(arg0, s32 *, 0x1CC) = (s32) M2C_FIELD(((var_s2 * 4) + arg0), s32 *, 0x15C);
}
