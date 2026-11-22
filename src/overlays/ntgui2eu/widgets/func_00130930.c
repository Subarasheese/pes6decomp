/* compiler: ee-gcc-2.9-G0 */
#include "types.h"

extern s32 D_005B59DC;
extern s32 D_005B59E0;

void func_00130930(s32 arg0, s8 *arg1) {
    ((s32 *)(arg1))[0xD] = (D_005B59DC << 4);
    ((s32 *)(arg1))[0xE] = (D_005B59E0 << 4);
}
