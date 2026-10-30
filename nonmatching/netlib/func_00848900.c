/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002DCA50(void);
M2C_UNK func_001C47E0(void *, void *, M2C_UNK);     /* extern */
s16 *func_008472D0();                               /* extern */
s64 func_00858B60(M2C_UNK *, M2C_UNK);              /* extern */
extern char D_008B1504[];
extern char D_008B21C0[];

void func_00848900(s64 arg0, u16 *arg1) {
    s32 var_s3;
    u16 temp_s0;
    void *var_s2;

    temp_s0 = M2C_FIELD(((*func_008472D0() * 2) + ((void *)D_008B1504)), u16 *, -2);
    M2C_FIELD(((((s64) (arg0 << 0x30) >> 0x30) * 2) + ((void *)D_008B1504)), u16 *, -2) = (u16) *arg1;
    if (func_002DCA50() == 0) {
        M2C_FIELD(((void *)D_008B1504), s8 *, 0x10) = 0;
        if ((s32) temp_s0 < (s32) *arg1) {
            M2C_FIELD(((void *)D_008B1504), s8 *, 0x10) = 1;
            func_001C47E0(((void *)D_008B1504) + 0x14, arg1 + 4, 0x40);
        }
    } else {
        var_s3 = 1;
        M2C_FIELD(((void *)D_008B1504), s8 *, 0x10) = 1;
        if ((((s64) (func_00858B60(((void *)D_008B21C0), 1) << 0x38) >> 0x38) + 1) >= 2) {
            var_s2 = ((void *)D_008B1504) + 2;
            do {
                if ((s32) M2C_FIELD(var_s2, u16 *, -2) < (s32) temp_s0) {
                    M2C_FIELD(((void *)D_008B1504), s8 *, 0x10) = 0;
                }
                var_s2 += 2;
                var_s3 += 1;
            } while (var_s3 < (((s64) (func_00858B60(((void *)D_008B21C0), 1) << 0x38) >> 0x38) + 1));
        }
    }
}
