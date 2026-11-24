/* compiler: mwcc-3.0.1b210 */
#include "types.h"
extern s32 func_008B9660(void);
s32 func_008BF0E0(void) {
    s32 mode = (s16)func_008B9660();
    switch (mode) {
    case 1:
    case 2:
        return 0;
    default:
        return 1;
    }
}
