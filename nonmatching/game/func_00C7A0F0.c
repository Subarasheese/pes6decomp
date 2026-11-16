/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern void func_002D5960(void *, s32);
extern void func_002D5980(void *, s32);
extern s32 D_003EA848;
extern char D_00CCBEE4[];

void func_00C7A0F0(s32 arg0) {
    if (D_003EA848 != 0) {
        func_002D5980(((void *)D_00CCBEE4), arg0);
        func_002D5960(((void *)D_00CCBEE4), 0);
    }
}
