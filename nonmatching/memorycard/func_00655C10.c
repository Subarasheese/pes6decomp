/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0065E810[];
extern char D_0065E814[];
extern char D_0065E818[];
extern char D_0065E81C[];
extern char D_0065ECB4[];
extern char D_0065EDC0[];

void func_00655C10(s32 arg0) {
    void *temp_a1;

    if ((arg0 >= 0) && (arg0 < 8)) {
        temp_a1 = ((void *)D_0065ECB4) + (arg0 * 0x10);
        M2C_FIELD(((void *)D_0065EDC0), s8 *, 0xB8) = 1;
        M2C_FIELD(temp_a1, f32 *, 0) = (f32) (*(f32 *)D_0065E810);
        M2C_FIELD(temp_a1, f32 *, 4) = (f32) (*(f32 *)D_0065E814);
        M2C_FIELD(temp_a1, f32 *, 8) = (f32) (*(f32 *)D_0065E818);
        M2C_FIELD(temp_a1, f32 *, 0xC) = (f32) (*(f32 *)D_0065E81C);
    }
}
