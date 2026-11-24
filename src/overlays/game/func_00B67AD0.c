/* compiler: mwcc-3.0.1b151 */
#include "pes6/paired_player_action.h"
void func_00B67AD0(PairedContext *pair) {
    switch (pair->control->command) {
    case 0x00:
    case 0x01:
    case 0x02:
    case 0x03:
    case 0x06:
    case 0x07:
    case 0x0a:
    case 0x0b:
    case 0x0c:
    case 0x0d:
    case 0x0e:
    case 0x0f:
    case 0x10:
    case 0x11:
    case 0x13:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1f:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x28:
    case 0x29:
    case 0x2a:
    case 0x2b:
    case 0x2c:
    case 0x2d:
    case 0x2e:
    case 0x2f:
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x34:
    case 0x37:
    case 0x38:
    case 0x39:
    case 0x3a:
    case 0x3b:
    case 0x3c:
    case 0x3d:
    case 0x44:
        if (pair->actor->repeats == 0)
            pair->actor->action = 0x0e;
        else
            pair->actor->action = 2;
        break;
    case 0x04:
    case 0x05:
    case 0x08:
    case 0x09:
    case 0x12:
    case 0x14:
    case 0x19:
    case 0x33:
    case 0x35:
    case 0x36:
        if (pair->actor->repeats == 0)
            pair->actor->action = 0x10;
        else
            pair->actor->action = 2;
        break;
    case 0x1e:
        if (pair->actor->repeats == 0)
            pair->actor->action = 0x13;
        else
            pair->actor->action = 2;
        break;
    case 0x3e:
    case 0x3f:
    case 0x40:
    case 0x41:
    case 0x42:
    case 0x43:
    case 0x45:
    case 0x46:
    case 0x47:
    case 0x48:
    case 0x49:
        pair->actor->action = 0x17;
        break;
    }
}
