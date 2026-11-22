/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_00226710(void);
extern s32 func_00230380(void);

s32 func_009ADFA0(void) {
    s32 temp_v0;
    s32 var_s0;

    var_s0 = func_00226710() & 0xFF;
    if (func_00230380() == 1) {
        temp_v0 = func_00226710() & 0xFF;
        switch (temp_v0) {
        case 11:
        case 12:
            var_s0 = 0xC;
            break;
        case 13:
        case 14:
            var_s0 = 0xE;
            break;
        case 15:
        case 16:
        case 17:
            var_s0 = 0x11;
            break;
        case 18:
        case 19:
            var_s0 = 0x13;
            break;
        case 20:
        case 21:
            var_s0 = 0x15;
            break;
        case 22:
        case 23:
            var_s0 = 0x17;
            break;
        case 24:
        case 25:
            var_s0 = 0x19;
            break;
        case 26:
        case 27:
            var_s0 = 0x1B;
            break;
        }
    }
    return var_s0;
}
