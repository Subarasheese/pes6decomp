/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7F10(void *);
M2C_UNK func_001D7A20(void *, s32, M2C_UNK);        /* extern */
void *func_0099AF50(s32, M2C_UNK, M2C_UNK);         /* extern */
extern s32 *D_003EAD1C;

void func_009B3FC0(s32 arg0) {
    void *temp_v0;

    temp_v0 = func_0099AF50(*D_003EAD1C, 2, 0);
    func_001D7A20(temp_v0, arg0, 5);
    if (temp_v0 != NULL) {
        func_001D7F10(temp_v0);
    }
}
