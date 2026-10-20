/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern u8 D_004FD690[];
void sceGsPutDrawEnv(void *);

void func_0013E250(void) {
    sceGsPutDrawEnv(D_004FD690 + *(u8 *)0x004FDC10 * 224 + 0x50);
}
