// fight - main.c gerado por V12
#include <pspkernel.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include "j2me_gfx.h"
#include "j2me_font.h"
#include "j2me_input.h"
#include "j2me_image.h"
#include "j2me_clip.h"
#include "j2me_runtime.h"

PSP_MODULE_INFO("fight", 0, 1, 0);
PSP_MAIN_THREAD_ATTR(THREAD_ATTR_USER);

#define SCR_W 480
#define SCR_H 272

// Tipos J2ME (todos como void*)
typedef void* Image;
typedef void* Graphics;
typedef void* DirectGraphics;
typedef void* Font;
typedef void* String;
typedef void* StringBuffer;
typedef void* Command;
typedef void* Display;
typedef void* Displayable;
typedef void* Canvas;
typedef void* FullCanvas;
typedef void* GameCanvas;
typedef void* Random;
typedef void* Timer;
typedef void* TimerTask;
typedef void* Vector;
typedef void* List;
typedef void* Form;
typedef void* TextField;
typedef void* InputStream;
typedef void* DataInputStream;
typedef void* OutputStream;
typedef void* RecordStore;
typedef void* Thread;
typedef void* MIDlet;
typedef void* Object;
typedef void* Class;
typedef void* Math;
typedef void* System;
typedef void* Integer;
typedef void* Long;
typedef void* Short;
typedef void* Byte;
typedef void* Character;
typedef void* Boolean;
typedef void* Float;
typedef void* Double;

// Stubs de biblioteca
void j2me_canvas_repaint(void) { }
void j2me_canvas_serviceRepaints(void) { }
void j2me_gc(void) { }
void* j2me_image_get_graphics(void* img) { return img; }

// Forward typedefs das classes do projeto
typedef struct Fight_s Fight;
typedef struct FightC_s FightC;
typedef struct OEM_s OEM;

// Globais
void* _self = 0;
void* _p1_self = 0;
void* _p2_self = 0;
void* _role_self = 0;
FightC* msf_mc = 0;
int Game_count = 0;
int MapCanvas_OFFY = 96;
int MapCanvas_OFFX = 180;
int MapCanvas_CanvasWidth = 480;
int MapCanvas_CanvasHeight = 272;
int MapCanvas_still = 0;
int MapCanvas_lightflag = 0;

// Structs
struct Fight_s {
    FightC*      theCanvas;
    Display*     display;
    OEM*         oemClass;
    List*        menuScreen;
    List*        displayMenuSettings;
    Form*        instructions;
    Command*     retInstructionsAboutCommand;
    Command*     backInstructionsCommand;
};

struct FightC_s {
    int64_t      demoTimer;
    int          demoMode;
    int          gameOff;
    int          xMove;
    int          div;
    int          countCont;
    Thread*      thread;
    Command*     exitCommand;
    Command*     helpCommand;
    Command*     skipCommand;
    Command*     restartCommand;
    Font*        fontL;
    int          infoScreen;
    int          logoOffScreen;
    int          deleteFirstScreen;
    int          finishedpainting;
    int          repaintBackground;
    int          rememberLevel;
    Image*       logo;
    Image**      picFighters;
    Image*       picBackgroundLevels;
    int          numImgs;
    int          loadedPic;
    Graphics*    offGraphics;
    Image*       offImage;
    int          width;
    int          height;
    int          width2;
    int          realw;
    int          realh;
    int          scostaW;
    int          scostaH;
    int          remClipY;
    int          DEMOMODE;
    int          GAME;
    int          ENEMYWIN;
    int          PLAYERWIN;
    int          ROUNDWON;
    int          NEWLEVEL;
    int          NONE;
    int          MOVELEFT;
    int          MOVERIGHT;
    int          PUNCH;
    int          KICK;
    int          BLOCK;
    int          HITTED;
    int          ONFLOOR;
    int          xPlayer;
    int          commandPlayer;
    int          statePlayer;
    int          imagePlayer;
    int          hpPlayer;
    int          roundPlayer;
    int          xEnemy;
    int          commandEnemy;
    int          stateEnemy;
    int          imageEnemy;
    int          hpEnemy;
    int          roundEnemy;
    Random*      rand;
    int          gameState;
    int          continueGame;
    int64_t      continueGameTime;
    int64_t      continueGameActualTime;
    int64_t      continueGameStartingTime;
    int          executeCommand;
    int          rememberCommand;
    int          playerWinGame;
    int          level;
    int          lastLevel;
    String**     levelMsgs;
    String*      text;
    int          actualText;
    int          roundCounter;
    int          roundDisplay;
    int          isSound;
    int          isVibra;
    int          isLight;
    int          blue_col;
    int          white_col;
    int          black_col;
    Fight*       FightMainClass;
    int          extraGfxY;
    int*         colorCopper;
    int          firstCopper;
    int64_t      logoActualTime;
    int64_t      logoStartTime;
    int          blinkCounter;
    int          blue;
    int          restartDemoMode;
    int          restartGame;
    int          len;
    int          count;
    int          startParsing;
    int          yPrint;
    int          skipCounter;
    int          strWidth;
    int          cursorPos;
    int          page;
    int          xMovClouds1;
    int          xMovClouds2;
    int          blockCounter;
};

struct OEM_s {
    Display*     midletDisplay;
    String*      phoneConnected;
    Sound*       sound0NOKIA;
    Sound*       sound1NOKIA;
    Sound*       sound2NOKIA;
    Sound*       sound3NOKIA;
    Sound*       sound4NOKIA;
};

// Prototipos
void Fight_constructor(void* self);
void Fight_startApp(void* self);
void Fight_pauseApp(void* self);
void Fight_destroyApp(void* self, int arg0);
void Fight_commandAction(void* self, void* arg0, void* arg1);
void Fight_displaySettingsScreen(void* self);
void FightC_hideNotify(void* self);
void FightC_constructor(void* self, void* arg0);
void FightC_run(void* self);
void FightC_paint(void* self, void* arg0);
void FightC_paintCopperBar(void* self, void* arg0, int arg1);
void FightC_drawScreen(void* self);
void FightC_incPerc(void* self, int arg0);
void FightC_game(void* self);
void FightC_paintBackground(void* self);
void FightC_paintFighters(void* self);
void FightC_checkForHitFighters(void* self);
void FightC_damageFighter(void* self, int arg0);
void FightC_controlCpuFighter(void* self, int arg0);
int FightC_rand(void* self, int arg0, int arg1);
void FightC_keyPressed(void* self, int arg0);
void FightC_keyReleased(void* self, int arg0);
void FightC_startGame(void* self);
void FightC_playGame(void* self);
void FightC_skip(void* self);
void OEM_constructor(void* self, void* arg0);
void OEM_setLightOn(void* self);
void OEM_setLightOff(void* self);
void OEM_vibration(void* self);
void OEM_playSound(void* self, void* arg0);

// Implementacoes
void Fight_constructor(void* self) {
    Fight* s = (Fight*)self;
    if (!s) return;
    (void)s;
}

void Fight_startApp(void* self) {
    Fight* s = (Fight*)self;
    if (!s) return;
    (void)s;
}

void Fight_pauseApp(void* self) {
    Fight* s = (Fight*)self;
    if (!s) return;
    (void)s;
}

void Fight_destroyApp(void* self, int arg0) {
    Fight* s = (Fight*)self;
    if (!s) return;
    (void)s;
}

void Fight_commandAction(void* self, void* arg0, void* arg1) {
    Fight* s = (Fight*)self;
    if (!s) return;
    (void)s;
}

void Fight_displaySettingsScreen(void* self) {
    Fight* s = (Fight*)self;
    if (!s) return;
    (void)s;
}

void FightC_hideNotify(void* self) {
    FightC* s = (FightC*)self;
    if (!s) return;
    (void)s;
}

void FightC_constructor(void* self, void* arg0) {
    FightC* s = (FightC*)self;
    if (!s) return;
    (void)s;
}

void FightC_run(void* self) {
    FightC* s = (FightC*)self;
    if (!s) return;
    (void)s;
}

void FightC_paint(void* self, void* arg0) {
    FightC* s = (FightC*)self;
    if (!s) return;
    (void)s;
}

void FightC_paintCopperBar(void* self, void* arg0, int arg1) {
    FightC* s = (FightC*)self;
    if (!s) return;
    (void)s;
}

void FightC_drawScreen(void* self) {
    FightC* s = (FightC*)self;
    if (!s) return;
    (void)s;
}

void FightC_incPerc(void* self, int arg0) {
    FightC* s = (FightC*)self;
    if (!s) return;
    (void)s;
}

void FightC_game(void* self) {
    FightC* s = (FightC*)self;
    if (!s) return;
    (void)s;
}

void FightC_paintBackground(void* self) {
    FightC* s = (FightC*)self;
    if (!s) return;
    (void)s;
}

void FightC_paintFighters(void* self) {
    FightC* s = (FightC*)self;
    if (!s) return;
    (void)s;
}

void FightC_checkForHitFighters(void* self) {
    FightC* s = (FightC*)self;
    if (!s) return;
    (void)s;
}

void FightC_damageFighter(void* self, int arg0) {
    FightC* s = (FightC*)self;
    if (!s) return;
    (void)s;
}

void FightC_controlCpuFighter(void* self, int arg0) {
    FightC* s = (FightC*)self;
    if (!s) return;
    (void)s;
}

int FightC_rand(void* self, int arg0, int arg1) {
    FightC* s = (FightC*)self;
    if (!s) return 0;
    (void)s;
    return 0;
}

void FightC_keyPressed(void* self, int arg0) {
    FightC* s = (FightC*)self;
    if (!s) return;
    (void)s;
}

void FightC_keyReleased(void* self, int arg0) {
    FightC* s = (FightC*)self;
    if (!s) return;
    (void)s;
}

void FightC_startGame(void* self) {
    FightC* s = (FightC*)self;
    if (!s) return;
    (void)s;
}

void FightC_playGame(void* self) {
    FightC* s = (FightC*)self;
    if (!s) return;
    (void)s;
}

void FightC_skip(void* self) {
    FightC* s = (FightC*)self;
    if (!s) return;
    (void)s;
}

void OEM_constructor(void* self, void* arg0) {
    OEM* s = (OEM*)self;
    if (!s) return;
    (void)s;
}

void OEM_setLightOn(void* self) {
    OEM* s = (OEM*)self;
    if (!s) return;
    (void)s;
}

void OEM_setLightOff(void* self) {
    OEM* s = (OEM*)self;
    if (!s) return;
    (void)s;
}

void OEM_vibration(void* self) {
    OEM* s = (OEM*)self;
    if (!s) return;
    (void)s;
}

void OEM_playSound(void* self, void* arg0) {
    OEM* s = (OEM*)self;
    if (!s) return;
    (void)s;
}

int main(void) {
    j2me_gfx_init();
    j2me_input_init();
    j2me_random_init();

    FightC* mc = (FightC*)calloc(1, sizeof(FightC));
    _self = mc;
    msf_mc = mc;

    while (1) {
        j2me_input_update();
        if (j2me_input_should_quit()) break;
        j2me_gfx_begin_frame();
        j2me_gfx_clear(0x101020);
        j2me_gfx_flip();
    }
    j2me_gfx_shutdown();
    sceKernelExitGame();
    return 0;
}