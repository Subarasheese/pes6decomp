/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_001FC7D0(s32);
void func_00305E50(void *);
void func_00305E60(void *, void *);
extern void func_002FF030(void);

s32 func_002FF0E0(void *arg0) {
    void *temp_v0;

    temp_v0 = M2C_FIELD(arg0, void **, 0x18);
    M2C_FIELD(temp_v0, s32 *, 0x18) = 0;
    M2C_FIELD(temp_v0, s32 *, 0) = 0;
    M2C_FIELD(temp_v0, s32 *, 4) = 0;
    M2C_FIELD(temp_v0, s32 *, 8) = 0;
    M2C_FIELD(temp_v0, s32 *, 0xC) = 0;
    M2C_FIELD(temp_v0, s32 *, 0x10) = 0;
    M2C_FIELD(temp_v0, s32 *, 0x14) = 0;
    if (func_001FC7D0(5) == 7) {
        func_00305E60(arg0, (void *)func_002FF030);
    } else {
        func_00305E50(arg0);
    }
    return 1;
}
