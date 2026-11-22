/* compiler: ee-gcc-2.9-Os-G0 */
#include "types.h"

void func_0019EE30(void *, s32, s32, void *, s32, void *, s32, s32, s32);
extern char *func_001B02B0(char *destination, const char *source);
extern char D_011E3980[];
extern char D_011E3A00[];

void func_00159480(const char *path) {
    char *p = D_011E3A00;

    func_001B02B0(p + 0x230, path);
    func_0019EE30(D_011E3980, 0x13, 1, p, 0x1000, p, 0x1000, 0, 0);
}
