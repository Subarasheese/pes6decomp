/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0065E890[];
extern char D_0065E894[];
extern char D_0065E898[];
extern char D_0065ED34[];
extern char D_0065EDC0[];

void func_00655A90(s32 arg0) {
    void *temp_a2;

    if ((arg0 >= 0) && (arg0 < 0xA)) {
        temp_a2 = ((void *)D_0065ED34) + (arg0 * 0xC);
        M2C_FIELD(temp_a2, f32 *, 0) = (f32) (*(f32 *)D_0065E890);
        M2C_FIELD(temp_a2, f32 *, 4) = (f32) (*(f32 *)D_0065E894);
        M2C_FIELD(((void *)D_0065EDC0), s8 *, 0xB8) = 1;
        M2C_FIELD(temp_a2, f32 *, 8) = (f32) (*(f32 *)D_0065E898);
    }
}
