/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"
typedef void (*Handler)(void *, s32, s32, s32);
void func_001AAF50(void *a0, s32 a1, s32 a2, s32 a3) {
    Handler *tab = *(Handler **)((u8 *)a0 + 0x1C4);
    tab[a1](a0, a1, a2, a3);
}
