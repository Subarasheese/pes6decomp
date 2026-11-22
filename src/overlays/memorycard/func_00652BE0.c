/* compiler: mwcc-3.0.1b151 */
#include "pes6/memory_card_notice.h"

void func_00652BE0(s32 status, s32 alternate) {
    switch (status) {
    case 4:
        if (alternate == 0)
            D_0065E7B0[0].message = D_0065A450[6];
        else
            D_0065E7B0[0].message = D_0065A450[7];
        break;
    case 6:
        D_0065E7B0[0].message = D_0065A450[0];
        break;
    case 7:
        D_0065E7B0[0].message = D_0065A450[2];
        break;
    case 8:
        D_0065E7B0[0].message = D_0065A450[3];
        break;
    case 9:
        D_0065E7B0[0].message = D_0065A450[4];
        break;
    case 10:
    default:
        D_0065E7B0[0].message = D_0065A450[5];
        break;
    }
    D_0065E7B0[0].updated = 1;
}
