/* compiler: ee-gcc-2.9-G0 */
#include "types.h"

extern s32 func_00BE8240(s32);
extern s32 func_00BE8780(void *, void *);

void func_00BE8308(s32 arg0, s32 arg1) {
    func_00BE8240(func_00BE8780((void *)arg0, (void *)arg1));
}
