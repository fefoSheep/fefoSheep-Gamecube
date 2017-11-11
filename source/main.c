#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#include <ogcsys.h>
#include <gccore.h>

static void *xfb = NULL;
static GXRModeObj *rmode = NULL;

void *Initialise();

int main(int argc, char **argv) {

	xfb = Initialise();

	printf("v1.5.1\n");
	printf("downloa fefoshep form gothu!!!\n");
	sleep(6);
	printf("downloa compete!! now instalin!\n");
	sleep(6);
	printf("isntal compete! nowa downloa gacube friig am!!!\n");
	sleep(6);
	printf("now downloa frii wii and ds gam for gacube\n");
	sleep(6);
	printf("downloa ps2 frii gam port for gacube too\n");
	sleep(6);
	printf("u GO T FRI GAM!!!\n");
	sleep(6);
	printf("now lunching frii homebru!!\n");
	sleep(3);
	exit(0);


	while(1) {

		VIDEO_WaitVSync();
	}

	return 0;
}

void * Initialise() {

	void *framebuffer;

	VIDEO_Init();
	PAD_Init();
	
	rmode = VIDEO_GetPreferredMode(NULL);

	framebuffer = MEM_K0_TO_K1(SYS_AllocateFramebuffer(rmode));
	console_init(framebuffer,20,20,rmode->fbWidth,rmode->xfbHeight,rmode->fbWidth*VI_DISPLAY_PIX_SZ);
	
	VIDEO_Configure(rmode);
	VIDEO_SetNextFramebuffer(framebuffer);
	VIDEO_SetBlack(FALSE);
	VIDEO_Flush();
	VIDEO_WaitVSync();
	if(rmode->viTVMode&VI_NON_INTERLACE) VIDEO_WaitVSync();

	return framebuffer;

}
