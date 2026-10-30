/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_0022F150(void);
extern s32 func_00226710(void);
extern void * func_0022F190(void);
M2C_UNK func_001C4730(void *, void *, M2C_UNK);     /* extern */
s32 func_00230100(s32);                             /* extern */

void func_00949630(void) {
    s32 temp_s1;
    void *temp_s0;
    void *temp_v0;

    temp_s1 = func_00230100(func_00226710() & 0xFF);
    temp_s0 = func_0022F150();
    temp_v0 = func_0022F190();
    if ((temp_s0 != NULL) && (temp_v0 != NULL)) {
        func_001C4730(temp_s0 + 0x1550, temp_v0 + (temp_s1 * 0xC82) + 0x4778, 0xC82);
    }
}
