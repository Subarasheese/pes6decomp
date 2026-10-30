/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001CEC70(void);
extern void func_001CEB90(void);
extern void func_001CEBD0(int);
extern int func_0017E110(void);
M2C_UNK func_001CEAB0();                            /* extern */
M2C_UNK func_001CECC0(s32);                         /* extern */
s32 func_001D3090(void *, void *);                  /* extern */
M2C_UNK func_001D3260(void *);                      /* extern */
M2C_UNK func_00802920();                            /* extern */
extern void *D_003EA3C8;

void func_00802880(void) {
    u32 temp_a0;

    func_00802920();
    if ((D_003EA3C8 != NULL) && (func_0017E110() != 0)) {
        temp_a0 = M2C_FIELD(D_003EA3C8, u32 *, 0);
        if (temp_a0 >= 2U) {
            M2C_FIELD(D_003EA3C8, s16 *, 0x3212) = (s16) ((temp_a0 - 1) * 2);
            func_001CECC0(func_001D3090(D_003EA3C8 + 0x3210, D_003EA3C8) + 0x60);
            func_001CEB90();
            func_001CEBD0(2);
            func_001CEAB0();
            func_001D3260(D_003EA3C8 + 0x3210);
            func_001CEC70();
        }
    }
}
