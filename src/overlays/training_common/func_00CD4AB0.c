/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_002646D0(s32);
extern s32 func_002646E0(s32);
extern void func_00264790(void *, u8);
extern void func_002648E0(s32);
extern void func_002648F0(s32);
extern void func_002D3060(void);
extern s32 func_002D32A0(void);
extern void func_002D36B0(void);

s32 func_00CD4AB0(void *arg0) {
    s32 value;
    s32 value2;
    s32 value3;
    value2 = 0;
    func_002648F0((s32)arg0);
    value = func_002646D0((s32)arg0) & 0xFF;
    switch (value) {
    default:
        func_00264790(arg0, 0U);

    case 0:
        func_002D3060();
        func_002D36B0();
        func_002646E0((s32)arg0);

    case 1:
        value3 = 0;
        if (func_002D32A0() == 0) {
            value3 = 1;
        }
        if (value3 != 0) {
            func_002646E0((s32)arg0);
        case 2:
            value2 = 1;
        }
        break;
    }

    func_002648E0((s32)arg0);
    return value2;
}
