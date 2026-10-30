/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008A4398[];

void *func_0082AF80(s32 arg0) {
    s32 var_a2;
    void *temp_v1;

    if ((*(s32 *)D_008A4398) != 0) {
        var_a2 = 0;
loop_8:
        if (var_a2 < 7) {
            temp_v1 = (*(s32 *)D_008A4398) + (var_a2 * 0x83);
            if (M2C_FIELD(temp_v1, u8 *, 0x34BD) != arg0) {
                var_a2 += 1;
                goto loop_8;
            }
            return temp_v1 + 0x343C;
        }
        goto block_11;
    }
block_11:
    return NULL;
}
