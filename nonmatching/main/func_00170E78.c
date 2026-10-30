/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0016D138(void);
extern void func_00170400(void *, void *);
M2C_UNK func_001610B0(M2C_UNK);                     /* extern */
M2C_UNK func_0016CBB8(s32);                         /* extern */
M2C_UNK func_001703D0();                            /* extern */
M2C_UNK func_00170610();                            /* extern */
M2C_UNK func_00170F70(void *);                      /* extern */
extern char D_003CAC60[];

void func_00170E78(void *arg0) {
    s32 temp_a0;
    s32 var_s2;

    var_s2 = 0;
    if (arg0 == NULL) {
        func_00170400(arg0, ((void *)D_003CAC60));
        return;
    }
    if ((u8) M2C_FIELD(arg0, u8 *, 2) >= 2U) {
        temp_a0 = M2C_FIELD(arg0, s32 *, 0x2C);
        if (temp_a0 != 0) {
            func_0016CBB8(temp_a0);
        }
loop_9:
        func_0016D138();
        func_00170610();
        func_00170F70(arg0);
        if ((s8) M2C_FIELD(arg0, u8 *, 2) == 2) {
            var_s2 += 1;
            if (var_s2 > 0x63FFF6) {
                func_001610B0(0x3CAC78);
            } else {
                func_001703D0();
                goto loop_9;
            }
        }
        M2C_FIELD(arg0, s32 *, 0x28) = 0;
        M2C_FIELD(arg0, u8 *, 2) = 0U;
    }
}
