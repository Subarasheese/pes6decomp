/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_00154090(s64);
extern s32 func_001F87E0(s32, s32);
extern void func_002CB730(s8);
extern void func_002FA9E0(float);

extern char D_0092F0EC[];

s32 func_00909F20(s32 arg0, s32 arg1) {
    s32 value;

    value = arg1;
    (*(s8 *)D_0092F0EC) = (s8)arg0;
    if (arg0 != 1) {
        if (value < 0) {
            value = 0x20;
        }
        return func_001F87E0(1, value & 0xFF) & 0xFF;
    }
    func_00154090(0xC);
    func_002CB730(0xC);
    func_002FA9E0(0.5f);
    func_002CB730(1);
    return 1;
}
