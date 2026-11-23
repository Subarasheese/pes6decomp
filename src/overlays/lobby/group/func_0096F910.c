/* compiler: mwcc-3.0.1b210 */
#pragma opt_strength_reduction off
#include "types.h"
typedef struct {
    u8 reserved00[0x14];
    s32 enabled, selection;
    u8 reserved1c[0x10];
    char buffer[257];
} LobbyInputPage;
extern LobbyInputPage *func_00969AF0(void);
extern const char *func_001F08B0(s32);
extern void func_0099C760(void), func_0099C730(s32), func_009B40A0(s32), func_009B1A60(s32),
    func_009C3180(s32), func_009C2ED0(s32, const char *), func_009C2DC0(s32, const char *),
    func_009C24F0(s32), func_009C2490(s32), func_009C2460(s32), func_009C23E0(s32),
    func_009717C0(s32);
extern void *func_001C48E8(void *, s32, u32);
void func_0096F910(void) {
    LobbyInputPage *p = func_00969AF0();
    func_0099C760();
    func_0099C730(0x020c0009);
    p->selection = 0;
    p->enabled = 1;
    func_001C48E8(p->buffer, 0, sizeof(p->buffer));
    func_009B40A0(0);
    func_009B1A60(0);
    func_009C3180(2);
    func_009C2ED0(0, func_001F08B0(0x01f70088));
    func_009C2ED0(1, func_001F08B0(0x01f70044));
    func_009C2DC0(0, func_001F08B0(0x01f70043));
    func_009C2DC0(1, func_001F08B0(0x020c0006));
    func_009C2DC0(2, func_001F08B0(0x01f7006b));
    func_009C24F0(2);
    func_009C2490(0);
    func_009C2460(0);
    func_009C23E0(0x30);
    func_009717C0(1);
}
