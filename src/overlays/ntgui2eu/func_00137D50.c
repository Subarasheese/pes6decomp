/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"


void func_00137CE0(char *);                   /* extern */
void func_00137DC8(void);                            /* extern */
extern char D_005BC6C0[];
extern char D_005BC6C4[];
extern char func_00137D40[];

void func_00137D50(void) {
    (*(s32 *)D_005BC6C0) = 0;
    func_00137DC8();
    (*(s32 *)D_005BC6C4) = 2;
    func_00137CE0(func_00137D40);
}
