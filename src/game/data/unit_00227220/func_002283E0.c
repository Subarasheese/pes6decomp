/* compiler: mwcc-3.0.1b151 */
#include "types.h"
typedef struct {
    u8 b0 : 1, b1 : 1, b2 : 1, b3 : 1, b4 : 1, b5 : 1, b6 : 1, b7 : 1;
} PlayerFlags;
u8 func_002283E0(const u8 *record, int field) {
    s32 value = 0;
    switch (field & 255) {
    case 0:
        value = ((const PlayerFlags *)record)[16].b7;
        break;
    case 1:
        value = ((const PlayerFlags *)record)[17].b7;
        break;
    case 8:
        value = ((const PlayerFlags *)record)[24].b7;
        break;
    case 2:
        value = ((const PlayerFlags *)record)[18].b7;
        break;
    case 3:
        value = ((const PlayerFlags *)record)[19].b7;
        break;
    case 9:
        value = ((const PlayerFlags *)record)[25].b7;
        break;
    case 6:
        value = ((const PlayerFlags *)record)[22].b7;
        break;
    case 4:
        value = ((const PlayerFlags *)record)[20].b7;
        break;
    case 5:
        value = ((const PlayerFlags *)record)[21].b7;
        break;
    case 13:
        value = ((const PlayerFlags *)record)[14].b7;
        break;
    case 7:
        value = ((const PlayerFlags *)record)[23].b7;
        break;
    case 22:
        value = ((const PlayerFlags *)record)[32].b7;
        break;
    case 14:
        value = ((const PlayerFlags *)record)[30].b0;
        break;
    case 11:
        value = ((const PlayerFlags *)record)[27].b7;
        break;
    case 12:
        value = ((const PlayerFlags *)record)[15].b7;
        break;
    case 15:
        value = ((const PlayerFlags *)record)[30].b1;
        break;
    case 16:
        value = ((const PlayerFlags *)record)[30].b2;
        break;
    case 19:
        value = ((const PlayerFlags *)record)[30].b5;
        break;
    case 17:
        value = ((const PlayerFlags *)record)[30].b3;
        break;
    case 18:
        value = ((const PlayerFlags *)record)[30].b4;
        break;
    case 20:
        value = ((const PlayerFlags *)record)[30].b6;
        break;
    case 21:
        value = ((const PlayerFlags *)record)[30].b7;
        break;
    }
    return value;
}
