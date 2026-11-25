/* compiler: mwcc-3.0.3 */
#include "types.h"
extern void func_001DA4B0(s32 handle);
extern s32 D_009FE860[];
void func_0099ABA0(void) {
    s32 *handle;
    u32 i;
    i = 0;
    handle = D_009FE860;
    do {
        func_001DA4B0(*handle);
        ++i;
        ++handle;
    } while (i < 2U);
}
