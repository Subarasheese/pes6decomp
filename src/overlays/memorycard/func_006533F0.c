/* compiler: mwcc-3.0.1b198 */
#include "pes6/memory_card_notice.h"

void func_006533F0(s32 result) {
    switch (result) {
    case -127:
    case -126:
        D_0065E7B0[0].message = D_0065A450[0];
        break;
    case -125:
        D_0065E7B0[0].message = D_0065A450[1];
        break;
    case -124:
        D_0065E7B0[0].message = D_0065A450[2];
        break;
    case -122:
        D_0065E7B0[0].message = D_0065A450[5];
        break;
    case -120:
        D_0065E7B0[0].message = D_0065A450[4];
        break;
    case -119:
        D_0065E7B0[0].message = D_0065A450[3];
        break;
    case -123:
    case -121:
    case 0:
    case -118:
    case 1:
        break;
    }
    D_0065E7B0[0].updated = 1;
}
