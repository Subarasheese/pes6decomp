/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_001F2410(void *);
extern void func_001EF900(void *, s8);
extern void func_001EF370(void *, s32);
extern void func_001EEAC0(void *, s32);
extern s32 func_001EE630(void *, s16 *);

void *func_008B9D60(void *arg0, int arg1, int arg2, int arg3) {
    void *arg0_00;

    arg0_00 = (void *)func_001F2410(arg0);
    func_001EF900(arg0_00, '\x01');
    func_001EF370(arg0_00, arg1);
    if (arg2 != 0) {
        func_001EEAC0(arg0_00, arg2);
        func_001EE630(arg0_00, (short *)arg3);
    }
    return arg0_00;
}
