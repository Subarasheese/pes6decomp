/* compiler: mwcc-3.0.1b151 */
#include "types.h"
typedef struct {
    u8 low : 3;
    u8 high : 3;
    u8 unused : 2;
} AttributePair;

s32 func_00228570(const u8 *record, int field) {
    s32 value = 0;
    switch (field & 255) {
    case 0:
        value = record[2] & 127;
        break;
    case 1:
        value = record[3] & 127;
        break;
    case 2:
        value = record[4] & 127;
        break;
    case 3:
        value = record[5] & 127;
        break;
    case 4:
        value = record[6] & 127;
        break;
    case 5:
        value = record[7] & 127;
        break;
    case 6:
        value = record[8] & 127;
        break;
    case 7:
        value = record[9] & 127;
        break;
    case 8:
        value = record[10] & 127;
        break;
    case 9:
        value = record[11] & 127;
        break;
    case 10:
        value = record[12] & 127;
        break;
    case 11:
        value = record[13] & 127;
        break;
    case 12:
        value = record[14] & 127;
        break;
    case 13:
        value = record[15] & 127;
        break;
    case 14:
        value = record[16] & 127;
        break;
    case 15:
        value = record[17] & 127;
        break;
    case 16:
        value = record[18] & 127;
        break;
    case 17:
        value = record[19] & 127;
        break;
    case 18:
        value = record[20] & 127;
        break;
    case 19:
        value = record[21] & 127;
        break;
    case 20:
        value = record[22] & 127;
        break;
    case 21:
        value = record[24] & 127;
        break;
    case 22:
        value = record[25] & 127;
        break;
    case 23:
        value = record[26] & 127;
        break;
    case 24:
        value = record[27] & 127;
        break;
    case 25:
        value = record[23] & 127;
        break;
    case 26:
        value = record[29] & 7;
        break;
    case 27:
        value = ((const AttributePair *)record)[29].high;
        break;
    case 28:
        value = ((const AttributePair *)record)[28].high;
        break;
    }
    return (u8)value;
}
