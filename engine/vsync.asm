.ifndef VSYNC_INC
VSYNC_INC = 1

.include "game.asm"

check_vsync:
   lda vsync_trig
   beq @done

   ; VSYNC has occurred, handle
   jsr game_tick

   stz vsync_trig
@done:
   rts

.endif
