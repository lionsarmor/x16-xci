#ifndef KEY_H
#define KEY_H

typedef enum xci_key {
   TITLE = 0,
   AUTHOR,
   PALETTE_HEX,
   TILES_HEX,
   SPRITES_HEX,
   MENU_XCI,
   TITLE_SCREEN,
   INIT_CURSOR,
   ZONE,
   MENU_BG,
   MENU_FG,
   MENU_LC,
   MENU_SP,
   MENU_RC,
   MENU_DIV,
   MENU_CHECK,
   MENU_UNCHECK,
   MENU,
   MENU_ITEM,
   CONTROLS,
   ABOUT,
   TEXT1_BG,
   TEXT1_FG,
   TEXT2_BG,
   TEXT2_FG,
   TEXT3_BG,
   TEXT3_FG,
   TB_DIM,
   TOOL,
   TOOL_TILES,
   INVENTORY,
   WALK_CURSOR,
   RUN_CURSOR,
   LOOK_CURSOR,
   USE_CURSOR,
   TALK_CURSOR,
   STRIKE_CURSOR,
   DURATION,
   BITMAP,
   MUSIC,
   SPRITE_FRAMES,
   SPRITE,
   TILES,
   WAIT,
   SPRITE_MOVE,
   INV_DIM,
   INV_ITEM_DIM,
   INV_EMPTY,
   INV_LEFT_MARGIN,
   INV_RIGHT_MARGIN,
   INV_QUANT,
   INV_QUANT_MARGIN,
   INV_SCROLL,
   INV_SCROLL_MARGIN,
   INV_ITEM,
   LEVEL,
   END_ANIM,
   SPRITE_HIDE,
   INIT_LEVEL,
   FIRST_VISIT,
   TEXT_LINE,
   SCROLL,
   LINE_SKIP,
   CLEAR_TEXT,
   GO_LEVEL,
   TOOL_TRIGGER,
   ITEM_TRIGGER,
   IF,
   IF_NOT,
   END_IF,
   SET_STATE,
   CLEAR_STATE,
   GET_ITEM,

   // Emulation Only
   GIF_START,
   GIF_PAUSE,
   GIF_FRAME,

   // Debug for Engine Development
   SPRITE_DEBUG,


   NUM_XCI_KEYS
} xci_key_t;

#define MAX_KEY_LENGTH 31

xci_key_t key2idx(const char* key);
const char* idx2key(xci_key_t index);

void strn_tolower(char *dest, int max, const char *source);

#endif // KEY_H
