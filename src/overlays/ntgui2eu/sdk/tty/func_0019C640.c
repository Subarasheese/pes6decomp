/* compiler: ee-gcc-2.9 */
/* Sony SDK code; source adapted from crashwoc-decomp-ps2 (src/sdk/sce/tty.c). */
/*
 * Unit: sdk/sce/tty
 *
 * Functions:
 *   0x00279d88 QueueInit
 *   0x00279db0 QueuePeekWriteDone
 *   0x00279df0 QueuePeekReadDone
 *   0x00279e30 sceTtyHandler
 *   0x00279fc8 sceTtyWrite
 *   0x0027a118 sceTtyRead
 *   0x0027a1e8 sceTtyInit
 */

#define UNCACHED_SEGMENT 0x20000000
#define UNCACHED(p) ((void *)((unsigned int)(p) | UNCACHED_SEGMENT))

#define PROTO_ETTY 0x210

#define DECI2_READ      1
#define DECI2_READDONE  2
#define DECI2_WRITE     3
#define DECI2_WRITEDONE 4

#define TTY_BUFSZ 0x100

typedef struct {
    int size;
    volatile int count;
    unsigned char *rp;
    unsigned char *wp;
    unsigned char buf[TTY_BUFSZ];
} Queue;

typedef struct {
    unsigned short len;
    unsigned short rsvd;
    unsigned short proto;
    char src;
    char dest;
    int id;
} TtyHdr;

typedef struct {
    TtyHdr hdr;
    unsigned char data[TTY_BUFSZ];
} TtyPacket;

typedef struct {
    volatile int socket;
    volatile int wlen;
    volatile int rlen;
    volatile int writing;
    unsigned char *wbuf;
    unsigned char *rbuf;
    Queue *queue;
} TtyInfo;

typedef void (*Deci2Handler)(int event, int param, void *opt);

extern Queue D_00703280;
extern TtyInfo D_01201490;
extern unsigned char D_012014C0[0x140];
extern unsigned char D_00703500[0x140];

#define tty_queue D_00703280
#define tty_info  D_01201490
#define tty_wbuf  D_012014C0
#define tty_rbuf  D_00703500

extern int sceDeci2Open(unsigned short protocol, void *opt, Deci2Handler handler);
extern int func_001A69C8(int socket, char dest);
extern void func_001A69F8(int socket);
extern int sceDeci2ExRecv(int socket, void *buf, unsigned short len);
extern int sceDeci2ExSend(int socket, void *buf, unsigned short len);
extern int func_001A4728(void);
extern int func_001A4778(void);
extern void FlushCache(int mode);
extern int kprintf(const char *fmt, ...);
/* Send len bytes to the host TTY (newlines become CR LF); returns the bytes taken from buf. */
int func_0019C640(const char *buf, int len)
{
    TtyPacket *pkt;
    unsigned char *p;
    int oldintr;
    int n = 0;
    int written = 0;

    if (tty_info.writing) {
        return -1;
    }
    oldintr = func_001A4728();
    tty_info.writing = 1;
    pkt = UNCACHED(tty_wbuf);
    tty_info.wbuf = (unsigned char *)pkt;
    p = pkt->data;
    while (len-- != 0) {
        if (*buf == '\n') {
            *p++ = '\r';
            if (++n >= TTY_BUFSZ) {
                break;
            }
        }
        *p++ = *buf++;
        n++;
        written++;
        if (n >= TTY_BUFSZ) {
            break;
        }
    }
    tty_info.wlen = n + sizeof(TtyHdr);
    pkt->hdr.len = tty_info.wlen;
    if (func_001A69C8(tty_info.socket, pkt->hdr.dest) < 0) {
        tty_info.writing = 0;
        if (oldintr) {
            func_001A4778();
        }
        return -1;
    }
    while (tty_info.writing) {
        func_001A69F8(tty_info.socket);
    }
    if (oldintr) {
        func_001A4778();
    }
    return written;
}
