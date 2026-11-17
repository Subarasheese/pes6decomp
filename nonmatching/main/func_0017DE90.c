/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

/* Tail call: func_001431D0 with the two words at +4/+8 of the 20-byte entry i of the table obj->+0x1C
 * points to; the caller's third and fourth arguments go through unchanged. */
s32 func_001431D0(s32, s32, s32, s32);

s32 func_0017DE90(void *obj, s32 i, s32 a2, s32 a3) {
    u8 *e = *(u8 **)((u8 *)obj + 0x1C) + i * 20;

    return func_001431D0(*(s32 *)(e + 4), *(s32 *)(e + 8), a2, a3);
}
