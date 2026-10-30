/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern f32 *D_003E74CC;
extern char D_00CBCAF0[];

void func_00B3C3C0(s32 arg0) {
    f32 temp_f1;

    temp_f1 = *D_003E74CC;
    if (temp_f1 != 0.0f) {
        (*(s32 *)D_00CBCAF0) = (s32) ((f32) M2C_FIELD(&D_003E74CC[arg0 & 0xFFFF], s32 *, 0x2FD8) / temp_f1);
    }
}
