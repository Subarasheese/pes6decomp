/* Sony SDK code; source adapted from crashwoc-decomp-ps2 (src/sdk/sce/devvu0.c). */
 
 

int func_00102C80(void);
void func_00102CC8(unsigned short addr);
unsigned short func_00102CD8(void);

int func_00102BB0(void)
{
    int resumed = 0;

    switch (func_00102C80()) {
    case 1:
    case 2:
    case 3:
        resumed = 1;
        func_00102CC8(func_00102CD8());
        break;
    }
    return resumed;
}