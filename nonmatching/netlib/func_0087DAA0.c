/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002DCA40(void);
s16 *func_008472D0();                               /* extern */
s64 func_00858B60(M2C_UNK *, M2C_UNK);              /* extern */
M2C_UNK func_00858FD0(M2C_UNK *, s16);              /* extern */
extern char D_008B21C0[];
extern char D_008B2400[];
extern char D_008B2404[];

s32 func_0087DAA0(void *arg0) {
    s32 *var_s0;
    s32 var_s1;
    void *temp_v0;

    func_00858FD0(((void *)D_008B21C0), *func_008472D0());
    M2C_FIELD(arg0, s16 *, 0) = (s16) *func_008472D0();
    M2C_FIELD(arg0, s8 *, 2) = (s8) (*(s32 *)D_008B2400);
    if (func_002DCA40() != 0) {
        var_s1 = 1;
        if ((((s64) (func_00858B60(((void *)D_008B21C0), 1) << 0x38) >> 0x38) + 1) >= 2) {
            var_s0 = ((void *)D_008B2404);
            do {
                temp_v0 = arg0 + var_s1;
                var_s1 += 1;
                M2C_FIELD(temp_v0, s8 *, 6) = (s8) *var_s0;
                var_s0 += 4;
            } while (var_s1 < (((s64) (func_00858B60(((void *)D_008B21C0), 1) << 0x38) >> 0x38) + 1));
        }
    }
    return 0xC;
}
