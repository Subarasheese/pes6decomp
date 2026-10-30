/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_0017E110(void);
extern void func_001CEBD0(int);
extern void func_001CEC70(void);
extern void func_001CEB90(void);
M2C_UNK func_001CEAB0();                            /* extern */
M2C_UNK func_001CECC0(s32);                         /* extern */
s32 func_001D3090(void *);                          /* extern */
M2C_UNK func_001D3260(void *);                      /* extern */
extern void *D_003E99DC;

void func_0020A950(void) {
    u32 temp_v1;

    if ((D_003E99DC != NULL) && (func_0017E110() != 0)) {
        temp_v1 = M2C_FIELD(D_003E99DC, u32 *, 0);
        if (temp_v1 < 2U) {
            return;
        }
        M2C_FIELD(D_003E99DC, s16 *, 0x512) = (s16) ((temp_v1 - 1) * 2);
        func_001CECC0(func_001D3090(D_003E99DC + 0x510) + 0x60);
        func_001CEB90();
        func_001CEBD0(2);
        func_001CEAB0();
        func_001D3260(D_003E99DC + 0x510);
        func_001CEC70();
    }
}
