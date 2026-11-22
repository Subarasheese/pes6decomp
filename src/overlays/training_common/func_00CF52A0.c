/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_002F3A00(u8 *);
extern s32 func_002F4D80(s32, s32);

s32 func_00CF52A0(void **arg0) {
    void *temp_s0;

    temp_s0 = *arg0;
    func_002F3A00((u8 *) temp_s0);
    func_002F4D80((s32) temp_s0, 1);
    return 1;
}
