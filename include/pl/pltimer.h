#pragma once

void pl_reset_timer(void);
void pl_start_timer(void);
void pl_stop_timer(void);
void pl_increment_timer(void);
char* pl_get_timer(void);
void pl_stop_timer_with_subframe(f32 objPos[3], f32 marioHitboxRadius, f32 marioHitboxHeight, f32 marioHitboxDownOffset,
    f32 objectHitboxRadius, f32 objectHitboxHeight, f32 objectHitboxDownOffset);
void pl_set_mario_pos(f32 newMarioPos[3]);
