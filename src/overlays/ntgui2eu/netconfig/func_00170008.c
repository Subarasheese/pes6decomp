/* compiler: ee-gcc-2.9-G0 */
#include "types.h"

extern void *func_00163DD8(void *, s32, s32 *, s32, s32);
extern s32 func_00165580(void *, s32, s32, s32);
extern void func_00170760(void *);
extern void func_001707E0(void *);

extern void *D_005C1E54;

s32 func_00170008(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *temp_v0;

    temp_v0 = func_00163DD8(D_005C1E54, arg0, (s32 *)arg1, arg2, arg3);
    func_00165580(temp_v0, 6, (s32)func_00170760, 0);
    func_00165580(temp_v0, 7, (s32)func_001707E0, 0);
    return (s32)temp_v0;
}
