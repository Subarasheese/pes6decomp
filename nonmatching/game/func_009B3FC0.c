/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

/* Halfword at +0 of entry i of the 0x30-byte table at D_00CBAA50. */
extern char D_00CBAA50[];

u16 func_009B3FC0(s32 i) {
    return *(u16 *)(D_00CBAA50 + i * 0x30);
}
