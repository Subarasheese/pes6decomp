/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00139150(void *);
M2C_UNK func_00145200(void *, void *, void *);      /* extern */
extern char D_00500F80[];
extern void *D_00503028;
extern char D_00503044[];

void func_00145050(s32 arg0) {
    void *temp_a0;
    void *temp_a1;
    void *temp_a2;
    void *temp_a2_2;
    void *var_s0;

    temp_a2 = ((void *)D_00500F80) + (arg0 * 0xC);
    temp_a0 = temp_a2 + 0x2000;
    (*(s32 *)D_00503044) += 1;
    temp_a2_2 = M2C_FIELD(temp_a2, void **, 0x2000);
    var_s0 = NULL;
    if (temp_a2_2 != NULL) {
        if (M2C_FIELD(temp_a2_2, u8 *, 7) != 0) {
            var_s0 = M2C_FIELD(temp_a2_2, void **, 8);
            M2C_FIELD(temp_a2_2, u8 *, 7) = 0U;
        }
        M2C_FIELD(temp_a2, void **, 0x2000) = (void *) M2C_FIELD(M2C_FIELD(temp_a2, void **, 0x2000), void **, 0);
        if (M2C_FIELD(temp_a2, void **, 0x2000) == NULL) {
            M2C_FIELD(temp_a0, s32 *, 4) = 0;
        }
        temp_a1 = D_00503028;
        M2C_FIELD(temp_a2_2, void **, 0) = temp_a1;
        D_00503028 = temp_a2_2;
        if (M2C_FIELD(temp_a2, void **, 0x2000) != NULL) {
            func_00145200(temp_a0, temp_a1, temp_a2_2);
        }
    }
    if (var_s0 != NULL) {
        func_00139150(var_s0);
    }
}
