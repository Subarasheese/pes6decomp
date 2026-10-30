/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_009CAB80(void);
s32 func_00964700();                                /* extern */
M2C_UNK func_0099D030(M2C_UNK);                     /* extern */
M2C_UNK func_009D2300(M2C_UNK);                     /* extern */
M2C_UNK func_009D2360(M2C_UNK);                     /* extern */
extern void *D_00A7DDA0;

s32 func_009CB070(void) {
    s32 temp_v0;

    func_0099D030(1);
    temp_v0 = func_00964700();
    if (temp_v0 != 0) {
        func_0099D030(0);
        if (temp_v0 >= 0) {
            func_009D2360(1);
            if (M2C_FIELD(D_00A7DDA0, u8 *, 4) == 0) {
                func_009D2300(0);
            } else {
                func_009D2300(1);
            }
            M2C_FIELD(D_00A7DDA0, s8 *, 6) = 0;
            M2C_FIELD(D_00A7DDA0, s8 *, 0) = 1;
            func_009CAB80();
        } else {
            M2C_FIELD(D_00A7DDA0, s8 *, 6) = 0;
            M2C_FIELD(D_00A7DDA0, s8 *, 0) = 6;
            func_009CAB80();
        }
    }
    return 0;
}
