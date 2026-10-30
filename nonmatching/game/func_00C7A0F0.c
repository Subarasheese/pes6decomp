/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002D5960(void *, s16);
extern void func_002D5980(void *, s16);
extern s32 D_003EA848;
extern char D_00CCBEE4[];

void func_00C7A0F0(s16 arg0) {
    if (D_003EA848 != 0) {
        func_002D5980(((void *)D_00CCBEE4), arg0);
        func_002D5960(((void *)D_00CCBEE4), 0);
    }
}
