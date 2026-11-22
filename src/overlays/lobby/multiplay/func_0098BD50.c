/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_0082B810(void);
extern s32 func_0082B610(void);
extern s32 func_00832280(void);
extern s32 func_0082B6B0(void);

int func_0098BD50(int arg0) {
    int value;
    u32 value2;

    value2 = arg0 & 0xff;
    if (value2 == 0) {
        value = func_0082B810();
    } else if (value2 == 1) {
        value = func_0082B610();
    } else if (value2 == 2) {
        value = func_00832280();
        value = (value == 1) ? 0 : func_0082B6B0();
    } else
        value = (value2 == 3) ? func_0082B610() : 0;
    return value;
}
