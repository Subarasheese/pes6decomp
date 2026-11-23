/* compiler: ee-gcc-2.9-Os-G0 */
#include "types.h"
extern void func_00BDA010(void *, void (*)(void *));
extern void *D_00C405F8;
extern s32 D_00C405FC[];
extern void func_00BB4C60(void *);
s32 func_00BDDA10(void) {
    if (D_00C405F8 != 0) {
        func_00BDA010(D_00C405F8, &func_00BB4C60);
        D_00C405F8 = 0;
        D_00C405FC[0] = 0;
    }
    return 1;
}
