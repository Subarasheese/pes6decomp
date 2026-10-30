/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_001EDD00(void *);
extern void func_001EF900(void *, s8);
s32 func_001E6E10(M2C_UNK, s32, s32, s16, s16);     /* extern */
void *func_001EDC80(M2C_UNK);                       /* extern */
M2C_UNK func_001EE630(void *, s16 *);               /* extern */
M2C_UNK func_001EEAC0(void *, s32);                 /* extern */
extern char D_003AF210[];

void func_002CE600(void *arg0, s32 arg1) {
    s16 sp38;
    s16 sp3A;
    s16 sp3C;
    s16 sp3E;
    s16 *var_v1;
    s16 temp_a3;
    s32 temp_hi;
    s32 temp_lo1;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_v0_2;
    void *var_v0;

    var_v0 = func_001EDC80(0);
    if (var_v0 == NULL) {
        var_v0 = func_001EDD00(arg0);
    }
    var_v1 = &sp38;
    var_v0_2 = 8;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0_2 -= 1;
            var_v1 += 1;
        } while (var_v0_2 != 0);
    }
    temp_v1 = arg1 & 0xFF;
    sp3C = M2C_FIELD(((void *)D_003AF210), s16 *, 0xA);
    temp_lo1 = temp_v1 / (s32) M2C_FIELD(((void *)D_003AF210), s32 *, 0);
    sp3E = M2C_FIELD(((void *)D_003AF210), s16 *, 0xC);
    temp_a3 = M2C_FIELD(((void *)D_003AF210), s16 *, 0xA) * (temp_v1 % (s32) M2C_FIELD(((void *)D_003AF210), s32 *, 0));
    temp_hi = temp_lo1 % (s32) M2C_FIELD(((void *)D_003AF210), s32 *, 4);
    sp38 = temp_a3;
    sp3A = M2C_FIELD(((void *)D_003AF210), s16 *, 8) + (M2C_FIELD(((void *)D_003AF210), s16 *, 0xC) * temp_hi);
    temp_v0 = func_001E6E10(0x4FED, temp_hi, temp_lo1, temp_a3, M2C_FIELD(((void *)D_003AF210), s16 *, 0xA));
    if (temp_v0 != 0) {
        func_001EEAC0(var_v0, temp_v0);
        func_001EE630(var_v0, &sp38);
        func_001EF900(var_v0, 1);
        return;
    }
    func_001EF900(var_v0, 0);
}
