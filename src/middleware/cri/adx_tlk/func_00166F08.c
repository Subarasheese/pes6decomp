/* compiler: ee-gcc-2.96-Os-G0 */
#include "pes6/m2c.h"

extern void ADXCRS_Lock(void);
extern void ADXCRS_Unlock(void);
f32 func_00166F48(s32);                             /* extern */

f32 func_00166F08(s32 arg0) {
    f32 temp_f20;

    ADXCRS_Lock();
    temp_f20 = func_00166F48(arg0);
    ADXCRS_Unlock();
    return temp_f20;
}
