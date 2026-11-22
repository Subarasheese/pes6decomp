/* compiler: ee-gcc-2.9-G0 */
/* Source: nathanialf/ico, sce/libgraph/graph017.c (sceGsExecLoadImage). See LICENSES/ico-MIT.txt.
 */
extern int func_0019DBD0(const char *fmt, ...);

int func_001938B0(void *pkt, void *img) {
    unsigned int i = 0;
    while ((*((volatile int *)0x1000A000)) & 0x100) {
        if ((i++) > 0x1000000) {
            func_0019DBD0("sceGsExecLoadImage: DMA Ch.2 does not terminate\r\n");
            return -1;
        }
    }

    *((volatile int *)0x1000A020) = 6;
    if ((((unsigned int)pkt) & 0x70000000) == 0x70000000) {
        *((volatile int *)0x1000A010) = (((unsigned int)pkt) & 0x0FFFFFFF) | 0x80000000;
    } else {
        *((volatile int *)0x1000A010) = ((unsigned int)pkt) & 0x0FFFFFFF;
    }
    *((volatile int *)0x1000A000) = 0x101;
    while ((*((volatile int *)0x1000A000)) & 0x100) {
        if ((i++) > 0x1000000) {
            func_0019DBD0("sceGsExecLoadImage: DMA Ch.2 does not terminate\r\n");
            return -1;
        }
    }

    *((volatile int *)0x1000A020) = (int)((*((long *)(((char *)pkt) + 0x50))) & 0x7FFF);
    if ((((unsigned int)img) & 0x70000000) == 0x70000000) {
        *((volatile int *)0x1000A010) = (((unsigned int)img) & 0x0FFFFFFF) | 0x80000000;
    } else {
        *((volatile int *)0x1000A010) = ((unsigned int)img) & 0x0FFFFFFF;
    }
    *((volatile int *)0x1000A000) = 0x101;
    return 0;
}
