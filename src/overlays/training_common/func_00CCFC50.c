/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_00264690(s32, s32);
extern void func_002646B0(s32, s32);
extern s32 func_002646D0(s32);
extern void func_00264790(void *, u8);
extern void func_002648E0(s32);
extern void func_002648F0(s32);
extern void func_009A69A0(void);
extern s32 func_00CD7AA0(void);
extern void func_00CD7D40(s32);
extern void func_00CD7E20(s32);
extern void func_00CDC670(void);

s32 func_00CCFC50(s32 arg0) {
    s32 value;
    u32 value2;

    value = 0;
    func_002648F0(arg0);
    func_002646B0(arg0, 1);
    value2 = func_002646D0(arg0) & 0xFF;
    switch (value2) {
    case 0:
        if (M2C_FIELD(arg0, s32 *, 0x18) != 2) {
            func_009A69A0();
        }
        func_00264790((void *)arg0, 1U);
        break;
    case 1:
        func_00CD7AA0();
        func_00264790((void *)arg0, 2U);
        break;
    case 2:
        func_00CDC670();
        func_00264790((void *)arg0, 3U);
        break;
    case 3:
        func_00264790((void *)arg0, 4U);
        break;
    case 4:
        func_00264790((void *)arg0, 5U);
        break;
    case 5:
        value = 1;
        break;
    case 6:
        func_00CD7E20(arg0);
        break;
    case 7:
        func_00CD7D40(arg0);
        break;
    }
    func_002648E0(arg0);
    func_00264690(arg0, 1);
    return value;
}
