/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern void func_0012D408();
extern char D_011D4D40[];
extern char D_011D4D44[];
extern char D_011D4D50[];

void func_0012D3C8(void) {
    char *p = D_011D4D44;
    (*(s32 *)D_011D4D50) = 1;
    (*(s32 *)p) = 0;
    func_0012D408();
    (*(s32 *)D_011D4D40) = 1;
}
