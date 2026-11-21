/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_00828160(void);
extern s32 *func_00842650(void);
s32 func_00842970(s32);
s32 func_008429F0(s32);

s32 func_0083D530(void) {
    s32 *entry;

    entry = func_00842650();
    func_00828160();
    if (entry == 0) {
        return 0;
    }
    *entry = 0;
    func_00842970(1);
    func_008429F0(1);
    return 0;
}
