/* compiler: mwcc-3.0.3 */
#include "types.h"

extern void Pes6Heap_Free(void *);
s32 func_009EB1E0(s32);
s32 func_009EEEC0(s32);
s32 func_009EF0C0(s32);
s32 func_009EF7B0(s32);
s32 func_009EF9A0(s32);
s32 func_009EFB80(s32);
s32 func_009EFEA0(s32);
s32 func_009F0110(s32);
s32 func_009F02C0(s32, s32);
s32 func_009F0410(s32);

s32 func_009EA040(s32 *arg0) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = *arg0;
    func_009EB1E0(temp_s1);
    func_009EEEC0(temp_s1 + 0x1AC);
    func_009EF0C0(temp_s1 + 0xEC);
    func_009EF7B0(temp_s1 + 0xBC);
    func_009EF9A0(temp_s1 + 0xA8);
    func_009EFB80(temp_s1 + 0x84);
    temp_s0 = temp_s1 + 0x60;
    func_009EFEA0(temp_s0);
    func_009F0110(temp_s0);
    func_009F0410(temp_s1 + 0x3C);
    func_009F02C0(temp_s1 + 0x58, 1);
    Pes6Heap_Free((void *)temp_s1);
    return 1;
}
