/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern void func_002D5960(void *, s32);
extern void func_002D5980(void *, s32);
extern s32 D_003EA810;
extern char D_00CCBBC4[];

void func_00C6DE70(s32 arg0) {
    if (D_003EA810 != 0) {
        func_002D5980(D_00CCBBC4, arg0);
        func_002D5960(D_00CCBBC4, 0);
    }
}
