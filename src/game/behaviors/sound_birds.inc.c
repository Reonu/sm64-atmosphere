// sound_birds.inc.c

void bhv_birds_sound_loop(void) {
    if (o->oTimer == 0){
        gMarioObject->header.gfx.node.flags |= GRAPH_RENDER_INVISIBLE;
        set_mario_action(gMarioState, ACT_WAITING_FOR_DIALOG, 0);
        cutscene_object(CUTSCENE_PLANE, o);
    }
}
