/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pending;
    u8 pad1[0xB];
    void (*onOpen)(void);
    u8 pad10[0x4];
    void (*onClose)(void);
} Dialog;

extern Dialog D_0058C6D0;

void func_00255EA0(void) {
    Dialog *dialog = &D_0058C6D0;

    if (dialog->pending) {
        dialog->pending = 0;
        if (D_0058C6D0.onClose != NULL) {
            dialog->onClose();
        }
    }
}
