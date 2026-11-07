/* Sony SDK code; source adapted from crashwoc-decomp-ps2 (src/sdk/sce/devvu0.c). */
 
 

int func_00102748(void);
void func_00102788(unsigned short addr);
unsigned short func_00102798(void);

int func_00102678(void)
{
    int resumed = 0;

    switch (func_00102748()) {
    case 1:
    case 2:
    case 3:
        resumed = 1;
        func_00102788(func_00102798());
        break;
    }
    return resumed;
}