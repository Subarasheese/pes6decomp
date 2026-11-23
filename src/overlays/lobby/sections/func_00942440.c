/* compiler: mwcc-3.0.1b210 */
#include "pes6/lobby_request.h"
typedef struct {
    u8 reserved[0x894];
    char name[0x41];
    u8 pad[3];
    char password[0x11];
} LobbyNames;
extern LobbyNames *func_00841140(void);
extern s32 func_0081D6D0(const char *s);
extern char *func_001C8590(char *, const char *, u32);
extern void *func_001C48E8(void *, s32, u32);
extern s32 func_0086A0F0(LobbyChannel *, const char *, const char *);

s32 func_00942440(s32 channel, const char *name, const char *password) {
    s32 pending;
    LobbyChannel *connection;
    pending = 0;
    connection = func_0082C2A0();
    if (func_0082B4C0(channel) == 1)
        pending = 1;
    if (!connection)
        func_0082CA50(0x33, -1);
    if (!(channel >= 0 && channel < 9))
        func_0082CA50(0x33, -1);
    if (func_0081D6D0(name) == 0)
        func_0082CA50(0x33, -1);
    switch (func_0082CA10(0x33)) {
    case 0:

        if (func_00862110(connection, channel) == 1) {

            if (func_0086A0F0(&connection[channel], name, password) == 0) {
                func_0082C840(0x33);
                func_0082C6D0(0x33);
                func_0082C690(0x33, 0);
                func_0082C980(0x33);
            } else {
                func_0082CA50(0x33, -1);
            }
            if (pending == 1)
                func_0082CA50(0x33, -1);
        } else
            func_0082CA50(0x33, -1);
        break;
    case 1:
        if (func_0082C8A0(0x33) == 1) {
            if (func_0082C7C0(0x33) == 0) {
                func_0082C980(0x33);
            } else {
                func_0082C980(0x33);
                func_0082C980(0x33);
            }
        } else {
            if (func_00862110(connection, channel) == 0)
                func_0082CA50(0x33, -1);
            if (func_0082C5B0(0x33) > 7200)
                func_0082CA50(0x33, 3);
            if (pending == 1)
                func_0082CA50(0x33, -1);
        }
        break;
    case 2: {
        LobbyNames *saved = func_00841140();
        if (saved) {
            func_001C48E8(saved->name, 0, sizeof(saved->name));
            func_001C8590(saved->name, name, 0x40);
            func_001C48E8(saved->password, 0, sizeof(saved->password));
            if (func_0081D6D0(password) == 1)
                func_001C8590(saved->password, password, 0x10);
        }
    }
        func_0082C920(0x33);
        func_0082C840(0x33);
        func_0082C690(0x33, 0);
        return func_00827450(channel) == 1 ? 3 : 4;
    case 3:
        func_0082C920(0x33);
        func_0082C840(0x33);
        func_0082C690(0x33, 0);
        return func_00827450(channel) == 1 ? 3 : 1;
    default:
        func_0082C920(0x33);
        func_0082C840(0x33);
        func_0082C690(0x33, 0);
        return func_00827450(channel) == 1 ? 3 : 2;
    }
    return 0;
}
