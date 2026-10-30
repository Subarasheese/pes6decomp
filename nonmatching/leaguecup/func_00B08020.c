/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00229310(void);
extern void *D_003EAD5C;

s32 func_00B08020(void) {
    u8 temp_a0;

    func_00229310();
    if (D_003EAD5C != NULL) {
        temp_a0 = M2C_FIELD(D_003EAD5C, u8 *, 0xCE4);
        switch (temp_a0) {                          /* irregular */
        case 1:
            if (M2C_FIELD(D_003EAD5C, u8 *, 0xCC4) == 0) {
                return 1;
            }
            if (((temp_a0 == 2) && (M2C_FIELD(D_003EAD5C, u8 *, 0xCC4) == 1)) || ((temp_a0 == 3) && (M2C_FIELD(D_003EAD5C, u8 *, 0xCC4) == 2))) {
                return 1;
            }
            goto block_13;
        }
    } else {
block_13:
        return 0;
    }
}
