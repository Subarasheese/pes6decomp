/* compiler: ee-gcc-2.96 */
#include "pes6/m2c.h"

extern void func_00177A80(s8 *, s32);
extern void *func_001C48E8(void *, int, unsigned int);

extern char D_003CC418[];
extern char D_003CC428[];
extern char D_003CC448[];
extern char D_003CC458[];

void func_00177D38(void *arg0) {
    if (arg0 == NULL) {
        func_00177A80(((void *)D_003CC418), (s32) ((void *)D_003CC428));
        return;
    }
    if (M2C_FIELD(arg0, s8 *, 4) == 0) {
        func_00177A80(((void *)D_003CC448), (s32) ((void *)D_003CC458));
        return;
    }
    func_001C48E8((s32 *) arg0, 0, 0x30);
    M2C_FIELD(arg0, s8 *, 4) = 0;
}
