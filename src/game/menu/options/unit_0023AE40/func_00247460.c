/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[1];
    s8 v;
    u8 pad[0x34 - 2];
} Rec;

extern Rec D_003AA200[];

s32 func_00247460(s32 a0) {
    s32 i;
    for (i = 0; i < 8; i++) {
        if (a0 == 0) {
            switch (D_003AA200[i].v) {
            case -1:
            case -2:
                return 1;
            }
        } else {
            switch (D_003AA200[i].v) {
            case 1:
            case 2:
                return 1;
            }
        }
    }
    return 0;
}
