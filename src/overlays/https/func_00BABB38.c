/* compiler: ee-gcc-2.9-as210-G0 */
#include "types.h"
typedef void (*RcomApiFunction)(void);
extern RcomApiFunction D_00CC9340[];
extern RcomApiFunction D_00CC9344[];
extern RcomApiFunction D_00CC9348[];
extern RcomApiFunction D_00CC934C[];
extern RcomApiFunction D_00CC9350[];
extern RcomApiFunction D_00CC9354[];
extern RcomApiFunction D_00CC9358[];
extern RcomApiFunction D_00CC935C[];
extern RcomApiFunction D_00CC9360[];
extern RcomApiFunction D_00CC9364[];
extern RcomApiFunction D_00CC9368[];
extern RcomApiFunction D_00CC936C[];
extern RcomApiFunction D_00CC9370[];
extern RcomApiFunction D_00CC9374[];
extern RcomApiFunction D_00CC9378[];
extern RcomApiFunction D_00CC937C[];
extern RcomApiFunction D_00CC9380[];
extern RcomApiFunction D_00CC9384[];
extern RcomApiFunction D_00CC9388[];
extern RcomApiFunction D_00CC938C[];
extern RcomApiFunction D_00CC9390[];
extern RcomApiFunction D_00CC9394[];
extern RcomApiFunction D_00CC9398[];
extern RcomApiFunction D_00CC939C[];
extern RcomApiFunction D_00CC93A0[];
extern RcomApiFunction D_00CC93A4[];
extern RcomApiFunction D_00CC93A8[];
extern RcomApiFunction D_00CC93AC[];
extern RcomApiFunction D_00CC93B0[];
extern RcomApiFunction D_00CC93B4[];
extern RcomApiFunction D_00CC93B8[];
extern RcomApiFunction D_00CC93BC[];
extern RcomApiFunction D_00CC93C0[];
extern RcomApiFunction D_00CC93C4[];
extern RcomApiFunction D_00CC93C8[];
extern RcomApiFunction D_00CC93CC[];
extern RcomApiFunction D_00CC93D0[];
extern RcomApiFunction D_00CC93D4[];
extern RcomApiFunction D_00CC93D8[];
extern RcomApiFunction D_00CC93DC[];
extern RcomApiFunction D_00CC93E0[];
extern RcomApiFunction D_00CC93E4[];
extern RcomApiFunction D_00CC93E8[];
extern RcomApiFunction D_00CC93EC[];
extern RcomApiFunction D_00CC93F0[];
extern RcomApiFunction D_00CC93F4[];
extern RcomApiFunction D_00CC93F8[];
extern RcomApiFunction D_00CC93FC[];
extern RcomApiFunction D_00CC9400[];
extern RcomApiFunction D_00CC9404[];
extern RcomApiFunction D_00CC9408[];
extern RcomApiFunction D_00CC940C[];
extern RcomApiFunction D_00CC9410[];
extern RcomApiFunction D_00CC9414[];
extern RcomApiFunction D_00CC9418[];
/* Register the provider routine for a certificate API operation. */
s32 func_00BABB38(s32 operation, RcomApiFunction callback) {
    s32 supported = 1;
    switch (operation) {
    case 1:
        D_00CC9340[0] = callback;
        break;
    case 2:
        D_00CC9344[0] = callback;
        break;
    case 3:
        D_00CC9348[0] = callback;
        break;
    case 4:
        D_00CC934C[0] = callback;
        break;
    case 5:
        D_00CC9350[0] = callback;
        break;
    case 6:
        D_00CC9354[0] = callback;
        break;
    case 7:
        D_00CC9358[0] = callback;
        break;
    case 8:
        D_00CC935C[0] = callback;
        break;
    case 9:
        D_00CC9360[0] = callback;
        break;
    case 10:
        D_00CC9364[0] = callback;
        break;
    case 11:
        D_00CC9368[0] = callback;
        break;
    case 12:
        D_00CC936C[0] = callback;
        break;
    case 13:
        D_00CC9370[0] = callback;
        break;
    case 14:
        D_00CC9374[0] = callback;
        break;
    case 15:
        D_00CC9378[0] = callback;
        break;
    case 16:
        D_00CC937C[0] = callback;
        break;
    case 17:
        D_00CC9380[0] = callback;
        break;
    case 18:
        D_00CC9384[0] = callback;
        break;
    case 19:
        D_00CC9388[0] = callback;
        break;
    case 21:
        D_00CC938C[0] = callback;
        break;
    case 22:
        D_00CC9390[0] = callback;
        break;
    case 31:
        D_00CC9394[0] = callback;
        break;
    case 23:
        D_00CC9398[0] = callback;
        break;
    case 24:
        D_00CC939C[0] = callback;
        break;
    case 25:
        D_00CC93A0[0] = callback;
        break;
    case 26:
        D_00CC93A4[0] = callback;
        break;
    case 35:
        D_00CC93AC[0] = callback;
        break;
    case 36:
        D_00CC93B0[0] = callback;
        break;
    case 37:
        D_00CC93B4[0] = callback;
        break;
    case 38:
        D_00CC93B8[0] = callback;
        break;
    case 39:
        D_00CC93BC[0] = callback;
        break;
    case 27:
        D_00CC93A8[0] = callback;
        break;
    case 40:
        D_00CC93C0[0] = callback;
        break;
    case 41:
        D_00CC93C4[0] = callback;
        break;
    case 42:
        D_00CC93C8[0] = callback;
        break;
    case 43:
        D_00CC93CC[0] = callback;
        break;
    case 44:
        D_00CC93D0[0] = callback;
        break;
    case 45:
        D_00CC93D4[0] = callback;
        break;
    case 46:
        D_00CC93D8[0] = callback;
        break;
    case 47:
        D_00CC93DC[0] = callback;
        break;
    case 48:
        D_00CC93E0[0] = callback;
        break;
    case 49:
        D_00CC93E4[0] = callback;
        break;
    case 50:
        D_00CC93E8[0] = callback;
        break;
    case 59:
        D_00CC93EC[0] = callback;
        break;
    case 28:
        D_00CC93F0[0] = callback;
        break;
    case 33:
        D_00CC9400[0] = callback;
        break;
    case 32:
        D_00CC93FC[0] = callback;
        break;
    case 34:
        D_00CC9404[0] = callback;
        break;
    case 29:
        D_00CC93F4[0] = callback;
        break;
    case 30:
        D_00CC93F8[0] = callback;
        break;
    case 52:
        D_00CC9408[0] = callback;
        break;
    case 53:
        D_00CC940C[0] = callback;
        break;
    case 51:
        D_00CC9410[0] = callback;
        break;
    case 54:
        D_00CC9414[0] = callback;
        break;
    case 55:
        D_00CC9418[0] = callback;
        break;
    default:
        supported = 0;
        break;
    }
    return supported;
}
