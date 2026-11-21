/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void func_00182B30(s32);
extern s32 func_002646D0(s32);
extern s32 func_002646E0(s32);
extern void func_00264790(void *, u8);
extern void func_002648E0(s32);
extern void func_002648F0(s32);

extern void func_001A1420(void);

s32 func_00CD4150(s32 arg0) {
    s32 value;

    func_002648F0(arg0);
    value = func_002646D0(arg0) & 0xFF;
    if (value != 1) {
        switch (value) {
        case 0:
            break;
        default:
            func_00264790((void *)arg0, 0U);
            break;
        }
        func_001A1420();
        func_00182B30(0);
        func_002646E0(arg0);
    }
    func_002648E0(arg0);
    return 1;
}
