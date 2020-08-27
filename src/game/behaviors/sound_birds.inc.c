// sound_birds.inc.c

void bhv_birds_sound_loop(void) {
    if (o->oTimer == 0){
        if (gCurrLevelNum == LEVEL_WMOTR){
            gMarioObject->header.gfx.node.flags |= GRAPH_RENDER_INVISIBLE;
            set_mario_action(gMarioState, ACT_WAITING_FOR_DIALOG, 0);
            cutscene_object(CUTSCENE_PLANE, o);
        }
        if (gCurrLevelNum == LEVEL_CASTLE_GROUNDS && gMarioState->action != ACT_END_PEACH_CUTSCENE){
            level_trigger_warp(gMarioObject, WARP_OP_CREDITS_START);
        }
    }
}
