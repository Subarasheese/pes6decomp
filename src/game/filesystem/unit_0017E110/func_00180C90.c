/* compiler: mwcc-3.0.1b151 */
#include "types.h"
extern void func_0017F4C0(void), func_0017F4B0(void), func_00181120(s32 file);
extern s32 func_00181060(s32 file, s32 offset, s32 origin),
    func_00181160(s32 bank, s32 index);
extern void func_002CE1A0(s32), func_00180560(s32);
extern s32 func_001805A0(s32 resource);
s32 func_00180C90(s32 resource) {
    s32 bank = (resource >> 16) & 7;
    s32 index = resource & 0xffff;
    s32 file, sectors;
    if (bank != 4)
        bank += 0x80;
    func_0017F4C0();
    file = func_00181160(bank, index);
    if (file) {
        sectors = func_00181060(file, 0, 2);
        func_00181120(file);
        func_0017F4B0();
        return sectors << 11;
    }
    func_002CE1A0(1);
    func_00180560(0);
    func_0017F4B0();
    return func_001805A0(resource);
}
