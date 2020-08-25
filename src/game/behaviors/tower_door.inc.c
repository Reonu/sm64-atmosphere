// tower_door.c.inc

void bhv_tower_door_loop(void) {
    if (check_mario_attacking(0)) {
        obj_explode_and_spawn_coins(80.0f, 0);
        create_sound_spawner(SOUND_OBJ_UKIKI_CHATTER_LONG);
    }
}
