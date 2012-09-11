/** @file src/enhancement.c
 *
 * Enhancements to the original game.  In all cases, true indicates
 * deviation from the original game.
 */

#include "enhancement.h"

/**
 * Enhancements that do not have a separate entry.
 */
bool g_dune2_enhanced = true;

/**
 * Fix the often incorrect warning message regarding the direction of
 * incoming enemies in the early missions.
 */
bool enhancement_fix_enemy_approach_direction_warning = true;

/**
 * In the original game, once a unit starts to wobble, it will never
 * stop wobbling.
 */
bool enhancement_fix_everlasting_unit_wobble = true;

/**
 * In the original game, sonic blasts' travel distance and units'
 * relative firing rates vary with the game speed.
 */
bool enhancement_fix_firing_rates_and_ranges = true;

/**
 * Too many tile colours are remapped with house colours, causing
 * graphical issues with the IX building.
 */
bool enhancement_fix_ix_colour_remapping = true;

/**
 * In the original game, Ordos get siege tanks one level too late
 * (affects both players and AI).
 */
bool enhancement_fix_ordos_siege_tank_tech = true;

/**
 * When a unit enters a structure, the last tile the unit was on
 * becomes selected rather than the entire structure.
 */
bool enhancement_fix_selection_after_entering_structure = true;

/**
 * Fix some of the typos and formatting issues from the original game,
 * including the silo, windtrap, and outpost text.
 */
bool enhancement_fix_typos = true;

/**
 * Dune 2 likes to search the tiles surrounding the one you clicked
 * for an appropriate target, which can be annoying.
 */
bool enhancement_i_mean_where_i_clicked = true;

/**
 * In the original game, sandworms disappear after eating a set number
 * of units.
 */
bool enhancement_insatiable_sandworms = true;

/**
 * The original selection cursor can be a little obstructive with
 * multiple units selected.
 */
bool enhancement_new_selection_cursor = true;

/**
 * Do not pause game play when playing the radar activation and
 * deactivation animation sequences.
 */
bool enhancement_nonblocking_radar_animation = true;

/**
 * Enable some extra sounds and voices.  This restores the original
 * "The Building of a Dynasty" voice!
 */
bool enhancement_play_additional_voices = true;

/**
 * The original game ignores all structures' health fields specified
 * in the scenario, giving them all full health instead.
 */
bool enhancement_read_scenario_structure_health = false;

/**
 * A mistake in reading the scenario script causes reinforcements to
 * only be sent once.
 */
bool enhancement_repeat_reinforcements = true;

/**
 * Enable the security question, accept any answer (default), or skip
 * it entirely.
 */
enum SecurityQuestionMode enhancement_security_question = SECURITY_QUESTION_ACCEPT_ALL;

/**
 * Render bullets as if they move every frame, rather than every third
 * frame, for smoother bullet movement.  Also works on flying units.
 */
bool enhancement_smooth_bullet_movement = true;

/**
 * Use the Fremen and Sardaukar portaits for troopers and trooper
 * squads.
 */
bool enhancement_special_trooper_portaits = true;

/**
 * Prevent structures built completely on concrete slabs from
 * degrading, as this seems in contrast with the idea of slabs.
 */
bool enhancement_structures_on_concrete_do_not_degrade = true;
