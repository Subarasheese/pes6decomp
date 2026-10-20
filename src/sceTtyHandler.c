/* Sony SDK / C runtime code; source adapted from crashwoc-decomp-ps2 (src/sdk/sce/tty.c). */
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
extern TtyInfo D_00703390;
extern unsigned char D_007033C0[0x140];
extern unsigned char D_00703500[0x140];

#define tty_queue D_00703280
#define tty_info  D_00703390
#define tty_wbuf  D_007033C0
#define tty_rbuf  D_00703500

extern int sceDeci2Open(unsigned short protocol, void *opt, Deci2Handler handler);
extern int sceDeci2ReqSend(int socket, char dest);
extern int sceDeci2Poll(int socket);
extern int sceDeci2ExRecv(int socket, void *buf, unsigned short len);
extern int sceDeci2ExSend(int socket, void *buf, unsigned short len);
extern int DIntr(void);
extern int EIntr(void);
extern void FlushCache(int mode);
extern int kprintf(const char *fmt, ...);Queue *QueueInit(int size);
void QueuePeekWriteDone(Queue *q);
void QueuePeekReadDone(Queue *q);



void sceTtyHandler(int event, int param, TtyInfo *ti)
{
    TtyHdr *hdr;
    int n;
    int sent;

    switch (event) {
    case DECI2_READ:
    case DECI2_READDONE:
        if (param != 0) {
            if (ti->rlen + param > sizeof(tty_rbuf)) {
                kprintf("TTY: packet size larger than expect\n");
            }
            n = sceDeci2ExRecv(ti->socket, ti->rbuf + ti->rlen, param);
            if (n < 0) {
                kprintf("TTY: receive error");
            }
            ti->rlen += n;
        } else {
            hdr = (TtyHdr *)ti->rbuf;
            for (n = sizeof(TtyHdr); n < hdr->len; n++) {
                *ti->queue->wp = ti->rbuf[n];
                QueuePeekWriteDone(ti->queue);
            }
            ti->rlen = 0;
        }
        break;
    case DECI2_WRITE:
        sent = sceDeci2ExSend(ti->socket, ti->wbuf, ti->wlen);
        if (sent < 0) {
            kprintf("TTY: send err %d\n", sent);
            ti->writing = 0;
        } else {
            ti->wbuf += sent;
            ti->wlen -= sent;
        }
        break;
    case DECI2_WRITEDONE:
        if (ti->wlen != 0) {
            kprintf("TTY: err ti->wlen=%08x\n", ti->wlen);
        }
        ti->writing = 0;
        break;
    }
}
int sceTtyWrite(const char *buf, int len);
int sceTtyRead(char *buf, int len);
int sceTtyInit(void);
