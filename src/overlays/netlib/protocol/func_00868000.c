/* compiler: mwcc-3.0.1b151 */
#pragma inline_depth(16)
#include "pes6/net_md5.h"
#include "pes6/netlib_packet_buffer.h"
#include "pes6/lobby_login.h"
#include "pes6/netlib_connection.h"
extern s32 sprintf(char *out, const char *format, ...);
extern u32 func_001C80F0(const char *text);
extern void *func_001C4730(void *dest, const void *src, u32 size);
extern void func_00873CF0(void *context, void *packet, s32 mode);
extern char D_008895F8[];
/* The PS2 C calling convention promotes mode to int. The packet stores its low byte. */
s32 func_00868000(connection, name, password, challenge, channel, players, options, mode)
LobbyChannel *connection;
const char *name;
const char *password;
const u8 *challenge;
LobbyChannel *channel;
const void *players;
s32 options;
s8 mode;
{
    s8 zero = 0;
    NetMd5Context md5;
    char material[81];
    u8 digest[17];
    u8 reservedDigest[17];
    NetlibPacket packet;
    (void)players;
    (void)options;
    if (!name || !password)
        return NETLIB_INVALID_ARGUMENT;
    func_001C48E8(material, 0, sizeof(material));
    func_001C48E8(digest, 0, sizeof(digest));
    func_001C48E8(reservedDigest, 0, sizeof(reservedDigest));
    sprintf(material, D_008895F8, name);
    func_001C4730(material + func_001C80F0(name), challenge, 16);
    sprintf(material + func_001C80F0(name) + 16, D_008895F8, password);
    func_00873CB0(&md5);
    func_00873BB0(&md5, (u8 *)material, func_001C80F0(name) + 16 + func_001C80F0(password));
    func_00873A70(digest, &md5);
    netlib_begin_packet(&packet, 0x3003);
    func_008741D0(&packet, name, 32);
    func_008741D0(&packet, digest, 16);
    func_00874420(&packet, &zero);
    func_00874420(&packet, (const s8 *)&mode);
    func_00874480(&packet);
    func_00873CF0(&((NetlibConnection *)connection)->packets, &packet, 0);
    return func_0085F2A0(&packet, channel) ? NETLIB_SEND_FAILED : 0;
}
