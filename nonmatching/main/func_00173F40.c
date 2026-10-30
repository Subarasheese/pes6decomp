/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void pl2enc_err(void *);
extern char D_003CBA80[];
extern char D_003CBAA8[];

void func_00173F40(void *arg0, s32 arg1) {
    s32 temp_lo;

    if (arg0 == NULL) {
        pl2enc_err(((void *)D_003CBA80));
        return;
    }
    if (arg1 <= 0) {
        pl2enc_err(((void *)D_003CBAA8));
        return;
    }
    temp_lo = arg1 / 750;
    M2C_FIELD(arg0, s32 *, 0x10) = arg1;
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) ((((temp_lo < 0x61) ^ 0) == 0) ? 0x60 : ((temp_lo <= 0) ? 1 : temp_lo));
}
