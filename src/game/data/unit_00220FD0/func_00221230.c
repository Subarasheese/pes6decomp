/* compiler: mwcc-3.0.1b210 */
#include "pes6/pad_settings.h"

typedef struct {
    u8 reserved00[0x20C];
    SavedPadSettings pads[8];
} PadSettingsTable;

extern void *Pes6OptionData_GetBase(void);

SavedPadSettings *func_00221230(s32 pad) {
    PadSettingsTable *table = Pes6OptionData_GetBase();

    if (pad >= 8)
        return &table->pads[0];
    return &table->pads[pad];
}
