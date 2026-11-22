/* compiler: ee-gcc-2.96-G0 */
/* SjRbf_putChunk adapted from LucasPicoli/god-hand-decomp, src/cod/00324950.c. See THIRD_PARTY.md.
 */
#include "pes6/cri_stream_joint.h"

extern void *memcpy(void *dst, const void *src, unsigned int size);
extern const char D_003CC388[];
extern const char D_003CC398[];
extern const char D_003CC2D0[];
extern const char D_003CC300[];
extern void func_00176E78(const char *error, const char *detail);
void func_00177508(SjRbf *sj, int id, SjChunk *ck) {
    int off;
    int end;
    int n;
    int len;
    int cnt;
    int size;
    s8 *data;
    if (sj == 0) {
        func_00176E78(D_003CC388, D_003CC2D0);
        return;
    }
    if (sj->used == 0) {
        func_00176E78(D_003CC398, D_003CC300);
        return;
    }
    len = ck->len;
    cnt = len;
    if (len <= 0)
        return;
    data = ck->data;
    if (data == 0)
        return;
    if (id == 1) {
        off = data - sj->buf;
        if (off < sj->extra) {
            size = sj->size;
            n = (len < (sj->extra - off)) ? (len) : (sj->extra - off);
            memcpy(sj->buf + (size + off), data, n);
            cnt = ck->len;
            data = ck->data;
            off = data - sj->buf;
        }
        off = off + cnt;
        size = sj->size;
        end = off;
        if (size < end) {
            n = (cnt < (end - size)) ? (cnt) : (end - size);
            memcpy(sj->buf, sj->buf + (end - n), n);
            cnt = ck->len;
        }
        sj->data += cnt;
        sj->dataReturned += ck->len;
    } else if (id == 0) {
        sj->free += len;
        sj->freeReturned += ck->len;
    } else {
        ck->len = 0;
        ck->data = 0;
        if (sj->err != 0)
            sj->err(sj->errObj, -3);
    }
}
