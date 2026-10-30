/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00120D00(M2C_UNK *);                   /* extern */
extern s32 D_003EA3CC;
extern M2C_UNK func_00802880;

void func_008030E0(void) {
    if (D_003EA3CC != 0) {
        func_00120D00(&func_00802880);
    }
    D_003EA3CC = 0;
}
