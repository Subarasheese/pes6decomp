/* compiler: ee-gcc-2.9 */
#include "types.h"
typedef struct {
    u8 reserved00[0xf8];
    void *md5, *sha1;
} SSL3State;
typedef struct {
    u8 reserved00[0x54];
    SSL3State *s3;
} SSL;
extern void func_00BB1F50(void *, const void *, u32);
void func_00BCC0D8(SSL *s, const void *message, u32 length) {
    func_00BB1F50(s->s3->md5, message, length);
    func_00BB1F50(s->s3->sha1, message, length);
}
