/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0x4];
    u8 used;
    u8 pad5[0x7];
    void *data;
} Buf10;

void func_001299A0(void *);
void func_001C48E8(void *, s32, s32);

void func_00133D40(Buf10 *buf) {
    if (buf == NULL) {
        return;
    }
    if (buf->used == 0) {
        return;
    }
    if (buf->data != NULL) {
        func_001299A0(buf->data);
    }
    func_001C48E8(buf, 0, sizeof(Buf10));
}
