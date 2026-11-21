/* compiler: ee-gcc-2.9-G0 */
#include "types.h"

extern s32 func_0019EE30(void *, s32, s32, void *, s32, void *, s32, void *, void *);
extern void func_001B02B0(s32, s32);

extern char D_011E3980[];
extern char D_011E3A00[];

void func_00159550(s32 arg0, s32 arg1) {
    void *entry;

    entry = (void *)D_011E3A00;
    func_001B02B0((s32)(entry + 0x230), arg1);
    func_001B02B0((s32)(entry + 0x330), arg0);
    func_0019EE30((void *)D_011E3980, 0x15, 1, entry, 0x1000, entry, 0x1000, 0, 0);
}
