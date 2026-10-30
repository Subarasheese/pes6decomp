/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_003FB420[];
extern char D_003FB490[];

void func_0012D650(s32 arg0) {
    void **temp_a1;
    void *temp_a1_2;

    temp_a1 = ((void *)D_003FB420) + (arg0 * 4);
    if (*temp_a1 != NULL) {
        (*(s32 *)D_003FB490) = arg0;
        temp_a1_2 = *temp_a1;
        if (temp_a1_2 != NULL) {
            M2C_FIELD(temp_a1_2, s32 *, 0xC) = (s32) ((M2C_FIELD(temp_a1_2, s32 *, 4) - M2C_FIELD(temp_a1_2, s32 *, 0)) - 0x10);
        }
    }
}
