/* compiler: ee-gcc-2.96-G0 */
#include "types.h"

extern void func_00BE46C8(s32, s32, s32, s32);
extern s32 func_00BE6610(void *);
extern s32 func_00BF4130(void *);

void func_00BF2F90(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if ((func_00BE6610((void *)arg0) == 0) && (func_00BF4130((void *)arg1) == 0)) {
        func_00BE46C8(arg0, arg1, arg2, arg3);
    }
}
