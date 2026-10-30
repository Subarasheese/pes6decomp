/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001CEC70(void);
extern void func_001CEB90(void);
M2C_UNK func_001CEAB0();                            /* extern */
M2C_UNK func_001CECC0(s32);                         /* extern */
s32 func_001D3090(void *);                          /* extern */
M2C_UNK func_001D3260(void *);                      /* extern */
extern void *D_005202D8;

void func_0019C640(void) {
    if (D_005202D8 != NULL) {
        if (M2C_FIELD(D_005202D8, s32 *, 0) == 0) {
            return;
        }
        M2C_FIELD(D_005202D8, s16 *, 0xD2) = (s16) M2C_FIELD(D_005202D8, s32 *, 0xF0);
        func_001CECC0(func_001D3090(D_005202D8 + 0xD0) + 0x60);
        func_001CEB90();
        func_001CEAB0();
        func_001D3260(D_005202D8 + 0xD0);
        func_001CEC70();
    }
}
