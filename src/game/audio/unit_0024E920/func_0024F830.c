/* compiler: mwcc-3.0.1b151 */
#include "pes6/sound_driver.h"

void func_0024F830(void) {
    if (D_00583340.count2) {
        while (D_00583340.sent2 < SOUND_QUEUE_SEND_LIMIT && D_00583340.read2 < D_00583340.count2) {
            if (!SoundDriver_IsBusy()) {
                func_00255CF0(D_00583340.commands2[D_00583340.read2].command,
                              D_00583340.commands2[D_00583340.read2].first,
                              D_00583340.commands2[D_00583340.read2].second,
                              D_00583340.commands2[D_00583340.read2].third);
                D_00583340.sent2++;
                D_00583340.read2++;
            }
        }
        if (D_00583340.read2 >= D_00583340.count2) {
            D_00583340.count2 = 0;
            D_00583340.read2 = 0;
        }
        D_00583340.sent2 = 0;
    }
    if (D_00583340.count4) {
        if (D_00583340.read4 < D_00583340.count4 && !SoundDriver_IsBusy()) {
            func_00255CF0(D_00583340.commands4[D_00583340.read4].command,
                          D_00583340.commands4[D_00583340.read4].first,
                          D_00583340.commands4[D_00583340.read4].second,
                          D_00583340.commands4[D_00583340.read4].third);
            D_00583340.read4++;
        }
        if (D_00583340.read4 >= D_00583340.count4) {
            D_00583340.count4 = 0;
            D_00583340.read4 = 0;
        }
    }
}
