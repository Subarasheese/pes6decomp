/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00153FA0(void *);
M2C_UNK func_00CF49F0(s32);                         /* extern */
extern s32 D_003E7E1C;
extern void *D_003EB27C;

void func_00CDC780(void) {
    func_00CF49F0(D_003E7E1C + 0x190);
    func_00153FA0(D_003EB27C);
    D_003EB27C = NULL;
}
