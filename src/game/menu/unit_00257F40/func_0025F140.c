/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern char D_0058D200[];
extern char D_0058D215[];

void func_0025F140(int arg0, int arg1) {
    *(int *)(arg0 * 0x18 + (u32)D_0058D200) = arg1;
    *(u8 *)(arg0 * 0x18 + (u32)D_0058D215) = 1;
}
