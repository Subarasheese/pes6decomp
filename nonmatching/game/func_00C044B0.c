/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern void func_00297DF0(void *);
extern s32 func_00B2A420(u8);
extern void func_00B2ACF0(s32);
extern char D_00C9EFC0[];

void func_00C044B0(void) {
    u8 *p;
    s32 i;
    s32 state;
    void (*cb)(u8 *);

    p = (u8 *)D_00C9EFC0;
    for (i = 0; i < 5; i++) {
        state = *(s32 *)(p + 8);
        if (state != -1) {
            if (state == 1) {
                func_00297DF0(*(void **)(p + 0xC));
            } else if (state == 0) {
                func_00B2ACF0(func_00B2A420(**(u8 **)(p + 0xC)));
            }
            cb = *(void (**)(u8 *))(p + 0x24);
            if (cb != NULL) {
                cb(p);
            }
        }
        p += 0x28;
    }
}
