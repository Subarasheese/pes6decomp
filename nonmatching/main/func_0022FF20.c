/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern int func_00309420(void);
extern s32 func_00226710(void);
extern char D_00591C09[];

s32 func_0022FF20(void) {
    s32 t;

    if (func_00309420() != 0) {
        return 0;
    }
    if (func_00309420() != 0) {
        return 0;
    }
    if ((*(u8 *)D_00591C09) != 4) {
        return 0;
    }
    t = func_00226710() & 0xFF;
    if (t == 34 || t == 30) {
        return 1;
    }
    return 0;
}
