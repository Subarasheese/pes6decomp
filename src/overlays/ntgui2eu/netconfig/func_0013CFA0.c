/* compiler: ee-gcc-2.9 */
#include "types.h"

extern s32 func_00124860(void);
extern s32 func_00158B68(void);

extern char D_005BEDC0[];
extern char D_005BEDEC[];

s32 func_0013CFA0(void) {
    if (func_00158B68() != 0) {
        return 0;
    }
    if ((*(s32 *)D_005BEDC0) >= 0) {
        if ((*(s32 *)D_005BEDC0) >= 3) {
            if ((*(s32 *)D_005BEDC0) == 3) {
                func_00124860();
            }
        }
    }
    (*(s32 *)D_005BEDEC) = -1;
    return 0;
}
