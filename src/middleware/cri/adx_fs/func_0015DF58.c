/* compiler: ee-gcc-2.96-Os-G0 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void ADXF_Lock(void);
extern void ADXF_Unlock(void);
extern int func_0015DFD0(int, int, int, int, int);
s32 func_0015DF58(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_s0;

    ADXF_Lock();
    temp_s0 = func_0015DFD0(arg0, arg1, arg2, arg3, arg4);
    ADXF_Unlock();
    return temp_s0;
}
