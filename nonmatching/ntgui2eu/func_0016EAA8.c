/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00165428(s32);                         /* extern */
M2C_UNK func_0016E4F0(void *);                      /* extern */
M2C_UNK func_0016E7D0(void *);                      /* extern */
extern M2C_UNK (*D_005C1458)();

void func_0016EAA8(void *arg0) {
    s32 var_s0;
    s32 var_v0;

    var_s0 = 0;
    D_005C1458();
    var_v0 = 0 * 4;
    if (M2C_FIELD(arg0, s32 *, 0x914) > 0) {
        do {
            var_s0 += 1;
            func_00165428(M2C_FIELD((arg0 + var_v0), s32 *, 0x99C));
            var_v0 = var_s0 * 4;
        } while (var_s0 < M2C_FIELD(arg0, s32 *, 0x914));
    }
    func_0016E4F0(arg0);
    func_0016E7D0(arg0);
}
