/* compiler: mwcc-3.0.1b151 */
#include "types.h"
extern u8 D_00CBCC60[];
void func_00B7B8C0(u8 mode) {
    if ((u8)mode == 0)
        mode = 1;
    D_00CBCC60[0] = (u8)mode;
}
