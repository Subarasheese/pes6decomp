/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0017B060(int, int, int);
extern void func_00153560(void);
extern void *D_003EAED0;
extern char D_00510FF4[];

void func_00B64630(void) {
    void *temp_s0;

    temp_s0 = D_003EAED0;
    if (temp_s0 != NULL) {
        func_0017B060((*(s32 *)D_00510FF4), 0, 0);
        if (M2C_FIELD(temp_s0, s32 *, 0x3B8) != 0) {
            func_00153560();
            M2C_FIELD(temp_s0, s32 *, 0x3B8) = 0;
        }
    }
}
