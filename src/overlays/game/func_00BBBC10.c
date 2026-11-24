/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_camera_playback.h"
extern void func_00BBCC90(void);
void func_00BBBC10(void) {
    switch (D_005E24B0.mode) {
    case 1:
        func_00BBCC90();
        break;
    case 2:
        func_002A6B20();
        D_005E24B0.elapsed += 1.0f;
        break;
    case 3:
        func_002A6B20();
        D_005E24B0.elapsed += 1.0f;
        break;
    case 4:
        func_002A6B20();
        D_005E24B0.elapsed += 1.0f;
        break;
    case 5:
        func_00295D40();
        func_002A6B20();
        D_005E24B0.elapsed += 1.0f;
        break;
    }
}
