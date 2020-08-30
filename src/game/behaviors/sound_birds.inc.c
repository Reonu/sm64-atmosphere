// sound_birds.inc.c

void bhv_birds_sound_loop(void) {
    if (o->oTimer == 0){
        if (gCurrLevelNum == LEVEL_CASTLE_GROUNDS){
            if (gMarioState->action != ACT_END_PEACH_CUTSCENE){
                level_trigger_warp(gMarioObject, WARP_OP_CREDITS_START);
            }
            
        }
        else if ((o->oBehParams == 2)) {
            cutscene_object(CUTSCENE_PLANE_BEHIND, o);
        }
        else if ((o->oBehParams == 1)) {
                gMarioObject->header.gfx.node.flags |= GRAPH_RENDER_INVISIBLE;
                set_mario_action(gMarioState, ACT_WAITING_FOR_DIALOG, 0);
                cutscene_object(CUTSCENE_PLANE, o);
        }
    }
    if ((gCurrLevelNum == LEVEL_WMOTR) && (gMarioState->pos[1] < 1290 )) {
        gMarioState->pos[2] = gMarioState->pos[2] - 200;
    }
}

