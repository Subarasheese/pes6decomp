/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001BB080(void *);                      /* extern */
M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
extern char D_00CCCE30[];
extern char D_00CCD088[];

void func_00C88E50(u32 arg0) {
    void *temp_s0;

    if (((*(s32 *)D_00CCD088) != 0) && (arg0 < 0x21U)) {
        temp_s0 = ((void *)D_00CCCE30) + (arg0 << 5) + 0x25C;
        func_001BB080(temp_s0);
        func_001C48E8(temp_s0, 0, 0x20);
    }
}
