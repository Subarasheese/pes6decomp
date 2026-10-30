/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001B9630(void);
extern void func_00153FA0(void *);
M2C_UNK func_00900390();                            /* extern */
M2C_UNK func_009004A0();                            /* extern */
extern void *D_003EA6A8;

void func_009000D0(void) {
    if (D_003EA6A8 != NULL) {
        func_009004A0();
        func_001B9630();
        func_00153FA0(M2C_FIELD(D_003EA6A8, void **, 8));
        func_00153FA0(M2C_FIELD(D_003EA6A8, void **, 0x10));
        M2C_FIELD(D_003EA6A8, void **, 8) = NULL;
        M2C_FIELD(D_003EA6A8, void **, 0x10) = NULL;
        D_003EA6A8 = NULL;
        func_00900390();
    }
}
