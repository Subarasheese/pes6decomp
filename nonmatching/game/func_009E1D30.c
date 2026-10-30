/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002DCA30(void);
M2C_UNK func_001C48E8(void *, M2C_UNK, s32, s8 *);  /* extern */
M2C_UNK func_00855120(M2C_UNK *);                   /* extern */
extern char D_00CBBDE0[];

void func_009E1D30(s32 arg0, s8 arg1) {
    s8 *temp_a3;

    temp_a3 = ((void *)D_00CBBDE0) + arg0;
    *temp_a3 = arg1;
    if (arg0 < 9) {
        func_001C48E8(temp_a3 + 1, 0, 0xA - (arg0 + 1), temp_a3);
    }
    if (func_002DCA30() != 0) {
        func_00855120(((void *)D_00CBBDE0));
    }
}
