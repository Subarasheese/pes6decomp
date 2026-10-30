/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001CEC70(void);
extern void func_001CEB90(void);
M2C_UNK func_001CEAB0();                            /* extern */
M2C_UNK func_001CECC0(s32);                         /* extern */
s32 func_001D3090(void *);                          /* extern */
M2C_UNK func_001D3260(void *);                      /* extern */
extern void *D_005202C8;

void func_0019AB60(void) {
    if (D_005202C8 != NULL) {
        if (M2C_FIELD(D_005202C8, s32 *, 0x50) == 0) {
            return;
        }
        func_001CECC0(func_001D3090(D_005202C8 + 0x40) + 0x60);
        func_001CEB90();
        func_001CEAB0();
        func_001D3260(D_005202C8 + 0x40);
        func_001CEC70();
    }
}
