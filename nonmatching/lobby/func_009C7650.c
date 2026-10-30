/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0099C7C0(void *);                      /* extern */
extern void *D_00A7DD70;

void func_009C7650(void) {
    if (D_00A7DD70 != NULL) {
        func_0099C7C0(M2C_FIELD(D_00A7DD70, void **, 0x50));
        func_0099C7C0(D_00A7DD70);
        D_00A7DD70 = NULL;
    }
}
