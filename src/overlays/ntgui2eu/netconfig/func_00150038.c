/* compiler: ee-gcc-2.9 */
#include "types.h"

extern s32 func_00158B68(void);
extern char D_005BEDEC[];

s32 func_00150038(void) {
    if (func_00158B68() != 0) {
        return 0;
    }
    (*(s32 *)D_005BEDEC) = -1;
    return 0;
}
