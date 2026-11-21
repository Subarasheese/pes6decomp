/* compiler: mwcc-3.0.1b198-O3 */
#include "types.h"

s32 func_008438F0(s32);
s32 func_008439C0(s32, s32);
s32 func_00862110(s32, s32);
s32 func_008622B0(s32);
s32 func_00862410(s32);
extern int D_008A4398[];
extern char D_008A43B0[];

s32 func_00824FD0(void) {
    s32 anyActive;
    s32 index;

    anyActive = 0;
    if (func_008438F0(2) < 0) {
        if (D_008A4398[0] != 0) {
            index = 0;
            do {
                if (func_00862110(D_008A4398[0], index) != 0) {
                    anyActive = 1;
                }
                index += 1;
            } while (index < 9);
            if (anyActive == 1) {
                if (func_008622B0(D_008A4398[0]) == -0x78) {
                    (*(s8 *)D_008A43B0) = 1;
                }
            } else {
                func_00862410(D_008A4398[0]);
            }
        }
        func_008439C0(2, 0x3E8);
    }
    return 0;
}
