/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_009CAB80(void);
s32 func_00964630(u8);                              /* extern */
u8 func_00964A90(u8);                               /* extern */
M2C_UNK func_0099D030(M2C_UNK);                     /* extern */
extern void *D_00A7DDA0;

s32 func_009CB330(void) {
    s32 temp_v0;

    func_0099D030(1);
    temp_v0 = func_00964630(M2C_FIELD(D_00A7DDA0, u8 *, 7));
    if (temp_v0 != 0) {
        func_0099D030(0);
        if (temp_v0 < 0) {
            M2C_FIELD(D_00A7DDA0, u8 *, 7) = func_00964A90(M2C_FIELD(D_00A7DDA0, u8 *, 2));
            M2C_FIELD(D_00A7DDA0, s8 *, 0) = 1;
            func_009CAB80();
        } else {
            M2C_FIELD(D_00A7DDA0, s8 *, 0) = 1;
            func_009CAB80();
        }
    }
    return 0;
}
