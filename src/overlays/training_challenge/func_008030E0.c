/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void func_00120D00(s32);
extern void func_00802880(void);

extern s32 D_003EA3CC;

void func_008030E0(void) {
    if (D_003EA3CC != 0) {
        func_00120D00((s32) func_00802880);
    }
    D_003EA3CC = 0;
}
