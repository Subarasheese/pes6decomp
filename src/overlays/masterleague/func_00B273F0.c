/* compiler: mwcc-3.0.1b151 */
#include "types.h"
typedef struct {
    u8 reserved[0xe4];
    u16 entries[];
} SelectionTable;
extern SelectionTable *func_00228960(void);
u16 func_00B273F0(s32 index) {
    SelectionTable *table = func_00228960();
    return table->entries[(u8)index];
}
