/* compiler: mwcc-3.0.3 */
#include "types.h"
extern s32 func_00BEC610(char *);
extern char D_0058E7F0[];
s32 func_00274190(void) {
    s32 index;
    char *slot;
    s32 mask = 0;
    slot = D_0058E7F0;
    index = 0;
    do {
        if (func_00BEC610(slot) != 0) {
            mask |= 1 << index;
        }
        index++;
        slot += 0x240;
    } while (index < 22);
    return mask;
}
