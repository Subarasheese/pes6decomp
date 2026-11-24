/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 D_0053C320[];
extern s32 func_001D7980(void *node);

s32 func_0023B380(s32 index) {
    return (u8)func_001D7980((void *)D_0053C320[index]);
}
