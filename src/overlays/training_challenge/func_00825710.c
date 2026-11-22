/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef struct {
    u8 reserved[0x34];
    u8 entries[];
} SelectionTable;
extern SelectionTable *func_00221150(void);
extern u8 D_00591C09[];
u8 *func_00825710(void) {
    if (D_00591C09[0] == 5)
        return func_00221150()->entries;
    return 0;
}
