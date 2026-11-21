/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern s32 func_00155568(void *);
extern s32 func_00158B68(void);
extern s32 func_00158B88(void);

extern char D_011E0D50[];

s32 func_00155518(void *arg0) {
    if (func_00158B68() == 0) {
        (*(s32 *)D_011E0D50) = func_00158B88();
        M2C_FIELD(arg0, s32(**)(void *), 0x18) = func_00155568;
        return 0;
    }
    return 0;
}
