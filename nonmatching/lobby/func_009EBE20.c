/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D80(void *, s16);
void *func_0099AF50(s32, M2C_UNK, M2C_UNK);         /* extern */

void func_009EBE20(void *arg0, s32 arg1) {
    s32 *temp_s1;
    void *temp_v0;

    temp_s1 = M2C_FIELD(arg0, s32 **, 4);
    temp_v0 = func_0099AF50(*temp_s1, 2, 1);
    func_001D7D80(temp_v0, 1);
    *M2C_FIELD(((arg1 * 0x24) + temp_s1), void ***, 4) = temp_v0;
}
