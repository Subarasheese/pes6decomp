/* compiler: mwcc-3.0.1b151 */

#include "pes6/pass_directions.h"

extern u8 D_00CB53BC[];
extern const u8 D_00CA9968[ORDER_LENGTH];
extern const u8 D_00CA9978[ORDER_LENGTH];
extern const u8 D_00CA9988[ORDER_LENGTH];
extern const u8 D_00CA9998[ORDER_LENGTH];
extern const u8 D_00CA99A8[ORDER_LENGTH];
extern const u8 D_00CA99B8[ORDER_LENGTH];
extern const u8 D_00CA99C8[ORDER_LENGTH];
extern const u8 D_00CA99D8[ORDER_LENGTH];
extern const u8 D_00CA99E8[ORDER_LENGTH];
extern const u8 D_00CA99F8[ORDER_LENGTH];
extern const u8 D_00CA9A08[ORDER_LENGTH];
extern const u8 D_00CA9A18[ORDER_LENGTH];
extern const u8 D_00CA9A28[ORDER_LENGTH];
extern const u8 D_00CA9A38[ORDER_LENGTH];
extern const u8 D_00CA9A48[ORDER_LENGTH];
extern const u8 D_00CA9A58[ORDER_LENGTH];

void func_00953060(u8 mode) {
    s32 i;
    switch (mode) {
    case 0x0:
        D_00CB53BC[0] = mode;
        for (i = 0; i < ORDER_LENGTH; ++i) {
            D_00CB52A0.preference[0][i] = D_00CA9968[i];
            D_00CB52A0.preference[1][i] = D_00CA9988[i];
            D_00CB52A0.preference[8][i] = D_00CA99A8[i];
            D_00CB52A0.preference[9][i] = D_00CA99C8[i];
        }
        break;
    case 0x1:
        D_00CB53BC[0] = mode;
        for (i = 0; i < ORDER_LENGTH; ++i) {
            D_00CB52A0.preference[0][i] = D_00CA9978[i];
            D_00CB52A0.preference[1][i] = D_00CA9998[i];
            D_00CB52A0.preference[8][i] = D_00CA99B8[i];
            D_00CB52A0.preference[9][i] = D_00CA99D8[i];
        }
        break;
    case 0x2:
        for (i = 0; i < ORDER_LENGTH; ++i) {
            D_00CB52A0.preference[6][i] = D_00CA99F8[i];
            D_00CB52A0.preference[7][i] = D_00CA9A18[i];
        }
        break;
    case 0x3:
        for (i = 0; i < ORDER_LENGTH; ++i) {
            D_00CB52A0.preference[6][i] = D_00CA99E8[i];
            D_00CB52A0.preference[7][i] = D_00CA9A08[i];
        }
        break;
    case 0xff:
        for (i = 0; i < ORDER_LENGTH; ++i) {
            D_00CB52A0.preference[0][i] = D_00CA9978[i];
            D_00CB52A0.preference[1][i] = D_00CA9998[i];
            D_00CB52A0.preference[8][i] = D_00CA99B8[i];
            D_00CB52A0.preference[9][i] = D_00CA99D8[i];
            D_00CB52A0.preference[6][i] = D_00CA99F8[i];
            D_00CB52A0.preference[7][i] = D_00CA9A18[i];
            D_00CB52A0.preference[2][i] = D_00CA9A28[i];
            D_00CB52A0.preference[3][i] = D_00CA9A38[i];
            D_00CB52A0.preference[4][i] = D_00CA9A48[i];
            D_00CB52A0.preference[5][i] = D_00CA9A58[i];
        }
        break;
    default:
        break;
    }
}
