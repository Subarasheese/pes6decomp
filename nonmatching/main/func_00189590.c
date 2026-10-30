/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern float func_001A38A0(void);
extern float func_001A38B0(void);
extern float func_001A3890(void);
s32 func_00182000(M2C_UNK);                         /* extern */
M2C_UNK func_00182050(M2C_UNK, f32, f32, f32);      /* extern */
extern char D_005200D0[];

void func_00189590(void) {
    f32 temp_f20;
    f32 temp_f21;

    if (func_00182000(0) != 0) {
        temp_f20 = 0.9f * func_001A38A0();
        temp_f21 = (*(f32 *)D_005200D0) * func_001A38B0();
        func_00182050(0, temp_f21, temp_f20, (*(f32 *)D_005200D0) * func_001A3890());
    }
}
