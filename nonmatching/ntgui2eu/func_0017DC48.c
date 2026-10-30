/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00165C40(s32);                         /* extern */
M2C_UNK func_0017D910(void *);                      /* extern */
extern M2C_UNK (*D_005C14EC)();

void func_0017DC48(void *arg0) {
    s64 temp_v0;
    s64 temp_v1;

    D_005C14EC();
    temp_v1 = M2C_FIELD(arg0, s64 *, 0x1230);
    temp_v0 = M2C_FIELD(arg0, s64 *, 0x1238);
    M2C_FIELD(arg0, s64 *, 0x1250) = temp_v1;
    M2C_FIELD(arg0, s64 *, 0x1258) = temp_v0;
    M2C_FIELD(arg0, s64 *, 0x1240) = temp_v1;
    M2C_FIELD(arg0, s64 *, 0x1248) = temp_v0;
    func_0017D910(arg0);
    func_00165C40(M2C_FIELD(arg0, s32 *, 0x910));
    M2C_FIELD(arg0, s32 *, 0x98) = 2;
}
