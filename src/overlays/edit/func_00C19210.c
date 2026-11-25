/* compiler: mwcc-3.0.3 */
#include "types.h"
extern s32 D_00CF2030[3];
extern void func_001DC980(s32 handle);
void func_00C19210(void) {
    s32 *item;
    u32 index;
    index = 0;
    item = D_00CF2030;
    do {
        func_001DC980(*item);
        *item = 0;
        ++index;
        ++item;
    } while (index < 3);
}
