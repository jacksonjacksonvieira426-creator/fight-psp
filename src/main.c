// fight - Port automatico J2ME -> PSP
// Gerado por portador.py
// MIDlet: Fight  Canvas: FightC

#include <pspkernel.h>
#include <string.h>
#include <stdlib.h>
#include "j2me_gfx.h"
#include "j2me_font.h"
#include "j2me_input.h"
#include "j2me_image.h"
#include "j2me_clip.h"
#include "j2me_runtime.h"
#include <stdint.h>

// ============================================
// TIPOS J2ME -> ponteiros opacos em C
// ============================================
typedef void* Image;
typedef void* Graphics;
typedef void* Font;
typedef void* String;
typedef void* Command;
typedef void* Display;
typedef void* Displayable;
typedef void* MIDlet;
typedef void* Canvas;

PSP_MODULE_INFO("fight", 0, 1, 0);
PSP_MAIN_THREAD_ATTR(THREAD_ATTR_USER);

#define SCR_W 480
#define SCR_H 272

// ============================================
// FORWARD DECLARATIONS das classes do projeto
// ============================================
typedef struct Fight_s Fight;
typedef struct FightC_s FightC;
typedef struct OEM_s OEM;

// ============================================
// ESTRUTURAS DE DADOS (traduzidas do J2ME)
// ============================================

// === Classe: Fight (extends MIDlet) ===
// Padroes detectados: MIDLET, TEM_STARTAPP
struct Fight_s {
    FightC*         theCanvas;  // theCanvas (LFightC;)
    Display*        display;  // display (Ljavax/microedition/lcdui/Display;)
    OEM*            oemClass;  // oemClass (LOEM;)
    List*           menuScreen;  // menuScreen (Ljavax/microedition/lcdui/List;)
    List*           displayMenuSettings;  // displayMenuSettings (Ljavax/microedition/lcdui/List;)
    Form*           instructions;  // instructions (Ljavax/microedition/lcdui/Form;)
    Command*        retInstructionsAboutCommand;  // retInstructionsAboutCommand (Ljavax/microedition/lcdui/Command;)
    Command*        backInstructionsCommand;  // backInstructionsCommand (Ljavax/microedition/lcdui/Command;)
};

// === Classe: FightC (extends Canvas) ===
// Padroes detectados: CANVAS, TEM_PAINT, TEM_INPUT, TEM_RUN, USA_IMAGE
struct FightC_s {
    int64_t         demoTimer;  // demoTimer (J)
    int             demoMode;  // demoMode (I)
    int             gameOff;  // gameOff (Z)
    int             xMove;  // xMove (I)
    int             div;  // div (I)
    int             countCont;  // countCont (I)
    Thread*         thread;  // thread (Ljava/lang/Thread;)
    Command*        exitCommand;  // exitCommand (Ljavax/microedition/lcdui/Command;)
    Command*        helpCommand;  // helpCommand (Ljavax/microedition/lcdui/Command;)
    Command*        skipCommand;  // skipCommand (Ljavax/microedition/lcdui/Command;)
    Command*        restartCommand;  // restartCommand (Ljavax/microedition/lcdui/Command;)
    Font*           fontL;  // fontL (Ljavax/microedition/lcdui/Font;)
    int             infoScreen;  // infoScreen (Z)
    int             logoOffScreen;  // logoOffScreen (Z)
    int             deleteFirstScreen;  // deleteFirstScreen (Z)
    int             finishedpainting;  // finishedpainting (Z)
    int             repaintBackground;  // repaintBackground (Z)
    int             rememberLevel;  // rememberLevel (Z)
    Image*          logo;  // logo (Ljavax/microedition/lcdui/Image;)
    Image**         picFighters;  // picFighters ([Ljavax/microedition/lcdui/Image;)
    Image*          picBackgroundLevels;  // picBackgroundLevels (Ljavax/microedition/lcdui/Image;)
    int             numImgs;  // numImgs (I)
    int             loadedPic;  // loadedPic (I)
    Graphics*       offGraphics;  // offGraphics (Ljavax/microedition/lcdui/Graphics;)
    Image*          offImage;  // offImage (Ljavax/microedition/lcdui/Image;)
    int             width;  // width (I)
    int             height;  // height (I)
    int             width2;  // width2 (I)
    int             realw;  // realw (I)
    int             realh;  // realh (I)
    int             scostaW;  // scostaW (I)
    int             scostaH;  // scostaH (I)
    int             remClipY;  // remClipY (I)
    int             DEMOMODE;  // DEMOMODE (I)
    int             GAME;  // GAME (I)
    int             ENEMYWIN;  // ENEMYWIN (I)
    int             PLAYERWIN;  // PLAYERWIN (I)
    int             ROUNDWON;  // ROUNDWON (I)
    int             NEWLEVEL;  // NEWLEVEL (I)
    int             NONE;  // NONE (I)
    int             MOVELEFT;  // MOVELEFT (I)
    int             MOVERIGHT;  // MOVERIGHT (I)
    int             PUNCH;  // PUNCH (I)
    int             KICK;  // KICK (I)
    int             BLOCK;  // BLOCK (I)
    int             HITTED;  // HITTED (I)
    int             ONFLOOR;  // ONFLOOR (I)
    int             xPlayer;  // xPlayer (I)
    int             commandPlayer;  // commandPlayer (I)
    int             statePlayer;  // statePlayer (I)
    int             imagePlayer;  // imagePlayer (I)
    int             hpPlayer;  // hpPlayer (I)
    int             roundPlayer;  // roundPlayer (I)
    int             xEnemy;  // xEnemy (I)
    int             commandEnemy;  // commandEnemy (I)
    int             stateEnemy;  // stateEnemy (I)
    int             imageEnemy;  // imageEnemy (I)
    int             hpEnemy;  // hpEnemy (I)
    int             roundEnemy;  // roundEnemy (I)
    Random*         rand;  // rand (Ljava/util/Random;)
    int             gameState;  // gameState (I)
    int             continueGame;  // continueGame (Z)
    int64_t         continueGameTime;  // continueGameTime (J)
    int64_t         continueGameActualTime;  // continueGameActualTime (J)
    int64_t         continueGameStartingTime;  // continueGameStartingTime (J)
    int             executeCommand;  // executeCommand (Z)
    int             rememberCommand;  // rememberCommand (I)
    int             playerWinGame;  // playerWinGame (Z)
    int             level;  // level (I)
    int             lastLevel;  // lastLevel (I)
    String**        levelMsgs;  // levelMsgs ([Ljava/lang/String;)
    String*         text;  // text (Ljava/lang/String;)
    int             actualText;  // actualText (I)
    int             roundCounter;  // roundCounter (I)
    int             roundDisplay;  // roundDisplay (Z)
    int             isSound;  // isSound (Z)
    int             isVibra;  // isVibra (Z)
    int             isLight;  // isLight (Z)
    int             blue_col;  // blue_col (I)
    int             white_col;  // white_col (I)
    int             black_col;  // black_col (I)
    Fight*          FightMainClass;  // FightMainClass (LFight;)
    int             extraGfxY;  // extraGfxY (Z)
    int*            colorCopper;  // colorCopper ([I)
    int             firstCopper;  // firstCopper (I)
    int64_t         logoActualTime;  // logoActualTime (J)
    int64_t         logoStartTime;  // logoStartTime (J)
    int             blinkCounter;  // blinkCounter (I)
    int             blue;  // blue (I)
    int             restartDemoMode;  // restartDemoMode (I)
    int             restartGame;  // restartGame (Z)
    int             len;  // len (I)
    int             count;  // count (I)
    int             startParsing;  // startParsing (Z)
    int             yPrint;  // yPrint (I)
    int             skipCounter;  // skipCounter (I)
    int             strWidth;  // strWidth (I)
    int             cursorPos;  // cursorPos (I)
    int             page;  // page (I)
    int             xMovClouds1;  // xMovClouds1 (I)
    int             xMovClouds2;  // xMovClouds2 (I)
    int             blockCounter;  // blockCounter (I)
};

// === Classe: OEM (extends Object) ===
// Padroes detectados: nenhum
struct OEM_s {
    Display*        midletDisplay;  // midletDisplay (Ljavax/microedition/lcdui/Display;)
    String*         phoneConnected;  // phoneConnected (Ljava/lang/String;)
    Sound*          sound0NOKIA;  // sound0NOKIA (Lcom/nokia/mid/sound/Sound;)
    Sound*          sound1NOKIA;  // sound1NOKIA (Lcom/nokia/mid/sound/Sound;)
    Sound*          sound2NOKIA;  // sound2NOKIA (Lcom/nokia/mid/sound/Sound;)
    Sound*          sound3NOKIA;  // sound3NOKIA (Lcom/nokia/mid/sound/Sound;)
    Sound*          sound4NOKIA;  // sound4NOKIA (Lcom/nokia/mid/sound/Sound;)
};

// ============================================
// METODOS (traduzidos do bytecode)
// ============================================

// === Fight.Fight_constructor (()V) ===
// Instrucoes: 20
// APIs usadas:
//   1x javax/microedition/midlet/MIDlet.<init> -> ??? javax/microedition/midlet/MIDlet.<init>
//   1x javax/microedition/lcdui/Display.getDisplay -> j2me_display_get
void Fight_constructor() {
    // TODO: traduzir logica do bytecode
}

// === Fight.Fight_startApp (()V) ===
// Instrucoes: 10
// APIs usadas:
//   1x javax/microedition/lcdui/Displayable.setCommandListener -> ??? javax/microedition/lcdui/Displayable.setCommandListener
//   1x javax/microedition/lcdui/Display.setCurrent -> j2me_display_set
void Fight_startApp() {
    // TODO: traduzir logica do bytecode
}

// === Fight.Fight_pauseApp (()V) ===
// Instrucoes: 101
// APIs usadas:
//   4x javax/microedition/lcdui/List.append -> ??? javax/microedition/lcdui/List.append
//   2x javax/microedition/lcdui/Command.<init> -> ??? javax/microedition/lcdui/Command.<init>
//   2x javax/microedition/lcdui/Displayable.addCommand -> ??? javax/microedition/lcdui/Displayable.addCommand
//   1x javax/microedition/lcdui/List.<init> -> ??? javax/microedition/lcdui/List.<init>
//   1x javax/microedition/lcdui/Displayable.setCommandListener -> ??? javax/microedition/lcdui/Displayable.setCommandListener
//   1x javax/microedition/lcdui/Display.setCurrent -> j2me_display_set
void Fight_pauseApp() {
    // TODO: traduzir logica do bytecode
}

// === Fight.Fight_destroyApp ((Z)V) ===
// Instrucoes: 13
// APIs usadas:
//   1x javax/microedition/lcdui/Display.setCurrent -> j2me_display_set
//   1x javax/microedition/midlet/MIDlet.notifyDestroyed -> ??? javax/microedition/midlet/MIDlet.notifyDestroyed
void Fight_destroyApp() {
    // TODO: traduzir logica do bytecode
}

// === Fight.Fight_commandAction ((Ljavax/microedition/lcdui/Command;Ljavax/microedition/lcdui/Displayable;)V) ===
// Instrucoes: 304
// APIs usadas:
//   10x javax/microedition/lcdui/List.getSelectedIndex -> ??? javax/microedition/lcdui/List.getSelectedIndex
//   10x javax/microedition/lcdui/List.getString -> ??? javax/microedition/lcdui/List.getString
//   10x java/lang/String.equals -> ??? java/lang/String.equals
//   4x javax/microedition/lcdui/Display.setCurrent -> j2me_display_set
//   2x javax/microedition/lcdui/Form.<init> -> ??? javax/microedition/lcdui/Form.<init>
//   2x javax/microedition/lcdui/Form.append -> ??? javax/microedition/lcdui/Form.append
//   2x javax/microedition/lcdui/Displayable.addCommand -> ??? javax/microedition/lcdui/Displayable.addCommand
//   2x javax/microedition/lcdui/Displayable.setCommandListener -> ??? javax/microedition/lcdui/Displayable.setCommandListener
void Fight_commandAction() {
    // TODO: traduzir logica do bytecode
}

// === Fight.Fight_displaySettingsScreen (()V) ===
// Instrucoes: 85
// APIs usadas:
//   6x javax/microedition/lcdui/List.append -> ??? javax/microedition/lcdui/List.append
//   2x java/lang/String.equals -> ??? java/lang/String.equals
//   1x javax/microedition/lcdui/List.<init> -> ??? javax/microedition/lcdui/List.<init>
//   1x javax/microedition/lcdui/Displayable.addCommand -> ??? javax/microedition/lcdui/Displayable.addCommand
//   1x javax/microedition/lcdui/Displayable.setCommandListener -> ??? javax/microedition/lcdui/Displayable.setCommandListener
//   1x javax/microedition/lcdui/Display.setCurrent -> j2me_display_set
void Fight_displaySettingsScreen() {
    // TODO: traduzir logica do bytecode
}

// === FightC.FightC_hideNotify (()V) ===
// Instrucoes: 4
void FightC_hideNotify() {
    // TODO: traduzir logica do bytecode
}

// === FightC.FightC_constructor ((LFight;)V) ===
// Instrucoes: 371
// APIs usadas:
//   4x javax/microedition/lcdui/Command.<init> -> ??? javax/microedition/lcdui/Command.<init>
//   1x javax/microedition/lcdui/Canvas.<init> -> ??? javax/microedition/lcdui/Canvas.<init>
//   1x java/util/Random.<init> -> j2me_random_init
//   1x java/util/Calendar.getInstance -> ??? java/util/Calendar.getInstance
//   1x java/util/Calendar.getTime -> ??? java/util/Calendar.getTime
//   1x java/util/Date.getTime -> ??? java/util/Date.getTime
//   1x javax/microedition/lcdui/Canvas.getWidth -> j2me_canvas_w
//   1x javax/microedition/lcdui/Canvas.getHeight -> j2me_canvas_h
void FightC_constructor() {
    // TODO: traduzir logica do bytecode
}

// === FightC.FightC_run (()V) ===
// Instrucoes: 22
// APIs usadas:
//   1x java/lang/Thread.sleep -> j2me_sleep
//   1x javax/microedition/lcdui/Canvas.repaint -> j2me_canvas_repaint
//   1x javax/microedition/lcdui/Canvas.serviceRepaints -> ??? javax/microedition/lcdui/Canvas.serviceRepaints
void FightC_run() {
    // TODO: traduzir logica do bytecode
}

// === FightC.FightC_paint ((Ljavax/microedition/lcdui/Graphics;)V) ===
// Instrucoes: 136
// APIs usadas:
//   5x javax/microedition/lcdui/Graphics.setColor -> j2me_gfx_set_color
//   3x javax/microedition/lcdui/Graphics.fillRect -> j2me_gfx_fill_rect
//   2x javax/microedition/lcdui/Graphics.drawImage -> j2me_image_blit
//   1x javax/microedition/lcdui/Image.createImage -> j2me_image_create
//   1x javax/microedition/lcdui/Image.getGraphics -> j2me_image_get_graphics
//   1x javax/microedition/lcdui/Graphics.drawRect -> ??? javax/microedition/lcdui/Graphics.drawRect
//   1x java/util/Calendar.getInstance -> ??? java/util/Calendar.getInstance
//   1x java/util/Calendar.getTime -> ??? java/util/Calendar.getTime
void FightC_paint() {
    // TODO: traduzir logica do bytecode
}

// === FightC.FightC_paintCopperBar ((Ljavax/microedition/lcdui/Graphics;Z)V) ===
// Instrucoes: 157
// APIs usadas:
//   4x javax/microedition/lcdui/Graphics.setColor -> j2me_gfx_set_color
//   4x java/lang/StringBuffer.append -> ??? java/lang/StringBuffer.append
//   2x javax/microedition/lcdui/Graphics.fillRect -> j2me_gfx_fill_rect
//   2x java/lang/StringBuffer.<init> -> ??? java/lang/StringBuffer.<init>
//   2x java/lang/String.valueOf -> ??? java/lang/String.valueOf
//   2x java/lang/StringBuffer.toString -> ??? java/lang/StringBuffer.toString
//   2x javax/microedition/lcdui/Font.stringWidth -> ??? javax/microedition/lcdui/Font.stringWidth
//   2x javax/microedition/lcdui/Graphics.drawString -> j2me_font_draw
void FightC_paintCopperBar() {
    // TODO: traduzir logica do bytecode
}

// === FightC.FightC_drawScreen (()V) ===
// Instrucoes: 182
// APIs usadas:
//   4x javax/microedition/lcdui/Graphics.drawString -> j2me_font_draw
//   3x javax/microedition/lcdui/Graphics.setColor -> j2me_gfx_set_color
//   3x java/lang/StringBuffer.append -> ??? java/lang/StringBuffer.append
//   3x javax/microedition/lcdui/Image.createImage -> j2me_image_create
//   2x javax/microedition/lcdui/Displayable.addCommand -> ??? javax/microedition/lcdui/Displayable.addCommand
//   1x javax/microedition/lcdui/Graphics.fillRect -> j2me_gfx_fill_rect
//   1x javax/microedition/lcdui/Canvas.repaint -> j2me_canvas_repaint
//   1x javax/microedition/lcdui/Canvas.serviceRepaints -> ??? javax/microedition/lcdui/Canvas.serviceRepaints
void FightC_drawScreen() {
    // TODO: traduzir logica do bytecode
}

// === FightC.FightC_incPerc ((I)V) ===
// Instrucoes: 34
// APIs usadas:
//   2x javax/microedition/lcdui/Graphics.setColor -> j2me_gfx_set_color
//   1x javax/microedition/lcdui/Graphics.drawRect -> ??? javax/microedition/lcdui/Graphics.drawRect
//   1x javax/microedition/lcdui/Graphics.fillRect -> j2me_gfx_fill_rect
void FightC_incPerc() {
    // TODO: traduzir logica do bytecode
}

// === FightC.FightC_game (()V) ===
// Instrucoes: 914
// APIs usadas:
//   5x javax/microedition/lcdui/Graphics.setColor -> j2me_gfx_set_color
//   4x javax/microedition/lcdui/Font.stringWidth -> ??? javax/microedition/lcdui/Font.stringWidth
//   4x javax/microedition/lcdui/Graphics.drawString -> j2me_font_draw
//   3x javax/microedition/lcdui/Graphics.fillRect -> j2me_gfx_fill_rect
//   2x java/lang/String.length -> ??? java/lang/String.length
//   1x javax/microedition/lcdui/Graphics.setFont -> j2me_noop
//   1x java/lang/String.substring -> ??? java/lang/String.substring
//   1x javax/microedition/lcdui/Graphics.clipRect -> ??? javax/microedition/lcdui/Graphics.clipRect
void FightC_game() {
    // TODO: traduzir logica do bytecode
}

// === FightC.FightC_paintBackground (()V) ===
// Instrucoes: 570
// APIs usadas:
//   12x javax/microedition/lcdui/Graphics.setColor -> j2me_gfx_set_color
//   12x java/lang/StringBuffer.append -> ??? java/lang/StringBuffer.append
//   8x javax/microedition/lcdui/Graphics.drawRoundRect -> ??? javax/microedition/lcdui/Graphics.drawRoundRect
//   8x javax/microedition/lcdui/Graphics.fillRoundRect -> ??? javax/microedition/lcdui/Graphics.fillRoundRect
//   7x javax/microedition/lcdui/Graphics.fillRect -> j2me_gfx_fill_rect
//   6x java/lang/StringBuffer.<init> -> ??? java/lang/StringBuffer.<init>
//   6x java/lang/StringBuffer.toString -> ??? java/lang/StringBuffer.toString
//   6x javax/microedition/lcdui/Graphics.drawString -> j2me_font_draw
void FightC_paintBackground() {
    // TODO: traduzir logica do bytecode
}

// === FightC.FightC_paintFighters (()V) ===
// Instrucoes: 1078
// APIs usadas:
//   7x javax/microedition/lcdui/Graphics.drawString -> j2me_font_draw
//   6x javax/microedition/lcdui/Graphics.setColor -> j2me_gfx_set_color
//   6x java/lang/StringBuffer.append -> ??? java/lang/StringBuffer.append
//   5x javax/microedition/lcdui/Graphics.fillRect -> j2me_gfx_fill_rect
//   4x javax/microedition/lcdui/Graphics.drawRect -> ??? javax/microedition/lcdui/Graphics.drawRect
//   3x javax/microedition/lcdui/Graphics.drawImage -> j2me_image_blit
//   3x java/lang/StringBuffer.<init> -> ??? java/lang/StringBuffer.<init>
//   3x java/lang/StringBuffer.toString -> ??? java/lang/StringBuffer.toString
void FightC_paintFighters() {
    // TODO: traduzir logica do bytecode
}

// === FightC.FightC_checkForHitFighters (()V) ===
// Instrucoes: 406
// APIs usadas:
//   3x java/util/Calendar.getInstance -> ??? java/util/Calendar.getInstance
//   3x java/util/Calendar.getTime -> ??? java/util/Calendar.getTime
//   3x java/util/Date.getTime -> ??? java/util/Date.getTime
//   1x java/lang/Math.abs -> abs
void FightC_checkForHitFighters() {
    // TODO: traduzir logica do bytecode
}

// === FightC.FightC_damageFighter ((Z)V) ===
// Instrucoes: 271
void FightC_damageFighter() {
    // TODO: traduzir logica do bytecode
}

// === FightC.FightC_controlCpuFighter ((Z)V) ===
// Instrucoes: 296
// APIs usadas:
//   2x java/lang/Math.abs -> abs
void FightC_controlCpuFighter() {
    // TODO: traduzir logica do bytecode
}

// === FightC.FightC_rand ((II)I) ===
// Instrucoes: 12
// APIs usadas:
//   1x java/util/Random.nextInt -> j2me_random_next
int FightC_rand() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === FightC.FightC_keyPressed ((I)V) ===
// Instrucoes: 98
// APIs usadas:
//   1x javax/microedition/lcdui/Canvas.getGameAction -> j2me_input_get_actions
void FightC_keyPressed() {
    // TODO: traduzir logica do bytecode
}

// === FightC.FightC_keyReleased ((I)V) ===
// Instrucoes: 47
// APIs usadas:
//   1x javax/microedition/lcdui/Canvas.getGameAction -> j2me_input_get_actions
void FightC_keyReleased() {
    // TODO: traduzir logica do bytecode
}

// === FightC.FightC_startGame (()V) ===
// Instrucoes: 84
// APIs usadas:
//   2x javax/microedition/lcdui/Displayable.removeCommand -> ??? javax/microedition/lcdui/Displayable.removeCommand
void FightC_startGame() {
    // TODO: traduzir logica do bytecode
}

// === FightC.FightC_playGame (()V) ===
// Instrucoes: 122
// APIs usadas:
//   3x javax/microedition/lcdui/Displayable.addCommand -> ??? javax/microedition/lcdui/Displayable.addCommand
//   1x javax/microedition/lcdui/Displayable.removeCommand -> ??? javax/microedition/lcdui/Displayable.removeCommand
void FightC_playGame() {
    // TODO: traduzir logica do bytecode
}

// === FightC.FightC_skip (()V) ===
// Instrucoes: 16
// APIs usadas:
//   1x javax/microedition/lcdui/Displayable.removeCommand -> ??? javax/microedition/lcdui/Displayable.removeCommand
//   1x javax/microedition/lcdui/Displayable.addCommand -> ??? javax/microedition/lcdui/Displayable.addCommand
void FightC_skip() {
    // TODO: traduzir logica do bytecode
}

// === OEM.OEM_constructor ((Ljavax/microedition/lcdui/Display;)V) ===
// Instrucoes: 44
// APIs usadas:
//   5x com/nokia/mid/sound/Sound.<init> -> ??? com/nokia/mid/sound/Sound.<init>
//   1x java/lang/Object.<init> -> j2me_noop
void OEM_constructor() {
    // TODO: traduzir logica do bytecode
}

// === OEM.OEM_setLightOn (()V) ===
// Instrucoes: 4
// APIs usadas:
//   1x com/nokia/mid/ui/DeviceControl.setLights -> ??? com/nokia/mid/ui/DeviceControl.setLights
void OEM_setLightOn() {
    // TODO: traduzir logica do bytecode
}

// === OEM.OEM_setLightOff (()V) ===
// Instrucoes: 4
// APIs usadas:
//   1x com/nokia/mid/ui/DeviceControl.setLights -> ??? com/nokia/mid/ui/DeviceControl.setLights
void OEM_setLightOff() {
    // TODO: traduzir logica do bytecode
}

// === OEM.OEM_vibration (()V) ===
// Instrucoes: 4
// APIs usadas:
//   1x com/nokia/mid/ui/DeviceControl.startVibra -> ??? com/nokia/mid/ui/DeviceControl.startVibra
void OEM_vibration() {
    // TODO: traduzir logica do bytecode
}

// === OEM.OEM_playSound ((Ljava/lang/String;)V) ===
// Instrucoes: 48
// APIs usadas:
//   5x java/lang/String.equals -> ??? java/lang/String.equals
//   5x com/nokia/mid/sound/Sound.play -> ??? com/nokia/mid/sound/Sound.play
//   1x java/lang/String.toLowerCase -> ??? java/lang/String.toLowerCase
void OEM_playSound() {
    // TODO: traduzir logica do bytecode
}

// ============================================
// GAME LOOP PRINCIPAL
// ============================================

int main(void) {
    j2me_gfx_init();
    j2me_input_init();
    j2me_random_init();

    while (1) {
        j2me_input_update();
        if (j2me_input_should_quit()) break;

        j2me_gfx_begin_frame();
        j2me_gfx_clear(0x101020);

        // TODO: chamar metodos do jogo aqui
        // Fight_startApp();
        // FightC_paint();

        j2me_gfx_flip();
    }

    j2me_gfx_shutdown();
    sceKernelExitGame();
    return 0;
}
