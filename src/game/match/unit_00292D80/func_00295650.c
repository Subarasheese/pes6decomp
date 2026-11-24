/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_weather.h"

void func_00295650(StadiumWeatherInput *input, const u8 *region) {
    if ((s32)input->weather >= 4) {
        input->weather = 3U;
    }
    if ((s32)input->month >= 0xD) {
        input->month = 0xCU;
    }
    if ((s32)input->month <= 0) {
        input->month = 1U;
    }
    if ((s32)input->time >= 0x19) {
        input->time = 0x18U;
    }
    if ((s32)input->time <= 0) {
        input->time = 1U;
    }
    if (input->seed == 0) {
        input->seed = 1U;
    }
    func_00295170(func_00295280(), input, region);
}
