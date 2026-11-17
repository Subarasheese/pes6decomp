/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

/* Copies the first quadword of entry i of the 0x30-byte table at D_00CBAA40 to out (lq/sq). */
typedef unsigned int u128 __attribute__((mode(TI)));
extern char D_00CBAA40[];

void func_009B3FE0(s32 i, u128 *out) {
    *out = *(u128 *)(D_00CBAA40 + i * 0x30);
}
