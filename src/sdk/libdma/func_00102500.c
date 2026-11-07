/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0x10];
    u32 count;
} Obj;

void func_00101E10(Obj *, u32, s32);

s32 func_00102500(Obj *obj, u32 n, s32 mode, s32 arg) {
    if (mode == 1) {
        return obj->count < n;
    }
    func_00101E10(obj, n, arg);
    return 0;
}
