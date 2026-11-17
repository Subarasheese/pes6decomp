/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

/* Dispatch on obj->+0x24 modulo 7 through the handler table at D_00C9F120; every argument register
 * (a0-a7, f12-f15) goes through unchanged to the handler. */
typedef s32 (*Handler)(s32, void *, s32, s32, s32, s32, s32, s32, f32, f32, f32, f32);
extern char D_00C9F120[];

s32 func_00C0C8B0(s32 a0, void *obj, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7,
                  f32 f12, f32 f13, f32 f14, f32 f15) {
    return ((Handler *)D_00C9F120)[*(s32 *)((u8 *)obj + 0x24) % 7](a0, obj, a2, a3, a4, a5, a6, a7,
                                                                   f12, f13, f14, f15);
}
