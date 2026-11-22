/* compiler: ee-gcc-2.96 */
#include "pes6/m2c.h"

extern void func_00176E78(s8 *, s32);
extern void *func_001C48E8(void *, int, unsigned int);

extern char D_003CC2C0[];
extern char D_003CC2D0[];
extern char D_003CC2F0[];
extern char D_003CC300[];

void func_00177118(void *arg0) {
    if (arg0 == NULL) {
        func_00176E78(((void *)D_003CC2C0), (s32) ((void *)D_003CC2D0));
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 4) == 0) {
        func_00176E78(((void *)D_003CC2F0), (s32) ((void *)D_003CC300));
        return;
    }
    func_001C48E8((s32 *) arg0, 0, 0x40);
    M2C_FIELD(arg0, s32 *, 4) = 0;
}
