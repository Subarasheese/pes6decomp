/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_00145490(s32);

s32 func_00150150(s32 id) {
    s32 kind = func_00145490(id);

    switch (kind) {
    case 0x14:
        return 0x40;
    case 0x13:
        return 0x400;
    }
    return 0;
}
