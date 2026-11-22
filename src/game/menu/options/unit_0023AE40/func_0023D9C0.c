/* compiler: mwcc-3.0.1b151 */
#include "types.h"

extern s32 Pes6Random_Below(s32);

extern char D_00591BCA[];

void func_0023D9C0(void) {
    s32 value;
    do {
        *((u8 *)D_00591BCA) = Pes6Random_Below(0x11);
        value = 1;
        switch (*((u8 *)D_00591BCA)) {
        case 12:

        case 13:

        case 14:

        case 15:

        case 16:

        case 17:
            value = 0;
            break;
        }

    } while (!value);
}
