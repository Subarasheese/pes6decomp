/* compiler: ee-gcc-2.96-G0 */
#include "types.h"
extern char *func_001C7F58(char *, const char *);
extern s32 D_00C3BCF0[];
extern char D_00CC89D0[];
extern u16 D_00CC8BD0[];
s32 func_00B9AE08(const char *name, u16 value) {
    D_00C3BCF0[0] = 1;
    func_001C7F58(D_00CC89D0, name);
    D_00CC8BD0[0] = value;
    return 0;
}
