/* compiler: mwcc-3.0.1b151 */
#include "pes6/sound_driver.h"

s32 func_0024F5B0(u32 command, s32 first, s32 second, s32 third) {
    switch ((command >> 29) & 7) {
    case 2:
        if (D_00583340.count2 >= SOUND_QUEUE_CAPACITY) {
            D_00583340.peak2 = -1;
            return 0;
        }
        D_00583340.commands2[D_00583340.count2].command = command;
        D_00583340.commands2[D_00583340.count2].first = first;
        D_00583340.commands2[D_00583340.count2].second = second;
        D_00583340.commands2[D_00583340.count2].third = third;
        D_00583340.count2++;
        if (D_00583340.peak2 < D_00583340.count2)
            D_00583340.peak2 = D_00583340.count2;
        break;
    case 3:
        if (D_00583340.count3 >= SOUND_QUEUE_CAPACITY) {
            D_00583340.peak3 = -1;
            return 0;
        }
        D_00583340.commands3[D_00583340.count3].command = command;
        D_00583340.commands3[D_00583340.count3].first = first;
        D_00583340.commands3[D_00583340.count3].second = second;
        D_00583340.commands3[D_00583340.count3].third = third;
        D_00583340.count3++;
        if (D_00583340.peak3 < D_00583340.count3)
            D_00583340.peak3 = D_00583340.count3;
        break;
    case 4:
        if (D_00583340.count4 >= SOUND_QUEUE_CAPACITY) {
            D_00583340.peak4 = -1;
            return 0;
        }
        D_00583340.commands4[D_00583340.count4].command = command;
        D_00583340.commands4[D_00583340.count4].first = first;
        D_00583340.commands4[D_00583340.count4].second = second;
        D_00583340.commands4[D_00583340.count4].third = third;
        D_00583340.count4++;
        if (D_00583340.peak4 < D_00583340.count4)
            D_00583340.peak4 = D_00583340.count4;
        break;
    }
    return 1;
}
