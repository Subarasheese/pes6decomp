/* compiler: mwcc-3.0.1b151 */
#include "types.h"

extern s32 D_008B2414[];

void func_0087E6A0(s32 *event) {
    if ((*event) == 3) {
        switch (D_008B2414[0]) {
        case 0:
            D_008B2414[0] = 1;
            break;

        case 1:
            D_008B2414[0] = 3;
            break;

        case 3:
            D_008B2414[0] = 4;
            break;
        }

    } else if (D_008B2414[0] == 5) {
        D_008B2414[0] = 4;
    }
}
