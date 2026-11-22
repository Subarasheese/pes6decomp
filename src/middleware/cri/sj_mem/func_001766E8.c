/* compiler: ee-gcc-2.96 */
#include "pes6/m2c.h"

extern void func_00176460(s8 *, s32);
extern void *func_001C48E8(void *, int, unsigned int);

extern char D_003CC160[];
extern char D_003CC170[];
extern char D_003CC190[];
extern char D_003CC1A0[];

void func_001766E8(void *arg0) {
    if (arg0 == NULL) {
        func_00176460(((void *)D_003CC160), (s32) ((void *)D_003CC170));
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 4) == 0) {
        func_00176460(((void *)D_003CC190), (s32) ((void *)D_003CC1A0));
        return;
    }
    func_001C48E8((s32 *) arg0, 0, 0x24);
    M2C_FIELD(arg0, s32 *, 4) = 0;
}
