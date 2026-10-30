/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00162B10(void *);
extern int func_001634B0(int, int);
extern int func_00163820(int, int);
extern void func_001629D8(void *, int);
extern int func_00162880(void *);
void func_00168BD0(void *arg0) {
    s32 temp_a1;
    s32 temp_s1;
    s32 temp_v0;
    void *temp_a0;

    temp_s1 = M2C_FIELD(arg0, s32 *, 8);
    temp_a0 = M2C_FIELD(arg0, void **, 4);
    if ((temp_s1 != 0) && (temp_a0 != NULL)) {
        temp_v0 = func_00162B10(temp_a0);
        temp_a1 = (s32) ((temp_v0 < 0) ? (temp_v0 + 0x7FF) : temp_v0) >> 0xB;
        if (M2C_FIELD(arg0, s8 *, 0x6C) == 0) {
            if (func_00162880(M2C_FIELD(arg0, void **, 4)) >= M2C_FIELD(arg0, s32 *, 0xC4)) {
                func_001629D8(M2C_FIELD(arg0, void **, 4), -1);
            }
            func_00163820(M2C_FIELD(arg0, s32 *, 8), 0x7FFFFFFF);
            return;
        }
        func_001634B0(temp_s1, temp_a1);
    }
}
