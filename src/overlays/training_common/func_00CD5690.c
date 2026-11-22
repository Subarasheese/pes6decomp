/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_00262FC0(void);
extern s32 func_002646D0(s32);
extern s32 func_002646E0(s32);
extern void func_00264790(void *, u8);
extern void func_002648E0(s32);
extern void func_002648F0(s32);
extern void func_002D3060(void);
extern s32 func_002D32A0(void);
extern void func_002D36B0(void);
extern s32 func_00CD4B80(s32);
extern s32 func_00CD4CB0(s32, s32);
extern s32 func_00CD4DF0(s32);
extern s32 func_00CD4EF0(s32);
extern s32 func_00CD5030(void *, s32);
extern s32 func_00CD5510(void *);

s32 func_00CD5690(s32 arg0) {
    s32 value;
    s32 value2;
    u32 value3;

    value = 0;
    func_002648F0(arg0);
    value3 = func_002646D0(arg0) & 0xFF;
    switch (value3) {
    default:
        func_00264790((void *)arg0, 0U);
        /* fallthrough */
    case 0:
        func_002D3060();
        func_002D36B0();
        func_002646E0(arg0);
        /* fallthrough */
    case 1:
        if (func_00262FC0() != 0) {
            if (func_00CD4DF0(arg0) != 0) {
                func_002646E0(arg0);
            }
        } else {
            if (func_00CD4EF0(arg0) != 0) {
                func_002646E0(arg0);
            }
        }
        break;
    case 2:
        if (func_00CD5030((void *)arg0, 1) != 0) {
            func_002646E0(arg0);
        case 3:
            if (func_00CD4B80(arg0) != 0) {
                func_002646E0(arg0);
            case 4:
                if (func_00CD5510((void *)arg0) != 0) {
                    func_002646E0(arg0);
                case 5:
                    if (func_00CD4CB0(arg0, 6) != 0) {
                        func_002646E0(arg0);
                    case 6:
                        value2 = 0;
                        if (func_002D32A0() == 0) {
                            value2 = 1;
                        }
                        if (value2 != 0) {
                            func_002646E0(arg0);
                        case 7:
                            value = 1;
                        }
                    }
                }
            }
        }
        break;
    }
    func_002648E0(arg0);
    return value;
}
