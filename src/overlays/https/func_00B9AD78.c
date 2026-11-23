/* compiler: ee-gcc-2.96-G0 */
#include "types.h"

extern s32 *func_00C043E8(void);
extern s32 func_00B9ACF8(s32);
s32 func_00B9AD78(s32 status) {
    s32 error;
    switch (status) {
    case -1:
        error = func_00B9ACF8(*func_00C043E8());
        if (error == -625)
            error = -615;
        break;
    case 1:
        error = -611;
        break;
    case 2:
        error = -612;
        break;
    case 3:
        error = -613;
        break;
    case 4:
        error = -614;
        break;
    default:
        error = -615;
        break;
    }
    return error;
}
