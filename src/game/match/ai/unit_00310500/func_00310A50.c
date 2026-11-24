/* compiler: mwcc-3.0.1b198 */
#include "types.h"
extern u8 D_00CBCDE2[], D_00CBCDE3[], D_00591E4D[], D_00591E4E[];
extern u32 func_00BF6270(void);
s32 func_00310A50(u8 *out, s32 selector) {
    u8 player;
    switch (selector) {
    case 1:
        player = D_00CBCDE2[0];
        break;
    case 2:
        player = D_00CBCDE3[0];
        break;
    case 4:
    case 3:
        player = (u8)func_00BF6270();
        break;
    case 10:
        player = D_00591E4E[0];
        break;
    default:
        player = D_00591E4D[0];
        break;
    }
    if ((u8)player == 0 || (u8)player == 255)
        player = 3;
    *out = player;
    return (u8)player;
}
