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
extern TtyInfo D_003EBE50;
extern unsigned char D_003EBE80[0x140];
extern unsigned char D_003EBFC0[0x140];

#define tty_queue D_00703280
#define tty_info  D_003EBE50
#define tty_wbuf  D_003EBE80
#define tty_rbuf  D_003EBFC0

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
void sceTtyHandler(int event, int param, TtyInfo *ti);
int sceTtyWrite(const char *buf, int len);
int sceTtyRead(char *buf, int len);



int sceTtyInit(void)
{
    TtyHdr *hdr;

    FlushCache(0);
    tty_info.socket = sceDeci2Open(PROTO_ETTY, &tty_info, (Deci2Handler)sceTtyHandler);
    if (tty_info.socket < 0) {
        return 0;
    }
    tty_info.writing = 0;
    tty_info.wlen = 0;
    tty_info.rlen = 0;
    tty_info.rbuf = UNCACHED(tty_rbuf);
    hdr = UNCACHED(tty_wbuf);
    tty_info.wbuf = (unsigned char *)hdr;
    hdr->proto = PROTO_ETTY;
    hdr->src = 'E';
    hdr->dest = 'H';
    hdr->rsvd = 0;
    hdr->id = 0;
    tty_info.queue = QueueInit(TTY_BUFSZ);
    return 1;
}
